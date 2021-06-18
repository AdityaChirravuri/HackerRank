#include<stdio.h>
int rev(int n);
int main()
{
    int  n, m, i, k, count=0;
    printf("enter a number : ");
    scanf("%d", &n);
    printf("enter another number: ");
    scanf("%d", &m);
    scanf("%d", &k);
    for(i=n; i<m; i++){
    printf("%d %d %d\n", i, rev(i), i-rev(i));
    int h = i-rev(i);
    if(h%k ==0 )
        count ++;
    }
    printf("%d", count);
    return 0;

}

int rev(int n)
{
    int rem, i=0;
    while(n!=0){
        rem = n %10;
        i = i*10+rem;
        n = n /10;
    }
    return i;
}
