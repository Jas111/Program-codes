#include<stdio.h>

main()
{
    long long prod= 1;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int num;
        scanf("%d",&num);
        prod = (prod*num)%1000000007;
    }
    printf("%lld",prod);
}
