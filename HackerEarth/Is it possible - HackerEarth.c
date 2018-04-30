#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char goldcoins[10000];      ////should be larger but worked with this
        scanf("%s",goldcoins);
        int len = strlen(goldcoins);
        if (goldcoins[len-1]%2==0)  printf("YES\n");
        else printf("NO\n");
    }
}
