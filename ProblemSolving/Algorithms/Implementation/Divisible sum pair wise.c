#include<stdio.h>

int main()
{
    int n, k, i, arr[100], sum[100][100]={0};
    printf("enter length of the array : ");
    scanf("%d", &n);
    printf("enter the number : \n");
    scanf("%d", &k);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    int j;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            sum[i][j] = arr[i] + arr[j];
        }
    }
    int count =0;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
        if(sum[i][j]%k==0)
            count++;
        }
    }
    printf("%d", count);
}
