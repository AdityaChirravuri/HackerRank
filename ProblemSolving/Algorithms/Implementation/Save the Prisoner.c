#include <stdio.h>

int main()
{
    int i, n[10], m[10], s[10], t, rem[10];
    printf("ENTER NUMBER OF TEST CASES: ");
    scanf("%d", &t);

    for(i=0; i<t; i++){
        printf("ENTER NUMBER OF PRISONERS %d: ", i+1);
        scanf("%d", &n[i]);
        printf("ENTER NUMBER OF SWEETS %d: ", i+1);
        scanf("%d", &m[i]);
        printf("ENTER THE CHAIR NUMBER TO START PASSING OUT TRTEATS %d: ", i+1);
        scanf("%d", &s[i]);
    }

    /*for(i=0; i<t; i++)
        printf("%d %d %d\n", n[i], m[i], s[i]);*/

    for(i=0; i<t; i++){
       rem[i] = (s[i] +(m[i]%n[i]) -1)%n[i];
       printf("%d\n", rem[i]);
    }
    return 0;
}
