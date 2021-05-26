#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void bubbleSort(int a[], int n)
{
    int swaps = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp;
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
                swaps++;
            }
        }
    }
    
    printf("Array is sorted in %d swaps.\n", swaps);
    printf("First Element: %d\n", a[0]);
    printf("Last Element: %d\n", a[n-1]);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int *arr=(int*)malloc(n*sizeof(int));
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    
    return 0;
}