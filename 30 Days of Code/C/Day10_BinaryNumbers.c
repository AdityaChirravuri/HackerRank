#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int a, int b)
{
    return a>b ? a : b;
}

int main()
{
    int count, maxcount, n;
    scanf("%d", &n);
    count = maxcount = 0;
    while(n){
        int rem = n%2;
        if(rem == 1){
            count++;
            maxcount = max(maxcount, count);
        }
        else {
            count = 0;
        }
        n = n/2;
    }
    printf("%d", maxcount);
    return 0;
}
