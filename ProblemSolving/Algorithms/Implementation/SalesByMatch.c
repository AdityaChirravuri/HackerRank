#include <stdio.h>
#include <stdlib.h>

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
    int n, i, j, maxcount=0, count;
   // printf("enter total number of socks: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(i=0; i<n ;i++)
        scanf("%d", &arr[i]);
    quickSort(arr, 0, n-1);

    for(i=0; i<n-1; i++){
        count=1;
        for(j=i+1; j<n; j++){
            if((arr[i] == arr[j])&&(arr[j]!=0)){
                count++;
                arr[j] = 0;
            }
        }
        maxcount = maxcount + (count/2);
    }
    printf("%d", maxcount);
    return 0;
}
