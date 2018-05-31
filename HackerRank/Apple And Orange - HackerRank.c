#include <stdio.h>

int main()
{
    int s,t,a,b,m,n;
    scanf("%d %d %d %d %d %d",&s,&t,&a,&b,&m,&n);
    int appleCount=0,orangeCount=0;
    for(int i=0;i<m;i++)
    {
        int d;
        scanf("%d",&d);
        if(a+d>=s && a+d<=t)  appleCount++;
    }
    for(int i=0;i<n;i++)
    {
        int d;
        scanf("%d",&d);
        if(b+d>=s && b+d<=t)  orangeCount++;
    }
    
    printf("%d\n%d",appleCount,orangeCount);
    return 0;
}
