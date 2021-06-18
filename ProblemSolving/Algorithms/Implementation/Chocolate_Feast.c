#include <stdio.h>

int main()
{
    int i, t, n, c, m;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d %d %d", &n, &c, &m);
        int k = n/c;
        int num = k;
        while(1){
            if(k>=m){
            k = k-m;
            k++;
            num++;
            }else break;
        }
        printf("%d\n", num);
    }
}
