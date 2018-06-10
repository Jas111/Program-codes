#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    int max=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])    max = a[i];   
    }
    int min=101;
    for(int j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
        if(min>b[j])    min = b[j];
    }
    int lcm = max;
    for(int i=max;i<101;i=i+max)
    {
        int flag = 1;
        for(int j=0;j<n;j++)
        {
            if(i%a[j]!=0){flag=0;break;}
        }
        if(flag==1){lcm=i;break;}
    }
    int gcd = min;
    for(int i=min;i>0;i--)
    {
        int flag=1;
        for(int j=0;j<m;j++)
        {
            if(b[j]%i!=0){flag=0;break;}
        }
        if(flag==1){gcd=i;break;}
    }
    
    int count=0,i=1;
    while(lcm*i<=gcd)
    {
        if(gcd%(lcm*i)==0)   count++;
        i++;
    }
    printf("%d",count);
}
