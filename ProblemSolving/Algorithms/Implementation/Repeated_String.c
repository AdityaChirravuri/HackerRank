#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    long long n, i, l, rem, index;
    char s[101];
    scanf("%s", s);
    l = strlen(s);
    scanf("%lld", &n);
    long long count=0;
    for(i=0; s[i]!='\0'; i++)
        if(s[i]=='a')
        count++;
    for(i=0; s[i]!='\0'; i++){
        if(s[i]=='a')
            index = i;
            break;
    }
    rem = n%l;
    count *= (n/l);
    for(i=0; i<rem; i++)
    if(s[i]=='a')
    count++;
    printf("%lld", count);
    return 0;
}
