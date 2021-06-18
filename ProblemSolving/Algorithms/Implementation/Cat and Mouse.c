#include <stdio.h>
#include <math.h>
#define MAX 100
int main()
{
    int x[MAX], y[MAX], z[MAX], n, i;
    //printf("enter number of queries : ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        //printf("query %d : \n", i+1);
        //printf("enter the position of CAT A : ");
        scanf("%d", &x[i]);
        //printf("enter the position of CAT B : ");
        scanf("%d", &y[i]);
        //printf("enter the position of MOUSE C: ");
        scanf("%d", &z[i]);
    }

    for(i=0; i<n; i++){
        if( (abs(z[i]-x[i]))>abs(z[i] - y[i]))
            printf("CAT B\n");
        if( (abs(z[i]-x[i]))== abs(z[i] - y[i]))
            printf("MOUSE C\n");
        if( (abs(z[i]-x[i]))<abs(z[i] - y[i])) printf("CAT A\n");
        }


}
