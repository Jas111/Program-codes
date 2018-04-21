#include<stdio.h>

int check_prime(int a)
{
   int c;
   for(c=2;c<=a-1;c++)
   { 
      if(a%c==0)
     return 0;
   }
   return 1;
}

main()
{
    int t;
    char str[500];
    scanf("%d",&t);
    while(t--)
    {
        int len;
        scanf("%d",&len);
        scanf("%s",str);
        for(int i=0;str[i]!='\0';i++)
        {
            //printf("%s\n",str);
            int temp = 0;
            while(1)
            {
            if(str[i]-temp>='A' && str[i]-temp<='Z' && check_prime(str[i]-temp))    {str[i]=str[i]-temp;break;}
            else if(str[i]+temp>='A' && str[i]+temp<='Z' && check_prime(str[i]+temp))    {str[i]=str[i]+temp;break;}
            else if(str[i]-temp>='a' && str[i]-temp<='z' && check_prime(str[i]-temp))    {str[i]=str[i]-temp;break;}
            else if(str[i]+temp>='a' && str[i]+temp<='z' && check_prime(str[i]+temp))    {str[i]=str[i]+temp;break;}
            
            
            temp++;
                
            }
            //printf("%s\n",str);
        }
        printf("%s\n",str);
    }
}
