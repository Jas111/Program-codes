//// ProjectEuler - #15 on Hackerrank
//// ProjectEuler Answer - 137846528820

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int paths[500][500];
int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    for(int i=0;i<500;i++)
    {
        paths[0][i]=paths[i][0]=1;
    }
    
    for(int i = 1;i<500;i++)
    {
        for(int j=1;j<500;j++)
        {
            paths[i][j] = (paths[i-1][j] + paths[i][j-1]) % 1000000007;
        }
    }
    
    int t,m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &m, &n);
        
        printf("%lld\n", paths[m][n]);
    }
    return 0;
}
