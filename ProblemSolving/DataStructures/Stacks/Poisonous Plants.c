#include <stdio.h>

int main()
{
    int i, a[1000], n, j, count =0 ;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    printf("ENTER PESTICIDE AMOUNT: \n");
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    /*for(i=1; i<=n; i++)
        printf("%d ", a[i]);
    printf("\n");*/
    i=0;
    while(i<n){
        if(a[i]<a[i+1]){
        for(j=i+1; j<n; j++)
        a[j] = a[j+1];
        count++;
        }
        printf("%d ", a[i]);
        i++;
    }
    printf("\n%d", count);
    return 0;
}
