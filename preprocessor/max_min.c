#include <stdio.h>
#define MAX(a,b) (((a)>(b)) ? (a) : (b))
#define MIN(a,b) (((a)<(b)) ? (a) : (b))

int main(void)
{
  printf("Max: %d\r\n", MAX(10,-5));
  printf("Min: %d\r\n", MIN(10,-5));
  return 0;
}