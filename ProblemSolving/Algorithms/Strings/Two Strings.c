#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001], c[100001];
    int i, l, m, j, n, s_c[26], c_c[26], k;
    char a[ ] = "abcdefghijklmnopqrstuvwxyz";
    scanf("%d", &n);
    while(n>0){

    for(i=0; i<26; i++){
    s_c[i] = 0;
    c_c[i] = 0;
    }

    scanf("%*c%s%*c%s", s, c);
    //l = strlen(s); m = strlen(c);

    int flag = 0;

    for(i=0; i<26; i++){
        for(j=0; s[j]!= '\0'; j++){
            if(s[j]==a[i])
                s_c[i]++;
        }

        for(k=0; c[k]!='\0'; k++){
            if(c[k]==a[i])
                c_c[i]++;
        }

        if(((s_c[i]>=c_c[i])||(s_c[i]<c_c[i]))&&s_c[i]!=0&&c_c[i]!=0)
            flag = 1;
    }

    if(flag == 0)printf("NO\n");
    else printf("YES\n");
    n--;
    }
    return 0;
}
