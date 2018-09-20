//// ProjectEuler - #3 on Hackerrank
//// ProjectEuler Answer - 6857

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long n; 
        scanf("%lld",&n);
        unsigned long long fact = 2;
        while(fact<=sqrt(n))
        {
            if(n%fact==0)   
            {
                n=n/fact;
            }
            else if(fact%2==1) fact+=2;
            else   fact++;
        }
        
        printf("%lld\n", n);
    }
    return 0;
}
