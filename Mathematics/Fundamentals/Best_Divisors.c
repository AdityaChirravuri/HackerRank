#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sum(int n);         // a function to find the sum of the digits of the number
void Find(int n);        // a function to find the divisors of the number

int main()
{
    int n;
    scanf("%d", &n);
    Find(n);

    return 0;
}

void Find(int n)
{
    int i, s1, s2, max;
    int Tmax = -1;
    for(i=2; i<=sqrt(n); i++){
        if(n%i == 0){
                printf("%d %d\n", i, n/i);
            s1 = sum(i);
            s2 = sum(n/i);
        }
        max = s1>s2 ? s1 : s2;
        if(Tmax < max)Tmax = max;
    }
    printf("%d\n", Tmax);
}

int sum(int n)
{
    int rem, Sum=0;
    while(n!=0){
        rem = n %10;
        Sum = Sum + rem;
        n = n/10;
    }

    return Sum;
}
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int solve(int n);
int min(int a, int b);

int main()
{
    int n;
    scanf("%d", &n);
    int sum, maxi=-1, ans;
    for(int i=1;i<=n;++i)
    {
        if(n%i==0)
        {
            sum=solve(i);
            if(maxi<sum)
            {
                maxi=sum;ans=i;
            }
            if(maxi==sum)
            { ans=min(i,ans);}
        }
    }
    printf("%d", ans);
    return 0;
}

int solve(int n)
{
    int rem, Sum=0;
    while(n!=0){
        rem = n %10;
        Sum = Sum + rem;
        n = n/10;
    }

    return Sum;
}

int min(int a, int b)
{
    return a > b ? b : a;
}*/
