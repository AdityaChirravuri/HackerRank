#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int solve(int n);
int min(int a, int b);

int main()
{
    int n;
    scanf("%d", &n);
    int sum, maxi=-1, ans;
    for(int i=1;i<=n;++i){
        if(n%i==0){
            sum=solve(i);
            if(maxi<sum){
                maxi=sum;
                ans=i;
            }
            if(maxi==sum){
            ans=min(i,ans);
            }
        }
    }
    printf("%d", ans);
    return 0;
}

int solve(int n)
{
    int rem, Sum=0;
    while(n!=0){
        rem = n %10;
        Sum = Sum + rem;
        n = n/10;
    }

    return Sum;
}

int min(int a, int b)
{
    return a > b ? b : a;
}
