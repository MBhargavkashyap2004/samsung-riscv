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

### addi sp, sp, 16
**Hexadecimal instruction**: ff010113 <br />
**Binary instruction** : 111111110000|00010|000|00010|0010011 <br />
**Opcode**: 0010011 <br />
**Source**: rs1 - 00010 <br />
**Destination**: 00010 <br />
**Type**: I-type <br />


### sd ra,8(sp)
  **Hexadecimal instruction**: 00113423 <br />
  **Binary instruction** : 0000000|00001|00010|011|01000|0100011 <br />
  **Opcode**: 0100011 <br />
  **Source**: rs1 - 00010 <br />
  **Destination**: rs2 - 00001 <br />
  **Type**: S-type <br />

### li a1, 45
  **Hexadecimal instruction**: 02d00593 <br />
  **Binary instruction** : 0000000101101|00000|000|01011|0010011 <br />
  **Opcode**: 0010011 <br />
  **Source**: rs1 - 00000 <br />
  **Destination**: rd-  01011 <br />
  **Type**: I-type <br />

### lui a0, 0x21
  **Hexadecimal instruction**: 00021537 <br />
  **Binary instruction** : 0000000|00010|10101|011|01011|0010011 <br />
  **Opcode**: 0010011 <br />
  **Source**: rs1 - 10101 <br />
  **Destination**: rd - 01011 <br />
  **Type**: I-type <br />

### jal ra, 10404 <printf>
  **Hexadecimal instruction**: 26c000ef <br />
  **Binary instruction** : 001001101100|000000000000|00000|1101111 <br />
  **Opcode**: 1101111 <br />
  **Source**: Immediate: 0x26c00 <br />
  **Destination**: rd - 0000 <br />
  **Type**: J-type <br />

### ld ra,8(sp)
  **Hexadecimal instruction**: 00813083 <br />
  **Binary instruction** : 000000001000|00010|000|00011|0000011 <br />
  **Opcode**: 0000011 <br />
  **Source**: rs1 - 00010 <br />
  **Destination**: rd - 00011 <br />
  **Type**: I-type <br />

### mv a1, a0
  **Hexadecimal instruction**: 00050593 <br />
  **Binary instruction** : 000000000000|00101|000|01011|0010011 <br />
  **Opcode**: 0010011 <br />
  **Source**: rs1 - 00101 <br />
  **Destination**: rd - 01011 <br />
  **Type**: I-type <br />

### auipc a5, 0xffff0
  **Hexadecimal instruction**: ffff0797 <br />
  **Binary instruction** : 11111111111111111111|00001|0110111 <br />
  **Opcode**: 0110111 <br />
  **Source**: Immediate: 0xFFFFF <br />
  **Destination**: rd - 00001 <br />
  **Type**: U-type <br />

### srai s2, s2, 0x3
  **Hexadecimal instruction**: 40395913 <br />
  **Binary instruction** : 010000000011|01011|001|01001|0010011 <br />
  **Opcode**: 0010011 <br />
  **Source**: rs1 - 01011 <br />
  **Destination**: rd - 01001 <br />
  **Type**: I-type <br />

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






