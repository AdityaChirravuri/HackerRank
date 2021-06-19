#include<stdio.h>

int main()
{
    int n, grade[100];
    //printf("enter number of students : \n");
    scanf("%d" ,&n);
    int i, rem;
    for(i=0; i<n; i++)
        scanf("%d", &grade[i]);
    /*printf("before:\n");
    for(i=0; i<n;i++)
        printf("%d\n", grade[i]);*/
    for(i=0; i<n; i++){
        if(grade[i]>=38){
        rem = grade[i]%10;
        if(rem<5){
        if(5 - rem<3)
           grade[i] = grade[i] + 5 - rem;
        }
        else if(rem>=5){
        if(10- rem<3)
            grade[i] = grade[i] +10 - rem;
        }
        }
    }
   // printf("after:\n");
    for(i=0; i<n;i++)
        printf("%d\n", grade[i]);
}
