#include<stdio.h>

main()
{
    int n;
    scanf("%d",&n);
    long int res=0;
    for(int i=0;i<n;i++)
    {
        long int num;
        scanf("%ld",&num);
        res = res+ num;
    }
    
    printf("%ld",res);
}
