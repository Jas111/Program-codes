#include<stdio.h>

main()
{
    long int n,q;
    scanf("%ld %ld",&n,&q);
    long int arr[n];
    long int sum[n];
    for(long int i=0;i<n;i++)    
    {
        //Adding sum here itself becoz of fast input
        scanf("%ld",&arr[i]);
        sum[i]=arr[i];
        if(i>0) sum[i]+=sum[i-1];
        //printf("%d ",sum[i]);
    }
    while(q--)
    {
        long int l,r;
        scanf("%ld %ld",&l,&r);
        printf("%ld\n",(sum[r-1]-sum[l-1]+arr[l-1])/(r-l+1));
    }
}
