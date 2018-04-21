#include<stdio.h>

main()
{
    int n;
    scanf("%d",&n);
    int fact=n;
    while(--n)
    {
        fact*=n;
    }
    printf("%d",fact);
}
