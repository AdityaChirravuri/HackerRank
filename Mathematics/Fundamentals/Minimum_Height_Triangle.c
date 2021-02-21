#include <stdio.h>

int main()
{
    int b, a, h;
    /*a = 1/2 * b * h;
    a is Area
    b is base
    h is Height
    */
    scanf("%d %d", &b, &a);
    h = 2*a/b ;
    int t;
    while(1){
        t = 1/2 * b * h;
        if(t>=a)
            break;
        h++;
    }
    printf("%d", h);
    return 0;

}
