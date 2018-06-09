#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int res = 2*n*m + 2*(n+m);
    int arr[n][m];
    int max=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
            arr[i][j]--;
            if(max<arr[i][j])    max=arr[i][j];
        }
    }
    
    while(max--)
    {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]>0)
            {
            int count=0;
            if(i-1>=0)   if(arr[i-1][j]>0) count++;
            if(i+1<n)   if(arr[i+1][j]>0) count++;
            if(j-1>=0)   if(arr[i][j-1]>0) count++;
            if(j+1<m)   if(arr[i][j+1]>0) count++;
            
        res += 4-count;
            }
            
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[i][j]--;
            //printf("%d\t",arr[i][j]);
        }
        //printf("\n");
    }
        //printf("\n%d\n\n",res);
    }
    
    printf("%d",res);
    return 0;
}
