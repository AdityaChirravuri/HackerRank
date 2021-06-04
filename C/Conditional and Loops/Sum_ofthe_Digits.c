#include <stdio.h>

int main()
{
    int  n, sum=0, rem;
    printf("enter a five digit number: ");
    scanf("%d", &n);
    while(n!=0){
    rem=n%10;
    sum += rem;
    n/=10;
    }
    printf("sum= %d", sum);
}


