#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j, top;
    
    scanf("%d", &n);
    int *s = (int *)malloc(n*sizeof(int));
    
    
    for(i=0; i<n; i++){
        scanf("%d", &s[top+1]);
        if(s[top+1]!=s[top])++top;
    }

    scanf("%d", &m);
    int *a = (int *)malloc(m*sizeof(int));
    
    for(i=0; i<m; i++){
        scanf("%d", &a[i]);
        while(top && a[i]>=s[top])--top;
        printf("%d\n", top+1);
    }
    return 0;
}

