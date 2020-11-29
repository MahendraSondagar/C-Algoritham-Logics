#include <stdio.h>

void add(int a, int b)
{
  printf ("Addition : (a+b): %d\r\n", (a+b));
}

void sub(int a, int b)
{
 printf("Subtrcation : (a-b): %d\r\n", (a-b));
}

void mul (int a, int b)
{
 printf("Multiplication: (a*b): %d\r\n", (a*b));
}


int main(void)
{
    int opt =0;
    int a, b;
    printf("Example: Finction_ptr_02: Function array using function ptr\r\n");
    void (*Operation[])(int ,int)= {add, sub, mul};
    printf("Send operation: ");
    scanf("%d", &opt);
    printf("\r\nSend two initger : ");
    scanf("%d%d", &a,&b);

    if((opt<2) && (b!=0))
    {
      (*Operation[opt])(a,b);
    }
    return 0;
}