#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s",str);
    int len=strlen(str)-1;
    for(int i=0;i<=len;i++,len--)
    {
        if(str[i]!=str[len])    
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}
