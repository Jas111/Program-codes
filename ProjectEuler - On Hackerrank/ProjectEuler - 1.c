//// ProjectEuler #1 - On HackerRank
//// ProjectEuler Answer - 233168

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int t; 
    scanf("%lld",&t);
    for(long long int a0 = 0; a0 < t; a0++){
        unsigned long long int n; 
        scanf("%lld",&n);
        n=n-1;
        
        unsigned long long int factor3 = n/3;
        unsigned long long int factor5 = n/5;
        unsigned long long int factor15 = n/15;
        
        unsigned long long int sum3 = 3 * factor3 * (factor3 + 1)/2;
        unsigned long long int sum5 = 5 * factor5 * (factor5 + 1)/2;
        unsigned long long int sum15 = 15 * factor15 * (factor15 + 1)/2;
        
        unsigned long long int total = sum3 + sum5 - sum15;
        printf("%lld\n", total);
    }
    return 0;
}
