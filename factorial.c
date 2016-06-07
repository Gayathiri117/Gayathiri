#include <stdio.h>
int main()
{
   int fact=1,i;
   for(i=0;i<5;i++)
   {
       fact=fact*i;
   }
   printf("\n The factorial of the number is",fact);
    return 0;
}

