#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    int dif, min=999999;
   // printf("ENTER SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            int d = arr[i]-arr[j];
            if(d==0) dif = j-i;
        }
       // printf("%d\n", dif);
        if(min>dif)
            min = dif;
    }
    min ==999999 ? printf("-1") : printf("%d", min);
    return 0;
}
