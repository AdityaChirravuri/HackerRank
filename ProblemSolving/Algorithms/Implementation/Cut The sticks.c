#include <stdio.h>
int Max(int a[], int n);
int Min(int a[], int n);
int main()
{
    int n, a[100], i, min=1001, j, s;
    printf("SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    printf("ENTER STICKS: \n");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);
    /*for(s=0; s<n; ){

    for(i=0; i<n; i++)
    printf("%d ", a[i]);

    printf("\t%d\n", s);

    for(i=0; i<n; i++){
        if(a[i]<min&&a[i]>0)
            min = a[i];
    }

    for(i=0; i<n; i++){
        if(a[i] != 0){
        a[i] = a[i] -  min;
        s++;
        }
    }

    }*/
    while(Max(a, n) != 0){
        int d = 0;
        for(i=0; i<n; i++)
            if(a[i] != 0)
            d++;
        printf("%d\t", d);
        for(i=0; i<n; i++)
            printf("%d ", a[i]);
        int x = Min(a, n);
        for(i=0; i<n; i++){
            if(a[i] != 0 )
                a[i] -= x;
        }
        printf("\n");
    }
    return 0;
}
int Max(int a[], int n)
{
    int i, max=0;
    for(i=0; i<n; i++)
        if(a[i] > max)
        max =a[i];
    return max;
}

int Min(int a[], int n)
{
    int i, min=1001;
    for(i=0; i<n; i++)
        if(a[i] < min&& a[i]!=0)
        min = a[i];
    return min;
}
