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
    return 0;
}
void insertion(int arr[], int n)
{
    int i, j, temp;
    for(i=1; i<n; i++){
        for(j=0; j<i; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        print(arr, n);
        printf("\n");
    }
}

void print(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
}
