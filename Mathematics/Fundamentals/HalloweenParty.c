#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    while(t!=0){
        long long int k, mid;
        scanf("%lld", &k);
        mid =k/(long long int)2;
        if(k%(long long int)2 == 0)printf("%lld\n", mid*mid);
        else printf("%lld\n", mid*(mid+1));
        t--;
    }
    
    return 0;
}
