#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int p, int q, int r, int s)
 {
  //Write your code here.//
   int i; int m=0;
    for (i=1; i<=p; i++)  
    {
        m=r+q+s;
        q=r;
        r=s;
        s=m;
    }
    printf("%d", m);
    return (m);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
