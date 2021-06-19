#include <stdio.h>
#include <stdlib.h>

int equation(int k, int a[], int n);
int equal(int i, int a[], int n);

int main()
{
    int n, i, x;
    scanf("%d", &n);
    int *a = (int *)malloc(n*sizeof(int));
    for(i=1; i<=n; i++)
        scanf("%d", (a+i));
   /* for(i=1; i<=n; i++)
        printf("%d ", *(a+i));*/

    for(x=1; x<=n; x++)
        printf("%d\n", equation(x, a, n));
    return 0;
}

int equal(int i, int a[], int n)
{
    int j, t;
    for(j=1; j<=n; j++)
        if(a[j]==i)
             t = j;
    return t;
}

int equation(int k, int a[], int n)
{
    int i, l;
    for(i=1; i<=n; i++)
        if(a[i]==k)
            l =  equal(i, a, n);
    return l;
}
