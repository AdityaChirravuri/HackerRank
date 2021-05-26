//now sort and search
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

struct PhoneBook{
    int PhoneNumber;
    char name[100];
};

typedef struct PhoneBook Phone;

bool find(char str[], Phone arr[], int n)
{
    for(int i=0; i<n; i++){
        if (strcmp(str, arr[i].name) == 0){
            printf("%s %d\n", arr[i].name, arr[i].PhoneNumber);
            return true;
        }
    }
    return false;
}


int main()
{
    int n;
    char str[100];
    scanf("%d", &n);
    Phone arr[100];

    for(int i=0; i<n; i++){
        scanf("%s %d", &arr[i].name, &(arr[i].PhoneNumber));
    }

    while(scanf("%s", str) && str!="\b"){
        bool flag = find(str, arr, n);
        if(!flag)printf("Not found\n");
    }

    return 0;
}
