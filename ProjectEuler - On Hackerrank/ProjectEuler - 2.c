//// ProjectEuler - #2 on Hackerrank
//// ProjectEuler Answer - 4613732

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

unsigned long long int max = 40000000000000000;

unsigned long long int fib[82];
unsigned long long int evenSum[82];
int main(){
    fib[0] = 0; evenSum[0]=0;
    fib[1] = 1; evenSum[1]=0;
    fib[2] = 2; evenSum[2]=2;
    unsigned long long int a=1,b=2, sum=a+b,i;
    for(i = 3; sum <= max; i++)
    {
        sum = a+b;
        a=b;
        b = sum;
        
        fib[i] = sum;
        evenSum[i] = sum%2==0 ? evenSum[i-1]+sum: evenSum[i-1];
        
        ////printf("%lld %lld\n", fib[i], evenSum[i]);
    }
    
    ////printf("%lld\n", i);     ////To get the maximum number of terms that can be created in given range
        
    unsigned long long int t;
    scanf("%lld", &t);
    while(t--)
    {
        unsigned long long int n;
        scanf("%lld", &n);
        for(int i=0;i<82;i++)
        {
            if(fib[i]>n)
            {
                printf("%lld\n",evenSum[i-1]);
                break;
            }
        }
    }
    
    return 0;
}
