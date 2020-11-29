#include <stdio.h>
/* type of the callback function */
typedef void (*Callback)(int , int);

/* Register calling function */
int MyFunction(Callback cb)
{
  cb(10,20);
}

/*Callback function */
void MyCallback(int a , int b)
{
 printf("Sum (a+b):%d\r\n", (a+b));
}

int main(void)
{
 printf("Example: Function_ptr06: Callback function with function type\r\n");
 MyFunction(MyCallback);

}