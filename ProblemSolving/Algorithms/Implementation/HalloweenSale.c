#include <stdio.h>

int max(int a, int b);

int main()
{
    int s, p, d, m;
    scanf("%d %d %d %d", &p, &d, &m, &s);
    int count = 0;
        while(s>=p){
            count++;
            s-=p;
            p=max(p-d,m);
        }
    printf("%d", count);
    return 0;
}

int max(int a, int b)
{
    return a>b ? a : b;
}
