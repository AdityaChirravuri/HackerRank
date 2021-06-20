#include <stdio.h>
#include <stdlib.h>

void sort(int a[], int i, int n);

int main()
{
    int i, n, j;
    //printf("ENTER SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    int *a = (int *)malloc(n*sizeof(int));
    int result;
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<100; i++){
        sort(a, i, n);
    }
    return 0;
}

void sort(int a[], int i, int n)
{
    int j, num=0;
    for(j=0; j<n; j++){
        if(a[j]==i)
        num++;
    }
    for(j=0; j<num; j++)
        printf("%d ", i);

}
