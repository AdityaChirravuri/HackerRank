#include<stdio.h>
#define MAX 1000
int main()
{
    int n, k, b, bill[MAX], i, sum=0;
    scanf("%d", &n);
    scanf("%d", &k);
    for(i=0; i<n; i++)
        scanf("%d", &bill[i]);
    scanf("%d", &b);
    for(i=0; i<n; i++)
        sum = sum +bill[i];
    sum = sum - bill[k];
    if(sum/2 < b)
        printf("%d", b - (sum/2));
    else printf("Bon Appetit");
    return 0;
}
