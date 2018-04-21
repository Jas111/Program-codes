#include<stdio.h>

main()
{
    char str1[100000];
    char str2[100000];
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str1);
        scanf("%s",str2);
        int a1[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int a2[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for(int i=0;str1[i]!='\0';i++)  a1[str1[i] - 'a']++;
        for(int i=0;str2[i]!='\0';i++)  a2[str2[i] - 'a']++;
        int flag=1;
        for(int i=0;i<26;i++)
        {
            if(a1[i]!=a2[i]) flag = 0;
        }
        if(flag==1) printf("YES\n");
        else        printf("NO\n");
    }
}
