#include<stdio.h>

int main()
{
    char s[100];
    int i;
    int num[10]={0,0,0,0,0,0,0,0,0,0};
    printf("enter the character: \n");
    scanf("%s", s);
    
    while(s[i] != '\0'){
        if(s[i] >='0'&& s[i] <='9')
         num[s[i]-'0']++;
        i++;
    } 
    
    for(i=0; i<10; i++)
    printf("%d ", num[i]);
    
}