# Instructions and Opcodes 
   **R type: Register type** <br />
   **I type: Immediate type** <br />
   **S type: Store type** <br />
   **B type: Branch type** <br />
   **U type: Upper immediate type** <br />
   **J type: Jump type** <br />
<br />
## Opcodes 
Opcodes are the codes which determine the type of instructions <br />

**R-type**: 0110011 <br />
**I-type**: 0010011 <br />
**S-type**: 0100011 <br />
**B-type**: 1100011 <br />
**U-type**: 0110111 <br />
**J-type**: 1101111 <br />


## R-type
![image](https://github.com/user-attachments/assets/3b167664-3612-47be-b032-93807f80efa7)

## I-type
![image](https://github.com/user-attachments/assets/a4050311-05cf-4ece-b917-528952cb7a27)

## S-type
![image](https://github.com/user-attachments/assets/baa9961f-9bcc-4b4f-8672-3d43098f3c51)

## B-type
![image](https://github.com/user-attachments/assets/166128bd-50c3-41bb-b885-c055dc420c2c)

## U-type
![image](https://github.com/user-attachments/assets/fa52d5a9-001e-4963-a598-a1b5afe6051a)

## J-type
![image](https://github.com/user-attachments/assets/04694461-2e76-43b6-8c9e-a20fecd81496)



## Machine Instructions 

![image](https://github.com/user-attachments/assets/7c80d428-b759-4cc3-a61b-d67c6cb9de56)

### addi sp, sp, 16
**Hexadecimal instruction**: ff010113 <br />
**Binary instruction** : 111111110000|00010|000|00010|0010011 <br />
**Opcode**: 0010011 <br />
**Source**: rs1 - 00010 <br />
**Destination**: 00010 <br />
**Type**: I-type <br />

![image](https://github.com/user-attachments/assets/f36e2421-8de6-4d2d-bf8c-c7a3591cb7ff)


### sd ra,8(sp)
  **Hexadecimal instruction**: 00113423 <br />
  **Binary instruction** : 0000000|00001|00010|011|01000|0100011 <br />
  **Opcode**: 0100011 <br />
  **Source**: rs1 - 00010 <br />
  **Destination**: rs2 - 00001 <br />
  **Type**: S-type <br />

![image](https://github.com/user-attachments/assets/a476c369-8c68-4971-aed5-9eb21f5ee59e)

### li a1, 45
  **Hexadecimal instruction**: 02d00593 <br />
  **Binary instruction** : 0000000101101|00000|000|01011|0010011 <br />
  **Opcode**: 0010011 <br />
  **Source**: rs1 - 00000 <br />
  **Destination**: rd-  01011 <br />
  **Type**: I-type <br />

![image](https://github.com/user-attachments/assets/868a8748-6f85-4b1c-aaa1-94e12b2693c5)

### lui a0, 0x21
  **Hexadecimal instruction**: 00021537 <br />
  **Binary instruction** : 0000000|00010|10101|011|01011|0010011 <br />
  **Opcode**: 0010011 <br />
  **Source**: rs1 - 10101 <br />
  **Destination**: rd - 01011 <br />
  **Type**: I-type <br />

![image](https://github.com/user-attachments/assets/fb67142b-aa99-4910-88c6-ba7afe3629f9)

### jal ra, 10404 <printf>
  **Hexadecimal instruction**: 26c000ef <br />
  **Binary instruction** : 001001101100|000000000000|00000|1101111 <br />
  **Opcode**: 1101111 <br />
  **Source**: Immediate: 0x26c00 <br />
  **Destination**: rd - 0000 <br />
  **Type**: J-type <br />

![image](https://github.com/user-attachments/assets/e092f6ba-370d-489f-91d8-113a21bdefcd)

### ld ra,8(sp)
  **Hexadecimal instruction**: 00813083 <br />
  **Binary instruction** : 000000001000|00010|000|00011|0000011 <br />
  **Opcode**: 0000011 <br />
  **Source**: rs1 - 00010 <br />
  **Destination**: rd - 00011 <br />
  **Type**: I-type <br />

![image](https://github.com/user-attachments/assets/d10f396a-ee8d-487c-8828-f39519a46c79)

### mv a1, a0
  **Hexadecimal instruction**: 00050593 <br />
  **Binary instruction** : 000000000000|00101|000|01011|0010011 <br />
  **Opcode**: 0010011 <br />
  **Source**: rs1 - 00101 <br />
  **Destination**: rd - 01011 <br />
  **Type**: I-type <br />

![image](https://github.com/user-attachments/assets/bc3c72c6-ea50-41d6-8850-f8fb76281ed2)

### auipc a5, 0xffff0
  **Hexadecimal instruction**: ffff0797 <br />
  **Binary instruction** : 11111111111111111111|00001|0110111 <br />
  **Opcode**: 0110111 <br />
  **Source**: Immediate: 0xFFFFF <br />
  **Destination**: rd - 00001 <br />
  **Type**: U-type <br />

![image](https://github.com/user-attachments/assets/3f6a45c3-daf4-4249-a77b-062e8e6ea2a5)

### srai s2, s2, 0x3
  **Hexadecimal instruction**: 40395913 <br />
  **Binary instruction** : 010000000011|01011|001|01001|0010011 <br />
  **Opcode**: 0010011 <br />
  **Source**: rs1 - 01011 <br />
  **Destination**: rd - 01001 <br />
  **Type**: I-type <br />

![image](https://github.com/user-attachments/assets/6c451660-2578-4c64-ad3a-f180c281d2e5)

### sub a5, a5, s0
  **Hexadecimal instruction**: 408787b3 <br />
  **Binary instruction** : 0100000|10000|01111|111|01111|0110011 <br />
  **Opcode**: 0110011 <br />
  **Source**: rs1 - 01111 <br />
  **Destination**: rs2 - 10000 <br />
  **Type**: R-type <br />

### slli a3, a3, 0x2 
  **Hexadecimal instruction**: 00269693 <br />
  **Binary instruction** : 000000000010|10010|101|01001|0010011 <br />
  **Opcode**: 0010011 <br />
  **Source**: rs1 - 10010 <br />
  **Destination**: rd - 01001 <br />
  **Type**: I-type <br />

![image](https://github.com/user-attachments/assets/e3b450bb-70f4-4122-b4bc-886f28375aee)

## seqz a0, a0
  **Hexadecimal instruction**: 00153513 <br />
  **Binary instruction** : 000000000001|01010|011|01001|0010011 <br />
  **Opcode**: 0010011 <br />
  **Source**: rs1 - 01010 <br />
  **Destination**: rd - 01001 <br />
  **Type**: I-type <br />

![image](https://github.com/user-attachments/assets/84aebd5f-ada2-4042-b2c9-9a9f6ec54535)

## lhu a2, -2(a4)
  **Hexadecimal instruction**: ffe75603 <br />
  **Binary instruction** :111111111110|00111|010|01011|0000011 <br />
  **Opcode**: 0010011 <br />
  **Source**: rs1 - 00111 <br />
  **Destination**: rd - 01011 <br />
  **Type**: I-type <br />

![image](https://github.com/user-attachments/assets/bdba242f-4ff3-457b-a54a-f48cab638a94)

## not a5, a5
  **Hexadecimal instruction**: fff7c793 <br />
  **Binary instruction** :111111111111|01111|111|01111|0010011 <br />
  **Opcode**: 0010011 <br />
  **Source**: rs1 - 01111 <br />
  **Destination**: rd - 01111 <br />
  **Type**: I-type <br />










