#include <stdio.h>
#include <math.h>

int main() 
{
    int t,n;
    scanf("%d", &t);
    
    while(t--)
    {
        scanf("%d", &n);
        
        int count = 0;
        int sqr = sqrt(n);
        for(int i=1;i<=sqr;i++)
        {
            if(n%i==0)
            {
                if(i%2==0)
                    count++;
                
                if(i!=n/i && (n/i)%2==0)
                    count++;
            }
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}
