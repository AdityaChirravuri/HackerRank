#include<stdio.h>

int main()
{
    int i;
    int s, t; // s denotes sam house starting point, t is the end point of the sam house
    int a, b; // a is the location of apple tree and b is the location of the orange tree
    int m, n; // m is number of apples , n is the number of oranges
    int apple[100], orange[100];
    printf("enter starting point of the sam's house : ");
    scanf("%d", &s);
    printf("enter ending point of the sam's house : ");
    scanf("%d", &t);
    printf("enter the location of the apple tree : ");
    scanf("%d", &a);
    printf("enter the location of orange tree : ");
    scanf("%d", &b);
    printf("enter number of apples have fallen : ");
    scanf("%d", &m);
    printf("enter number of oranges have fallen : ");
    scanf("%d", &n);
    printf("enter the locations of the apple's fallen : ");
    for(i=0; i<m; i++)
        scanf("%d", &apple[i]);
    printf("enter the locations of the orange's fallen : ");
    for(i=0; i<n; i++)
        scanf("%d", &orange[i]);
    for(i=0; i<m; i++){
        apple[i] = apple[i]+a;
        printf("%d\n", apple[i]);
    }
    for(i=0; i<n; i++){
        orange[i] = orange[i]+b;
        printf("%d\n", orange[i]);
    }
    int count_apple =0;
    for(i=0; i<m; i++){
        if((apple[i]>=s)&&(apple[i]<=t))
           count_apple++;
    }
    int count_orange= 0;
    for(i=0; i<n; i++){
        if((orange[i]>=s)&&(orange[i]<=t))
            count_orange++;
    }
    printf("%d %d", count_apple, count_orange);
}
