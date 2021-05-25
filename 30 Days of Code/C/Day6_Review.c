#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    char str[10001];
    
    while(n){
        scanf("%s", str);
        for(int i=0; i<strlen(str); i++){
            if (i%2 == 0){
                printf("%c", str[i]);
            }
        }
        printf(" ");
        for(int i=0; i<strlen(str); i++){
            if(i%2!=0){
                printf("%c", str[i]);
            }
        }
        printf("\n");
        n--;
    }
    
    
    return 0;
}
