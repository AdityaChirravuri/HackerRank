#include<stdio.h>

int main()
{
    int i, n, score[1000];
    printf("enter the value of n : ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &score[i]);
    int max = score[0];  int min = score[0];
    int max_count =0, min_count=0;
    for(i=0; i<n; i++){
        if(score[i]>max){
            max = score[i];
            max_count++;
        }
        if(score[i]<min){
            min = score[i];
            min_count++;
        }
    }
    printf("%d %d", max_count, min_count);
}
