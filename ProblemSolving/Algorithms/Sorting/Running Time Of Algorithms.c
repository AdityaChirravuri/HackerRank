#include <stdio.h>

void insertion(int arr[], int n);
void print(int arr[], int n);

int main()
{
    int arr[1001], i, n;
    printf("ENTER SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    printf("ENTER ELEMENTS IN THE ARRAY: \n");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    insertion(arr, n);
}

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}

void insertion(int arr[], int n)
{
    int i, j, temp, shift=0;
    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                shift++;
            }
        }
        /*print(arr, n);
        printf("\t%d\n", shift);*/
    }
    printf("%d", shift);
}
// case failed for 4, 4 4 3 4
