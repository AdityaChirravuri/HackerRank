#include <stdio.h>

int main()
{
    int t, b, s, c;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d %d", &b, &s, &c);
        int p = b+s-c;
        printf("%d\n", p);
    }
    return 0;
}
