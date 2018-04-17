#include<stdio.h>

main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str1[10000],str2[10000];
        scanf("%s",str1);
        scanf("%s",str2);
        int a1[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int a2[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for(int i=0;str1[i]!='\0';i++)  a1[str1[i] - 'a']++;
        for(int i=0;str2[i]!='\0';i++)  a2[str2[i] - 'a']++;
        int sum=0;
        for(int i=0;i<26;i++)
        {
            sum += a1[i]-a2[i]<0? a2[i]-a1[i] : a1[i]-a2[i];
        }
        printf("%d\n",sum);
    }
}
