#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);



int main()
{
    int n, k, t;
    scanf("%d", &t);
    while(t!=0){
        scanf("%d %d", &n, &k);
        if(n-k-1 > k)printf("%d\n", 2*k+1);
        else printf("%d\n", 2*(n-k-1));
        t--;
    }

    return 0;
}
