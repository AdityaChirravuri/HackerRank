#include<stdio.h>

int main()
{
    int j, n , d, m, i, count=0;
    int s[5], sum[10]={0};
    printf("enter number of integers in the chocolate : ");
    scanf("%d", &n);
    printf("enter number on the chocolate squares : \n");
    for(i=0; i<n; i++){
        scanf("%d", &s[i]);
    }
    printf("enter the length of the chocolate bar(birth day) : ");
    scanf("%d", &d);
    printf("enter the number of consecutive bars(birth month) : ");
    scanf("%d", &m);

    for(i=0; i<n-1; i++){
        for(j=i; j<i+m; j++){
        sum[i] = sum[i] + s[j];
        }
        printf("%d %d\n", i, sum[i]);
    }

    for(i=0; i<n-1; i++){
        if(sum[i] == d)
            count++;
    }

    printf("%d", count);
}
