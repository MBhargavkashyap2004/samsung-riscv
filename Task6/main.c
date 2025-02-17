#include <ch32v00x.h>
#include <debug.h>

#define LEFT_SENSOR GPIO_Pin_0  // PD0
#define MID_SENSOR  GPIO_Pin_1  // PD1
#define RIGHT_SENSOR GPIO_Pin_2 // PD2

#define MOTOR_A_IN1 GPIO_Pin_3  // PD3
#define MOTOR_A_IN2 GPIO_Pin_4  // PD4
#define MOTOR_B_IN3 GPIO_Pin_5  // PD5
#define MOTOR_B_IN4 GPIO_Pin_6  // PD6

void NMI_Handler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void HardFault_Handler(void) __attribute__((interrupt("WCH-Interrupt-fast")));

void Delay_Init(void);
void Delay_Ms(uint32_t n);
void MotorControl(uint8_t left, uint8_t right);
void SetupGPIO(void);

int main(void)
{
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
    SystemCoreClockUpdate();
    Delay_Init();
    SetupGPIO();

    while (1)
    {
        uint8_t left = GPIO_ReadInputDataBit(GPIOD, LEFT_SENSOR);
        uint8_t mid = GPIO_ReadInputDataBit(GPIOD, MID_SENSOR);
        uint8_t right = GPIO_ReadInputDataBit(GPIOD, RIGHT_SENSOR);

        if (mid) {
            MotorControl(1, 1);
        } else if (left) {
            MotorControl(0, 1);
        } else if (right) {
            MotorControl(1, 0);
        } else {
            MotorControl(0, 0);
        }

        Delay_Ms(100);
    }
}

void SetupGPIO(void)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);
    
    GPIO_InitTypeDef GPIO_InitStructure = {0};

    GPIO_InitStructure.GPIO_Pin = LEFT_SENSOR | MID_SENSOR | RIGHT_SENSOR;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    GPIO_Init(GPIOD, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = MOTOR_A_IN1 | MOTOR_A_IN2 | MOTOR_B_IN3 | MOTOR_B_IN4;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOD, &GPIO_InitStructure);
}

void MotorControl(uint8_t left, uint8_t right)
{
    if (left) {
        GPIO_SetBits(GPIOD, MOTOR_A_IN1);
        GPIO_ResetBits(GPIOD, MOTOR_A_IN2);
    } else {
        GPIO_ResetBits(GPIOD, MOTOR_A_IN1);
        GPIO_ResetBits(GPIOD, MOTOR_A_IN2);
    }

    if (right) {
        GPIO_SetBits(GPIOD, MOTOR_B_IN3);
        GPIO_ResetBits(GPIOD, MOTOR_B_IN4);
    } else {
        GPIO_ResetBits(GPIOD, MOTOR_B_IN3);
        GPIO_ResetBits(GPIOD, MOTOR_B_IN4);
    }
}

void NMI_Handler(void) {}
void HardFault_Handler(void)
{
    while (1) {}
}

