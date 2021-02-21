#include <stdio.h>
struct point{
int x, y;
};

int main()
{
    struct point p, q, r;
    int n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %d %d %d", &p.x, &p.y, &q.x, &q.y);
        r.x = 2*q.x - p.x;
        r.y = 2*q.y - p.y;
        printf("%d %d\n", r.x, r.y);
    }
    return 0;
}
