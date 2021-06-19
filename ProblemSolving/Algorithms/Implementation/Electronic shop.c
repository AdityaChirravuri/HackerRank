#include<stdio.h>

int main()
{
    int b, n, m, i, j, temp=-1;
    printf("enter the maximum amount : ");
    scanf("%d", &b);
    printf("enter the number of keyboards types: ");
    scanf("%d", &n);
    printf("enter number of USB DRIVES types : " );
    scanf("%d", &m);
    int key[1000], usb[1000];
    for(i=0; i<n; i++)
    scanf("%d", &key[i]);
    for(j=0; j<m; j++)
    scanf("%d", &usb[j]);
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
           if(key[i] + usb[j] > temp)
              if(key[i]+usb[j]<=b)
                temp = key[i]+usb[j];
        }
    }
    printf("%d", temp);
}
