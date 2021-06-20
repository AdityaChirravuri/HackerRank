#include <stdio.h>
#include <stdlib.h>

int count(int a[], int i, int n);

int main()
{
    int i, n, j;
    printf("ENTER SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    int *a = (int *)malloc(n*sizeof(int));
    int result;
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<101; i++){
            result = count(a, i, n);
            printf("%d ", result);
        }
}

int count(int a[], int i, int n)
{
    int j, num=0;
    for(j=0; j<n; j++){
        if(a[j]==i)
        num++;
    }
    return num;
}
