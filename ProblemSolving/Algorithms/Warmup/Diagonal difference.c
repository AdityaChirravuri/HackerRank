#include<stdio.h>
int in(int n , int a[][20]);
int out(int n ,int a[][20]);
int df_sd(int n, int a[][20]);

int main()
{
    int i, j, a[20][20], n;
    printf("enter the size of the array: \n");
    scanf("%d", &n);
    in(n, a);
    out(n, a);
    int temp = df_sd(n, a);
    printf("\nDiagonal difference is : %d\n", temp);
}

int in(int n, int a[][20])
{
    printf("\n enter elements: \n");
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
        }
}

int out(int n, int a[][20])
{
    printf("\n elements stored are : \n");
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
        printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}
int df_sd(int n, int a[][20])
{
    int i;
    int sum=0, sum_2=0;
    for(i=0; i<n; i++){
        sum = sum + a[i][i];
        sum_2 = sum_2 + a[i][n-1-i];
    }
    return abs(sum-sum_2);
}
