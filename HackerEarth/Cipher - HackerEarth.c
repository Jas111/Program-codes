#include<stdio.h>

main()
{
    char str[1000];
    scanf("%s",str);
    int k;
    scanf("%d",&k);
    for(int i=0;str[i]!='\0';i++)
    {
        int n = str[i];
        if(n<='z'&&n>='a')
        {
            n=n-'a';
            n=n+k;
            n=n%26;
            n=n+'a';
        }
        else if(n<='Z'&&n>='A')
        {
            n=n-'A';
            n=n+k;
            n=n%26;
            n=n+'A';
        }
        else if(n<='9'&&n>='0')
        {
            n=n-'0';
            n=n+k;
            n=n%10;
            n=n+'0';
        }
        str[i]=n;
    }
    printf("%s",str);
}
