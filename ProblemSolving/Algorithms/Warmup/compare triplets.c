#include <stdio.h>
int ans(int a[ ], int b[], int result_count[]);
int main()
{
    int a[3], b[3], i;
    int result_count[2] = {0};
    printf("enter alice score : \n");
    for(i=0; i<3; i++)
        scanf("%d", &a[i]);
    printf("enter bob's score : \n");
    for(i=0; i<3; i++)
        scanf("%d", &b[i]);
    for(i=0; i<2; i++){
        int result = ans(a, b, result_count);
        printf("%d ", result);
    }
}
int ans(int a[], int b[], int result_count[])
{
    int i;
    for(i=0; i<3; i++){
        if(a[i]> b[i])
            result_count[0]++;
        if(a[i]<b[i])
            result_count[1]++;
    }
    for(i=0; i<2; i++)
    return result_count ;
}
