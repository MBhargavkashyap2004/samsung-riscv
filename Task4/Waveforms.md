## Commands used
![image](https://github.com/user-attachments/assets/3eaef369-abfa-487f-b87b-1c3e79cb7d3c)

## GTKwave initial view
![image](https://github.com/user-attachments/assets/9456ea9a-0721-49c7-b5ff-86202b194af6)

## Instructions
![image](https://github.com/user-attachments/assets/d11c8654-73a4-44d8-bcda-df98fa4d86ee)


## ADD Instruction (ADD r6, r2, r1)
![image](https://github.com/user-attachments/assets/36544389-2ab7-4edd-80dd-4a82ba6f9a9a)

Here, A and B shows the value inside the register. Aluout file shows the output of the operation. for the 32 bit instruction, ADD r6, r2, r1, (02208300), the output is 3. 

## ADDI Instruction (ADDI r12, r4, r5)
![image](https://github.com/user-attachments/assets/5bccd5b2-214d-402f-9f3d-89b5f854ccb2)


Here, The output for ADDI will be an immediate value added to the stored register. The immediate value 5 will be added to stored register valued 4, in the instruction 02415580 to give output 9 in the instruction 00520600.

## AND Instruction (AND r8, r1, r3)
![image](https://github.com/user-attachments/assets/1d494043-3121-4350-8ef6-93a60f240493)

32 bits instruction 0230A400 will perform bitwise AND operation between 3 and 1 to give 1. (011 & 001 = 001)

## BEQ Instruction (BEQ r0, r0, 15)
![image](https://github.com/user-attachments/assets/7a4171b3-77d9-46cf-a16c-7b387f722b53)

BEQ increaments the value stored in the register r0 by 15. Since the register r0 holds the value 0, 0+15 is 15. The program counter counts the value until 15.


## BNE Instruction (BNE r0, r1, 20)
![image](https://github.com/user-attachments/assets/57786c6c-e0a2-4044-b10d-847c6be634f4)

BNE instruction checks the value of the stored register. it branches the specified value, if the output is not equal. In this instruction, BNE branches the value 20 to the given instruction, to give the value 48.

## OR Instruction (OR r9, r2, r5)
![image](https://github.com/user-attachments/assets/b78e4633-33fa-4ceb-9021-52710ad2f7ec)
OR performs the ORing operation between two registers. 

## SLT instruction (SLT r1, r2, r4)
![image](https://github.com/user-attachments/assets/a0dfeaca-6ca1-4a92-bb8b-fdfaca50edd7)
Here, SLT compares the two values, here, 2 and 4. if 2<4, the output will be 1. The output is 1 here.

## SUB instruction (SUB r7, r1, r2)
![image](https://github.com/user-attachments/assets/2b8912fb-c93f-4e23-84d2-d2562792dfb3)
SUB instruction subtracts the value stored in two registers. Here, the output is -1, as 2 is getting subtracted by 1.

## XOR instruction (XOR r10, r1, r4)
![image](https://github.com/user-attachments/assets/fa3197bf-1df0-42a3-838c-bcd8b740510e)
XOR instruction XORs two register values. Here, 1 is XORed with 4.

## Overall Instruction set waveform output
![image](https://github.com/user-attachments/assets/ee3e6f39-8133-4037-8cbd-4faa1691832e)















