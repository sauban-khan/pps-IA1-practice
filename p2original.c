#include<stdio.h>
int input()
{
  int a;
  printf("Enter the number\n");
  scanf("%d",&a);
  return a;
}
int add(int m,int n)
{
  int sum;
  sum=m+n;
  return sum;
}
int output(int a, int b, int g)
{
  printf("Sum of the two numbers %d and %d is = %d\n",a,b,g);
  return 0;
}
int main()
{
  printf("Start Of The Program\n ");
  int h,n1,n2;
  n1=input();
  n2=input();
  h=add(n1,n2);
  output(n1,n2,h);
}