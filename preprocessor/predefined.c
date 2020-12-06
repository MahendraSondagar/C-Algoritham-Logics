#include <stdio.h>
int main(void)
{
    printf ("Current date : %s\r\n", __DATE__);
    printf ("Current time: %s\r\n", __TIME__);
    printf ("Current line: %d\r\n", __LINE__);
    printf("Current file : %s\r\n", __FILE__);
    printf("Current function: %s\r\n", __FUNCTION__);
}