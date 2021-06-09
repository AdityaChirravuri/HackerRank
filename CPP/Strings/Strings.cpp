#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[100], b[100], s[100];
    cout << "ENTER FIRST LINE: \n";
    cin.getline(a, 1000);
    cout << "ENTER SECOND LINE: \n";
    cin.getline(b, 1000);
    int l =strlen(a);
    printf("%d %d", strlen(a), strlen(b));
    strcpy(s, a);
    strcat(s, b);
    printf("\n%s", s);

    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("\n%s %s", a, b);

}
