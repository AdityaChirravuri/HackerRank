#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int day[101], liked[101];
    day[1] = 5;
    liked[1] = 2;
    int sum = 2;
    for(i=2; i<=n ;i++){
        day[i] = floor(day[i-1]/2)*3;
        liked[i] = day[i]/2;
        sum += liked[i];
    }

    /*for(i=1; i<=n; i++)
        printf("%d %d\n", day[i], liked[i]);*/
    printf("%d", sum);
    return 0;
}
