//add include statements
#include "dna.h"
//add function(s) code here
int factorial(int num)
{
   int sum=1;
   while (num > 0)
   {
      sum=sum*num;
      num=num-1;
   }
   return sum;
}
int gcd(int num1 ,int num2)
{
   while (num1 != num2)
   {
      if (num1 < num2)
      {
         int temp=num2;
         num2=num1;
         num1=temp;
      }
      if (num1 > num2)
      {
         num1=num1-num2;
      }
   }
   return num1;
}