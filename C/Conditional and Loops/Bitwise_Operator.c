#include<stdio.h>


void main()

{

    //numbers of the i&j shoyld be stored
 
   int n, k, i, j;

    printf("enter number of elements: \n");

    scanf("%d", &n);

    printf("give the known element: \n");

    scanf("%d", &k);

    printf("this is for & operator: \n");

    for(i=1; i<=n; i++){

        for(j=i+1; j<=n; j++){

        printf("i=%d j=%d i&j=%d i|j=%d i^j=%d\n",i, j, i&j, i|j, i^j);

        }

    }

    int and_max=0;

    int or_max=0;

    int xor_max=0;

    for(i=1; i<=n; i++){

        for(j=i+1; j<=n; j++){

            if((i&j)>and_max&&((i&j)<k))

            and_max = i&j;


            if((i|j)>or_max&&((i|j)<k))

            or_max = i|j;


            if((i^j)>xor_max&&((i^j)<k))

            xor_max = i^j;

         }
    }
    printf("%d\n%d\n%d", and_max, and_or, and_xor);
