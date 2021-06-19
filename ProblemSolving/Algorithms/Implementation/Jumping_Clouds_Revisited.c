#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, k;
    scanf("%d %d", &n, &k);
    int *c = (int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
        scanf("%d", &c[i]);
    int e = 100, loss= 0;
    while(i!=0){
            i  = (i+k)%n;
        if(c[i] == 1) loss += 3;
        else loss++;
        //printf("%d\n", loss);
    }
    printf("%d", e-loss);
    return 0;
}
