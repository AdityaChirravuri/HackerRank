#include<stdio.h>
int sort(int arr[], int n);
int main()
{
    int n, height[100], i, ans=0, k;
    scanf("%d", &n);
    scanf("%d", &k);
    for(i=0; i<n ;i++)
        scanf("%d", &height[i]);
    sort(height, n);
    if(height[0] > k)
    ans = height[0] -k;
    printf("%d", ans);
}

int sort(int arr[], int n)
{
    int i, j, temp;
    for(i=0; i<n; i++){
        for(j=i; j<n; j++){
            if(arr[i] < arr[j]){
                temp =  arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
