#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[6][6];
    int maxsum = -1000, temp_sum;
    
    
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            temp_sum = 0;
            if(i>1 && j>1){
                temp_sum = arr[i][j] + arr[i][j-1] + arr[i][j-2] + arr[i-1][j-1] + arr[i-2][j] + arr[i-2][j-1] + arr[i-2][j-2];
            
            if(maxsum < temp_sum)maxsum = temp_sum;
            }
            
        }
    }
    
    printf("%d", maxsum);
    return 0;
}