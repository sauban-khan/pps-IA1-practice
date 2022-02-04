#include<stdio.h>

int input()
{
    int a;
    printf("Enter the numbers: ");
    scanf("%d", &a);
    return a;
}

int sum_n(int n)
{
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        ans = ans + i;
    }
    return ans;
}

void output(int n, int sum)
{
    for(int i=1; i<n; i++)
    {
      printf("%d+", i);
    }
    printf("%d is %d\n", n, sum);
}

int main()
{
    printf("Start Of The Program:\n");
    int n = input();
    int sum = sum_n(n);
    output(n, sum);
    return 0;
}