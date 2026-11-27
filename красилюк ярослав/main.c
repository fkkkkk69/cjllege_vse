#include <stdio.h>

int main()
{
 int a=1;
 int b=2;
 if (a>b)
 {
     printf("число а больше: %d\n", a);
 }
else
 {
      printf("число б больше: %d\n", b)
 }
if (a>0)
{
    printf("а положительное: %d\n", a)
}
if (a==0)
   {
    printf("a равно нулю: %d\n", a)
}
if (a<0)
{
    printf("а отрицательное: %d\n", a)
}
int n = 10;
int sluchainoe = 0;
for (int i = 1; i <= n; i++)
{
    sluchainoe = sluchainoe + i;
}
{
    printf("сумма от 1 до %d равна %d\n", n , sluchainoe);
}
int n = 10;
int factorial = 1;
for (int i = 1; i <=n; i++)
{
    factorial = factorial * i;
}
printf("факториал равен %d\n", n, factorial);
 return 0;
}
