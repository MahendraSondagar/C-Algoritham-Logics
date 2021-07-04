#include <stdio.h>

unsigned long long DecimalToBinary(int num)
{
   int rem=0;
   unsigned long long MyBin=0;
   while(num!= 0)
   {
      rem = num%2;
      num/=2;
      MyBin= MyBin*10+rem;     
      /*   
              1   =      (0 *10) +1;
              10  =      (1*10)  +0
              101 =      (10*10) +1


      */ 
   }
   return MyBin;
}

int main(void)
{
   int number;
   unsigned long long binary;
   printf("Enter the intiger number: ");
   scanf("%d", &number);
   binary= DecimalToBinary(number);
   printf("Binary of the %d is %lld\r\n", number, binary);
   return 0;

}