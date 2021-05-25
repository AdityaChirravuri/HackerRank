/*
If  is odd, print Weird
If  is even and in the inclusive range of 2 to 5, print Not Weird
If  is even and in the inclusive range of 6 to 20, print Weird
If  is even and greater than 20, print Not Weird
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    if(n%2 != 0)
    printf("Weird\n");
    else{
        if(n >= 2 && n <= 5)printf("Not Weird\n");
        else if(n>=6 && n<= 20)printf("Weird\n");
        else printf("Not Weird\n");
    }
    
    
    return 0;
}
