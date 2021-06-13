#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i, n, arr[10000];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    scanf("%d", &arr[i]);
    for(i=n-1; i>=0; i--)
    printf("%d ", arr[i]);
    return 0;
}
