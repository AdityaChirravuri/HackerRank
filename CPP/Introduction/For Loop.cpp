#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int index, i, a, b;
    char labels[11][6] = {"one", "two", "three", "four",
    "five", "six", "seven",
    "eight", "nine", "even", "odd"};
    scanf("%d %d", &a, &b);
    for(i=a; i<b+1; i++){
        index = i<=9 ? i-1 : 9+ i % 2;
        printf("%s\n", labels[index]);
    }
    return 0;
}
