#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%03d", func(x,y));
}

int func(int x, int y)
{
    if(x==0)
    {
        return (y+1)%1000;
    }
    else if(x>0 &&y==0)
    {
        return func(x-1,1)%1000;
    }
    else if(x>0 && y>0)
    {
        return func(x-1, func(x, y-1));
    }
}
