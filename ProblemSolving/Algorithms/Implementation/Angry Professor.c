#include<stdio.h>

int main()
{
    int t, n,k, i, a[1000], j, p=0;
    scanf("%d", &t);
    while(p<t){
    int count =0;
    scanf("%d %d", &n, &k);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i] <= 0)
        count ++;
    }
    if(count<k)
    printf("YES\n");
    else
    printf("NO\n");
    p++;
    }
    return 0;
}

