// Program to compute sum using pointers.

#include <stdio.h>
int main()
{
   int num1, num2, *p, *q, sum;

   printf("Enter two integers to compute sum:\n");
   scanf("%d%d", &num1, &num2);

   p = &num1;
   q = &num2;

   sum = *p + *q;

   printf("Sum of %d and %d is  %d\n", num1, num2, sum);

   return 0;
}