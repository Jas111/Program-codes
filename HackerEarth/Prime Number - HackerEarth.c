#include<stdio.h>

main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<=n;i++)   a[i]=0;
    a[0]=a[1]=1;
    for(int i =0;i<=n;i++)
    {
        if(a[i]==0) 
        {
            a[i]=1;
            int k=1;
            while(k*i<=n) a[i*(k++)]=1;
            printf("%d ",i);
        }
    }
}
