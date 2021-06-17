#include <stdio.h>
#define MAX 1000

int min(int a, int b)
{
return a>b ? b : a;
}
int main()
{
    int i, j, count =0, k, sum =0;
    int a[MAX], b[MAX], n, m, x, g;
    //printf("ENTER NUMBER OF GAMES : ");
    scanf("%d", &g);
    for(k=0; k<g; k++){
        //printf("ENTER SIZE OF ARRAY a: ");
        scanf("%d", &n);
        //printf("ENTER SIZE OF ARRAY b: ");
        scanf("%d", &m);
        //printf("ENTER VALUE OF x: ");
        scanf("%d", &x);
        //printf("ENTER ELEMENTS IN a: ");
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
        //printf("ENTER ELEMENTS IN b: ");
        for(i=0; i<m; i++)
            scanf("%d", &b[i]);

        while(i<n&& sum<=x){
            sum  = sum + a[i];
            //printf("%d ", sum);
            printf("%\n");

            count = i;
            //printf("%d ", count);
            i++;
        }
        while(sum <= x && i>0 && j<m ){
            sum = sum - a[i] + b[j];
            //printf("%d\n", sum);
            i--;
            j++;
        count = i+j;
       // printf("%d ", count);
        }

    printf("%d", count);
    }
    return 0;
}
