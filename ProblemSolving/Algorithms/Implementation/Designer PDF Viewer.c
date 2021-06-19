#include <stdio.h>
#include <string.h>

int main()
{
    int h[26], j, area, i, max;
    for(i=0; i<26; i++)
        scanf("%d", &h[i]);
    char s[11];
    scanf("%s", s);
        for(j=0; s[j]!='\0'; j++){
            if(s[j]=='a') {if(max <h[0]) max  = h[0];}
            else if(s[j]=='b') {if(max<h[1]) max = h[1];}
            else if(s[j]=='c') {if(max<h[2]) max = h[2];}
            else if(s[j]=='d') {if(max<h[3]) max = h[3];}
            else if(s[j]=='e') {if(max<h[4]) max = h[4];}
            else if(s[j]=='f') {if(max<h[5]) max = h[5];}
            else if(s[j]=='g') {if(max<h[6]) max = h[6];}
            else if(s[j]=='h') {if(max<h[7]) max = h[7];}
            else if(s[j]=='i') {if(max<h[8]) max = h[8];}
            else if(s[j]=='j') {if(max<h[9]) max = h[9];}
            else if(s[j]=='k') {if(max<h[10]) max = h[10];}
            else if(s[j]=='l') {if(max<h[11]) max = h[11];}
            else if(s[j]=='m') {if(max<h[12]) max = h[12];}
            else if(s[j]=='n') {if(max<h[13]) max = h[13];}
            else if(s[j]=='o') {if(max<h[14]) max = h[14];}
            else if(s[j]=='p') {if(max<h[15]) max = h[15];}
            else if(s[j]=='q') {if(max<h[16]) max = h[16];}
            else if(s[j]=='r') {if(max<h[17]) max = h[17];}
            else if(s[j]=='s') {if(max<h[18]) max = h[18];}
            else if(s[j]=='t') {if(max<h[19]) max = h[19];}
            else if(s[j]=='u') {if(max<h[20]) max = h[20];}
            else if(s[j]=='v') {if(max<h[21]) max = h[21];}
            else if(s[j]=='w') {if(max<h[22]) max = h[22];}
            else if(s[j]=='x') {if(max<h[23]) max = h[23];}
            else if(s[j]=='y') {if(max<h[24]) max = h[24];}
            else  {if(max<h[25]) max = h[25]; }
        }
        area = strlen(s);
        printf("%d", area*max);
        return 0;
}
