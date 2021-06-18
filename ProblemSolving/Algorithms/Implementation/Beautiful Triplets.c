#include<stdio.h>

int main()
{
    int n, d, i, j, arr[1000], k, count=0;
    printf("enter length of the sequence: ");
    scanf("%d", &n);
    printf("enter beautiful difference: ");
    scanf("%d", &d);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(abs(arr[i]-arr[j])==d){
                for(k=j+1; k<n; k++){
                    if(abs(arr[j] - arr[k])== d)
                    count ++;
                }
            }
        }
    }
    printf("%d", count);
}
/*10 3
1 6 7 7 8 10 12 13 14 19
Getting Run Time error */
