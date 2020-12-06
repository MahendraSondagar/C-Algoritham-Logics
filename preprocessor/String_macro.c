/*'#' is used to convert the argument in to the string */
#include <stdio.h>
#define PRINTF(x) printf(#x)
int main(void)
{
 PRINTF(hello world\r\n);
 PRINTF(12345\r\n);
 PRINTF(12.3625\r\n);
 return 0;
}
