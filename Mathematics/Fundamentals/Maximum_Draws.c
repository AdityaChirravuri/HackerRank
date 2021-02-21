#include <stdio.h>

int main()
{
    int t, i;
    long long n;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &n);
        printf("%d", n+1);
    }
    return 0;
}
