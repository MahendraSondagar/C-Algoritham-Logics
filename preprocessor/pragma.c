/* #pragma preprocessor directives*/
/* Pragma is used to call the futnction before main and at the exit of the program, just like constructor & destructor of the cpp*/
/* Note: below program will not work with gcc compiler!*/

#include <stdio.h>
void MyConstructor(void);
void MyDestructor(void);

#pragma startup MyConstructor
#pragma exit MyDstructor


void MyConstructr(void)
{
  printf("Allocating memories\r\n");
}

void MyDestructor(void)
{
    printf("Deallocating the memories\r\n");
}
int main(void)
{
printf("Inside the main\r\n");
}


