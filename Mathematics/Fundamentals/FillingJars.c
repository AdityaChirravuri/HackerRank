#include <stdio.h>

int main()
{
    long int n, q, a, b, k;
    long int sum=0, avg;
    scanf("%ld %ld", &n, &q);
    while(q!=0){
        scanf("%ld %ld %ld", &a, &b, &k);
        sum += (b-a+1)*k;
        q--;
    }
    avg = sum/n;
    printf("%ld", avg);
    return 0;
}
