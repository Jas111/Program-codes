#include<stdio.h>

main()
{
    int n,p;
    scanf("%d %d",&n,&p);
    n=n%2==0?n+1:n;
    int a = (p/2);
    int b = (n-p)/2;
    printf("%d\n",a<b?a:b);
}
