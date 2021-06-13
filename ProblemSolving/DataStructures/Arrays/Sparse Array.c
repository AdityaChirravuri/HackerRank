#include <stdio.h>
#include <string.h>
int in(char strings[][1001], int n);
void out(char string[][1001], int n);
int find(char string[][1001], int n, char queries[][1001], int i);

int main()
{
    char strings[1001][1001], queries[1001][1001];
    int n, q, i, j, count[100];
    //printf("ENTER string ARRAY SIZE: ");
    scanf("%d", &n);
    in(strings, n);
    //printf("ENTER queries ARRAYSIZE: ");
    scanf("%d", &q);
    in(queries, q);
    for(i=0; i<q; i++)
        printf("%d\n", find(strings, n, queries, i));
    return 0;

}
int find(char string[][1001], int n, char queries[][1001], int i)
{
    int count=0, j;
        for(j=0; j<n; j++){
        if(strcmp(queries[i], string[j])==0)
            count++;
        }
        return count;
}
int in(char string[][1001], int n)
{
    int i;
    for(i=0; i<n; i++){
      //  printf("ENTER STRING %d: ", i+1);
        scanf("%s",  string[i]);
    }
    return 0;
}

void out(char string[][1001], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%s\n", string[i]);
}
