#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

void Prime(long int num)
{
    bool flag = true;
    for(long int j=2; j<=sqrt(num); j++){
        if(num%j == 0){
            flag = false;
            break;
        }
    }
    
    if(num <= 1)flag = false;
    
    if(flag)printf("Prime\n");
    else printf("Not prime\n");
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        long int num;
        scanf("%ld", &num);
        Prime(num);
    }
    
    
    return 0;
}
