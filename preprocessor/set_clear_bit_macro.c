#include <stdio.h>
#include <stdint.h>

#define SET_BIT(REG, BIT)    ((1<<BIT)|REG)
#define CLEAR_BIT(REG, BIT)  (~(1<<BIT)&REG)

int main(void)
{
  uint8_t a =0x05;
  printf("register value : 0x%02x\r\n", a);
  printf("after setting 1st bit: 0x%02x\r\n", SET_BIT(a, 1));
  printf("after clearing the 2nd bit : 0x%02x\r\n", CLEAR_BIT(a, 0));
  return 0;
}