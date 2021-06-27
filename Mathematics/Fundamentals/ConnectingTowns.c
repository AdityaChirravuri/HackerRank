#include <stdio.h>
#include <stdlib.h>

#define max 1234567

int towns(int *arr, int n);

int main()
{
    int t, i, n, *arr, count;
    scanf("%d", &t);
    
    while(t!=0){
        scanf("%d", &n);
        count = n-1;
        arr = (int *)malloc(count*sizeof(int));
        for(i=0; i<count; i++){
            scanf("%d", &arr[i]);
        }
        int ans = towns(arr, count);
        printf("%d\n", ans);
        t--;
    }
    
    return 0;
}

int towns(int *arr, int n)
{
    
    int i, prod = 1;
    for(i=0; i<n; i++){
        prod = (prod * arr[i])%max;
    }
    
    
    return prod;
}
