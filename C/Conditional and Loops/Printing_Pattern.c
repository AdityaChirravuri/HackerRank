#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    /* here a and b are two different matrices  of same order */
    /* c is the sum of that two */
    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<n*2-1;i++){
        for(int j=0;j<n*2-1;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
    
    
}
