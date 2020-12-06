
/* Inline Function are those function whose definitions are small and be substituted at the place where its function call is happened. 
Function substitution is totally compiler choice.*/

#include <stdio.h>
static __inline__ int squre(int x){ return (x*x);}

int main(void)
{
  printf("Squre of 3 is : %d\r\n", squre(3));
  return 0;
}