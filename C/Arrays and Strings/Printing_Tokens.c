#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[10000];
    int i;
    
    scanf("%[^\n]", s);
    
    //Write your logic to print the tokens of the sentence here.
    
    while(s[i] != '\0'){
        if(s[i]==' ' && s[i+1] != ' ')
        s[i] = '\n';
        i++;
    }
    printf("%s", s);
    return 0;
}
