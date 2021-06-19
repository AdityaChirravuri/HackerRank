#include <stdio.h>
#include <math.h>

int square_1(int a, int b);
int square_2(int a, int b);

int main()
{
    int q, a, b, i;
    scanf("%d", &q);
    for(i=0; i<q; i++){
        scanf("%d %d", &a, &b);
        printf("%d %d\n", square_1(a, b), square_2(a, b));
    }
}

int square_1(int a, int b)
{
    int i, count=0;
    for(i=a; i<=b; i++){
        double h  = sqrt(i);
       // printf("%lf\n", h);
        if((h - floor(h))== 0)
            count++;
    }
    return count;
}

int square_2(int a, int b)
{
    int count = (int)(floor(sqrt(b))-ceil(sqrt(a))+1);
    return count;
}
