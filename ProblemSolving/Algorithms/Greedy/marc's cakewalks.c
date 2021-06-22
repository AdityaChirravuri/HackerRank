#include<stdio.h>
#include<math.h>
int order(int c[], int n);
unsigned long long cake(int c[], int n);
int main()
{
    int calorie_count, calorie[1000], i;
    unsigned long long sum=0;
    scanf("%d", &calorie_count);
    for(i=0; i<calorie_count; i++){
    scanf("%d", &calorie[i]);
    }
    order(calorie, calorie_count);
    for(i=0; i<calorie_count; i++)
    sum = sum + (unsigned long long )cake(calorie, i);
    printf("%d", sum);
    return 0;
}
unsigned long long cake(int c[], int n)
{
    unsigned long long temp;
    temp = (unsigned long long )c[n]*(pow(2, n));
    return temp;
}

int order(int c[], int n)
{
    int i, j, temp;
    for(i=0; i<n; i++){
        for(j=i; j<n; j++){
            if(c[i]<c[j]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}
