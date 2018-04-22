#include<stdio.h>

main()
{
    int l,w,h,n;
    scanf("%d",&l);
    scanf("%d",&n);
    while
    (n--)
    {
        scanf("%d %d",&w,&h);
        if(w<l||h<l)    printf("UPLOAD ANOTHER\n");
        else if(w==h)   printf("ACCEPTED\n");
        else printf("CROP IT\n");
    }
}
