#include <stdio.h>

int main()
{
    int hh, mm, ss, i;
    char f[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, f);

    if(f[0] == 'A')
    printf("%d:%d:%d", hh, mm, ss);
    if(f[0] == 'P')
    printf("%d:%d:%d", hh+12, mm, ss);
        return 0;
}
