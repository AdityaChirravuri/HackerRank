#include <stdio.h>

int main()
{
    char s[101], b[101];
    int i, j=-1;
    printf("ENTER STRING: ");
    scanf("%s", s);
    for(i=0; s[i] != '\0'; i++){
        if(i==0)
            b[++j] = s[i];
        else{
            if(b[j] == s[i])
                j--;
            else
            b[++j] = s[i];
        }
    }

    if(j == -1)
        printf("Empty String");
    else
        for(i=0; i<=j; i++)
        printf("%c", b[i]);
    return 0;
}
