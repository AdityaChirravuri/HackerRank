#include <stdio.h>

int main()
{
    char s[100];
    int i, n=1;
    printf("ENTER STRING: ");
    scanf("%s", s);

    for(i=0; s[i]!='\0'; i++){
        if(s[i] >= 'A'&&s[i] <= 'Z'){
            s[i] = '\n';
            n++;
        }
    }
    printf("%s", s);
    printf("\n%d", n);
    return 0;
}
// try to print them in the next lines
