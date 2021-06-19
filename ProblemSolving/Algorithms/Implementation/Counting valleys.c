#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, count =0;
   // printf("enter number of steps : ");
    scanf("%d", &n);
    char *s = (char*)malloc(n*sizeof(char));
   // printf("enter the string : \n");
    scanf("%s", s);
    int v =0;
    for(i=0; i<n; i++){
            if(s[i] == 'U')count++;
            else if(s[i] == 'D')count--;
            if(count==0&&s[i]=='U')
                ++v;
        }
    printf("%d", v);
}
