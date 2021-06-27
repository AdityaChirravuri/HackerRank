#include <stdio.h>

int main()
{
    long int r, c, val;
    scanf("%ld %ld", &r, &c);
    
    if(r%2 != 0){
        val = (r-1)*5 + 2*c-2;
    }else{
        val = (r/2 -1 )* 10 + 2*c -1;
        
    }
    
    printf("%ld", val);
    
    return 0;
}
