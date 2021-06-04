#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i, num[1000], sum =0;
    int n;
    scanf("%d", &n);
    for(i =0; i<n; i++)
    {
        scanf("%d", &num[n]);
        sum += num[n];
    }
    printf("%d", sum);
}  
