#include <stdio.h>
#include <stdlib.h>

int min(int *, int, int );
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
    int n, t, k, i, j;
    scanf("%d %d", &n, &t);
    int *width = (int *)malloc(n*sizeof(int));
    for(k=0; k<n; k++)
        scanf("%d", &width[k]);
    for(k=0; k<t; k++){
        scanf("%d %d", &i, &j);
        printf("%d\n", min(width, i, j));
    }
    return 0;
}

int min(int* a, int i , int j)
{
    int k, l;
    int *b = (int *)malloc((j-i+1)*sizeof(int));
    for(k=i, l=0; k<=j; k++, l++){
    b[l] = a[k];
    }
    quickSort(b, 0, l-1);
    /*for(k=0; k<l; k++)
    printf("%d ", b[k]);*/
    return b[0];
}
