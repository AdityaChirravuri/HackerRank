#include<stdio.h>

int main()
{
    long long int arr[5], sum =0, max=0, min=0, result[5];
    int i, j;
    printf("enter the array elements : \n");
    for(i=0; i<5; i++){
        scanf("%lld", &arr[i]);
    }
    for(i=0; i<5; i++){
        sum = sum + arr[i];
    }

    for(i=0; i<5; i++){
        result[i] = sum - arr[i];
    }
    for(i=0; i<5; i++)
        printf("%lld\n", result[i]);
    min = result[0];
    for(i=1; i<5; i++){
        if(result[i] < min)
        min = result[i];
    }
    max = result[0];
    for(i=1; i<5; i++){
        if(result[i]> max)
            max = result[i];
    }
    printf("\n%lld %lld", max, min);
}
