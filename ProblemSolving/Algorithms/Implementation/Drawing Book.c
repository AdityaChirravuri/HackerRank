#include<stdio.h>
#include<math.h>
int main()
{
    int n, p, i, min;
    scanf("%d", &n);
    scanf("%d", &p);
    int left=0, right=0;
    for(i=1; i<p; i+=2)
        left = left+1;
    for(i=n; i>p+1; i-=2)
        right = right +1;
    if(left>right)
        min = right;
        else min = left;
    printf("%d %d %d", min, left, right);
}
