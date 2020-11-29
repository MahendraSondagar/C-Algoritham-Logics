#include <stdio.h>
void CallbackFunction(void)
{
    printf("CallbackFunction called\r\n");
}

void MyFunction(void (*p)(void))
{
    (*p)();
}

int main( void)
{
    printf("Example: Function_ptr_01 : Callback function demo\r\n");
    MyFunction(CallbackFunction);
    return 0;
}