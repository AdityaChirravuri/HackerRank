#include <stdio.h>
#include <stdbool.h>

int triangle(long a, long b, long c);
int main()
{
    long stick[100],sum , max=-1;
    int n, i, j, k;
    int i_1, i_2, i_3;
    //printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &n);
    //printf("ENTER STICKS LENGTH: ");
    for(i=0; i<n; i++)
        scanf("%ld", &stick[i]);
    for(i=0; i<n-2; i++){
        for(j=i+1; j<n-1; j++){
            for(k=j+1; k<n; k++){
                if(triangle(stick[i], stick[j], stick[k])==1){
                sum = stick[i] + stick[j] + stick[k];
                    if(max<sum){
                    max = sum;
                    i_1 = i, i_2 = j, i_3 = k;
                    }
                }
            }
        }
    }
    if(max != -1){
    int a = stick[i_1], b = stick[i_2], c = stick[i_3], temp;
    if(a>b){temp=a; a=b; b=temp;}
    if(b>c){temp=b; b=c; c=temp;}
    if(a>c){temp=a; a=c; c=temp;}
    printf("%d %d %d", a, b, c);
    }
    else printf("%ld", max);
    return 0;

}

int triangle(long a, long b, long c)
{
    if(a+b>c && a+c>b && b+c>a) return 1;
     else return 0;
}
