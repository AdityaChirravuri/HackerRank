#include<stdio.h>

int main()
{
    int n, index[100], i, j, growth[100]={0};
    scanf("%d", &n);
    for(i=0; i<n ;i++)
        scanf("%d", &index[i]);
    for(i=0; i<n; i++){
        for(j=0; j<=index[i]; j++){
            if(j%2 ==0)
                growth[i] = growth[i]+1;
            if(j%2 != 0)
                growth[i] = growth[i]*2;
        }
    }
    for(i=0; i<n; i++)
    printf("%d ", growth[i]);
}
