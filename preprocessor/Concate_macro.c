#include <stdio.h>
#define concate(x, y) x##y

int main(void)
{
 printf("Concating.... %d\r\n ", concate(3,2));
 return 0;
}