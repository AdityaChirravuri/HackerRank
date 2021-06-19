#include<stdio.h>

int  main()
{
    int n, arr[100], i, count[6] = {0};
    printf("total number of birds : \n");
    scanf("%d", &n);
    printf("enter bird varities : ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<n; i++){
        switch(arr[i]){
    case 1 :
        count[1]++;
        break;
    case 2 :
        count[2]++;
        break;
    case 3 :
        count[3]++;
        break;
    case 4 :
        count[4]++;
        break;
    case 5 :
        count[5]++;
        break;
    default :
        break;
        }
    }
   if((count[1]>count[2])&&(count[1]>count[3])&&(count[1]>count[4])&&(count[1]>count[5]))
    printf("%d", 1);
   else if((count[2]>count[3])&&(count[2]>count[4])&&(count[2]>count[5]))
    printf("%d", 2);
   else if((count[3]>count[4])&&(count[3]>count[5]))
    printf("%d", 3);
    else if(count[4]>count[5])
    printf("%d", 4);
    else
        printf("%d", 5);
}
