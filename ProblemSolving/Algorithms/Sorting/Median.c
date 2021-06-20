#include<stdio.h>
#include <stdlib.h>

void quickSort(int arr[], int low, int high);
void swap(int* a, int* b);
int partition (int arr[], int low, int high);

int main()
{
    int i, n;
    printf("enter the size of a array: \n");
    scanf("%d", &n);
    int *a = (int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    quickSort(a, 0, n-1);
    printf("%d", a[(n-1)/2]);
}

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
