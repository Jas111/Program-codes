//// ProjectEuler - #4 on Hackerrank
//// ProjectEuler Answer - 906609

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long palindromes[1240];

int main(){
    int count = 0, index =0;
    for(int i=100;i<1000;i++)
    {
        for(int j=i;j<1000;j++)
        {
            long int prod = i*j;
            
            //// Ckeck if number is palindrome
            long int originalInteger = prod, n = prod, reversedInteger = 0, remainder;

            while( n!=0 )
            {
                remainder = n%10;
               reversedInteger = reversedInteger*10 + remainder;
                n /= 10;
            }

            if (originalInteger == reversedInteger) 
            {
                palindromes[index++] = originalInteger;
                ////printf("%ld\n", originalInteger);
                ////count++; 
            }
        }
    }
    
    
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long max = palindromes[0];
        for(int i = 0;i<1240;i++)
        {
            if(max<palindromes[i] && palindromes[i]<n)
                max= palindromes[i];
        }
        printf("%ld\n", max);
    }
    ////printf("%d", count); ////Ans = 1239
    return 0;
}
