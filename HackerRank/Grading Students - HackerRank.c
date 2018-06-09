#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int marks;
        scanf("%d",&marks);
        if(marks < 38)  {   printf("%d",marks);    }
        else
        {
            int rem = marks % 5;
            if(rem<3)   {   printf("%d",marks);    }
            else
            {
                printf("%d",(1+(marks/5))*5);
            }
        }
        printf("\n");
    }
    return 0;
}
