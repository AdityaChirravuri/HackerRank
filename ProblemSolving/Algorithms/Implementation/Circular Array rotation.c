#include<stdio.h>
int right_rotation(int a[], int n);
int main()
{

    int n, k, q, a[100001], m, i, b[100001];
    //printf("ENTER NUMBER OF ELEMENTS IN THE ARRAY: ");
    scanf("%d", &n);
    //printf("ENTER NUMBER OF ROTATION COUNT: ");
    scanf("%d", &k);
    //printf("ENTER NUMBER OF QUERIES: ");
    scanf("%d", &q);
    //printf("ENTER ARRAY ELEMENTS: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    //printf("\nWITH ROTATION OF THE ARRAY: \n");
    for(i=0; i<k; i++)
    right_rotation(a, n);

    //printf("ENTER YOUR QUERIES: \n");

    for(i=0; i<q; i++){
        scanf("%d", &m);
        printf("%d ", a[m]);
    }
    printf("\n\n");
    //printf("WITHOUT ROTATION OF THE ARRAY: \n");
    int s;
    s = n -(k%n);
    for(i=0; i<q; i++){
        scanf("%d", &m);
        printf("%d ", b[(s+m)%n]);
    }
    return 0;
}

int right_rotation(int a[], int n)
{
    int  temp, j;
     temp = a[n-1];
    for(j=n-1; j>=1; j--){
        a[j] = a[j-1];
    }
    a[0] = temp;
    return 0;
}
