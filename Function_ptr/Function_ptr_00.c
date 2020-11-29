#include <stdio.h>

void MyCallback(void)
{
   printf("Calling to MyCallback\r\n");
}

int main(void)
{
   printf("Example: Function_ptr_00\r\n");
   void (*fun_ptr)(void)  = MyCallback;   /* Assining the address of the Callback function to the pointer*/
   /* Calling the function using function pointer*/
   (*fun_ptr)();
   return 0;
}