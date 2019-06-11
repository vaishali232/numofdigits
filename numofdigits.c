#include<stdio.h>
int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
    while(n>0)
    {
        sum++;
        n/=10;
    }
    printf("%ld",sum);
  
}
