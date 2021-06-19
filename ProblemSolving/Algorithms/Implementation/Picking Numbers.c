#include<stdio.h>
void picking_numbers(int a[], int n);
int order(int a[], int n);
int main()
{
int a_count, a[100], i;
scanf("%d", &a_count);
for(i=0; i<a_count; i++)
    scanf("%d", &a[i]);
    order(a, a_count);
    picking_numbers(a, a_count);
    return 0;
}
void picking_numbers(int a[], int n)
{
    int i, j, count, maxcount =0;
    for(i=0; i<n; i++){
        count =0;
        for(j=i; j<n; j++){
            if(abs(a[i]- a[j])<=1)
            count = count +1;
        }
        if(count>maxcount)
        maxcount = count;
    }
 printf("%d", maxcount);
}
int order(int a[], int n)
{

    int i, j, temp;
    for(i=0; i<n; i++){
        for(j=i+1; j<n ;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return 0;
}
