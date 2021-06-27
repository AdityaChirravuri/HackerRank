#include <stdio.h>

int main()
{
    long long  n, m;
    scanf("%lld %lld", &n, &m);
    
    long long ans;
    
    ans = n * m -1;
    
    printf("%lld", ans);
    
    return 0;
}
