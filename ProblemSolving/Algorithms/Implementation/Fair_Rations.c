#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n, i, count =0, sum =0;
    scanf("%d", &n);

    int* arr;
    arr = (int *)malloc(n * sizeof(int));

    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<n; i++){
        sum = sum + arr[i];
    }
    
    if(sum %2 == 1){
        printf("NO");
        return 0;
    }else{
        for(i=0; i<n; i++){
            if(arr[i]%2 != 0){
                arr[i] = arr[i] + 1;
                arr[i+1] = arr[i+1] + 1;
                count++;
            }
        }
    }

    printf("%d", 2* count);
    return 0;
}
