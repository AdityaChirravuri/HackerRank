#include <stdio.h>

void swap(int* a, int* b);
void toys(int price[], int n, int k);
int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

int main()
{
    int n, k, price[100], i;
    printf("ENTER NUMBER OF PRICED TOYS: ");
    scanf("%d", &n);
    printf("ENTER AMOUNT MARKS HAS TO SPEND: ");
    scanf("%d", &k);
    printf("ENTER PRICES OF THE TOYS : ");
    for(i=0; i<n; i++)
        scanf("%d", &price[i]);
    quickSort(price, 0, n);
    /*for(i=0; i<n; i++)
        printf("%d ", price[i]);*/
    toys(price, n, k);
    return 0;
}

void toys(int price[], int n, int k)
{
    int  j, count=0,sum = 0;
        for(j=0; j<n; j++){
            sum += price[j];
            if(sum <=k){
            count++;
            }
        }
    printf("%d", count);
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
