#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100000
struct{
    int arr[MAX];
    int front, rear;
}queue;

int enqueue(int value)
{
    queue.rear++;
     queue.arr[queue.rear] = value;
}
int dequeue()
{
    queue.front++;
}

int main() {

    queue.front =0 , queue.rear = -1;
    int q, k, value;
    printf("ENTER TOTAL NUMBER OF QUERIES: ");
    scanf("%d", &q);
    for(int i=0; i<q; i++){
        printf("ENTER\n1.ENQUEUE\n2.DEQUEUE\n3.PRINT\n");
        scanf("%d", &k);
        if(k == 1){
            scanf("%d", &value);
            enqueue(value);
        }
        else if(k == 2){
            dequeue();
        }
        else {
            printf("%d\n", queue.arr[queue.front]);
        }

    }
    return 0;
}
