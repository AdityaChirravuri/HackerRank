#include <stdio.h>

int main()
{
    int n, k, i;
    char s[100];
    printf("ENTER THE LENGTH OF THE STRING: ");
    scanf("%d", &n);
    printf("ENTER STRING: ");
    scanf("%s", s);
    printf("ENTER NUMBER OF ROTATIONS : ");
    scanf("%d", &k);

    for(i=0; i<n; i++){
        if(s[i]>= 'a'&&s[i] <= 'z')
            s[i] = (s[i] + k - 'a')%26 + 'a' ;
        if(s[i] >= 'A'&&s[i] <= 'Z')
            s[i] = (s[i] + k - 'A')%26 + 'A';

    }
    /*
    ASCII CODE RANGE:
    a:97
    z:122
    A:65
    Z:90
    */
    printf("%s", s);
    return 0;
}
