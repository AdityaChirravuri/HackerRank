#include <stdio.h>

int main()
{
    int t, i;
    long long n;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%lld", &n);
        long long h = n*(n-1)/2;
        printf("%lld\n", h);
    }
    return 0;
}
