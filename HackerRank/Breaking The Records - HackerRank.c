#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int min=arr[0],max=arr[0],minCount=0,maxCount=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            minCount++;
        }
        
        if(arr[i]>max)
        {
            max=arr[i];
            maxCount++;
        }
    }
    
    printf("%d %d",maxCount,minCount);
    return 0;
}
