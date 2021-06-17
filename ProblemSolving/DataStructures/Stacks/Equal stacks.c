#include <stdio.h>
#include <stdbool.h>
int equal(int h1, int h2, int h3);
struct{
int a[100001];
}stack[3];

int main()
{
    int n1, n2, n3, i;
    int h1=0, h2=0, h3=0;
    //printf("ENTER SIZE OF THE CYLINDER: \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    //printf("ENTER 1 CYLINDER: \n");
    for(i=0; i<n1; i++){
        scanf("%d", &stack[0].a[i]);
        h1 += stack[0].a[i];
    }
    //printf("ENTER 2 CYLINDER: \n");
    for(i=0; i<n2; i++){
        scanf("%d", &stack[1].a[i]);
        h2 += stack[1].a[i];
    }
    //printf("ENTER 3 CYLINDER: \n");
    for(i=0; i<n3; i++){
        scanf("%d", &stack[2].a[i]);
        h3 += stack[2].a[i];
    }
    printf("%d", equal(h1, h2, h3));
    return 0;
}
int equal(int h1, int h2, int h3)
{
    int i=0, j=0, k=0;
    while(true){
    if((h1 == h2)&&(h1 == h3))
        break;
    if(h1>=h2 && h1 >= h3){ h1 -=  stack[0].a[i]; i++;}
    else if(h2>=h1&&h2>=h3){h2 -= stack[1].a[j]; j++;}
    else if(h3>=h1&&h3>=h2){h3-= stack[2].a[k]; k++;}
    }
    return h1;
}
