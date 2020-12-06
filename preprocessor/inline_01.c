#include <stdio.h>

int  __attribute__((_always_inline)) squre (x) 
{
    return (x*x);
}
int main(void)
{
  printf("Squre of 3 is : %d\r\n", squre(3));
  return 0;
}