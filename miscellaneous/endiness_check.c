/* Aim to check the endiness of the system */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
   uint32_t data = 0x12457896;
   uint8_t *ptr = (uint8_t *)&data;
   if(*ptr == 0x96)
   {
      printf("Little endian arch.\r\n"); 
   }
   else if(*ptr == 0x12)
   {
      printf("Big endian arch.\r\n");
   }
   return 0;
}