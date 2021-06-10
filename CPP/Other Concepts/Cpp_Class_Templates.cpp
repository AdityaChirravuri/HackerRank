#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
//template <typename T>
template <class T> class AddElements{
    T str;
    public:
    AddElements(T a){
        str = a;
    }
    
    T add(T b){
        return str+b;
    }
    
    string concatenate(string a)
    {
        return str + a;
    }
};

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';

int main () {