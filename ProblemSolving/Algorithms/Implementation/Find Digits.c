#include<stdio.h>

int main()
{
    int n, a[20], i, j[20], count[20]={0}, m[20], rem;
    printf("enter number of test cases: ");
    scanf("%d", &n);
    printf("enter numbers: ");
    for(i=0; i<n; i++){
        scanf("%d", &j[i]);
        m[i] = j[i];
    }
    for(i=0; i<n; i++){
        while(j[i]!=0){
            rem = j[i]%10;
            j[i] = j[i]/10;
            if((rem != 0) &&(m[i]%rem == 0))
                count[i] = count[i]+1;

        }//end of while loop
    }
    for(i=0; i<n; i++)
    printf("%d ", count[i]);

}
