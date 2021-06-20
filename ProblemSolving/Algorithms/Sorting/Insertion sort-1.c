#include <stdio.h>
void order(int arr[], int n);
int main()
{
    int n, i, arr[1001], j, temp, pos;
    //printf("SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    //printf("ENTER THE VALUES OF THE ARRAY: \n");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    temp = arr[n-1];
    for(i=n-2; i>=0; i--){
        if(arr[i]>temp){
            arr[i+1] = arr[i];
        for(j=0; j<n; j++)
        printf("%d ", arr[j]);
        printf("\n");
        pos = i;
        }
    }
    arr[pos] = temp;
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}
