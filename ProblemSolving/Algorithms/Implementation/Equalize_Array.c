#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++){
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n, i, j, min_num;
    scanf("%d", &n);
    int *a = (int *)malloc(n*sizeof(int));
    int *count = (int*)malloc(100*sizeof(int));
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    quickSort(a, 0, n-1);
    /*for(i=0; i<n; i++)
        printf("%d", a[i]);*/
        memset(count, 0, 100);
    for(i=1; i<=a[n-1]; i++){
        for(j=0; j<n; j++){
            if(a[j]==i){
                count[i]++;
                //printf("%d ", count[i]);
            }
        }
        //printf("\n");
    }
    /*for(i=1; i<=a[n-1]; i++)
        printf("%d ", count[i]);*/
    quickSort(count, 0, a[n-1]+1);
    min_num = n - count[a[n-1]+1];
    printf("%d", min_num);
}
