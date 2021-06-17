#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool Brackets(string );

int main()
{
    int t, i;
    cin >> t;
    // number of test cases

    for(i=0; i<t; i++){
        string str;
        cin >> str;

        if(Brackets(str))cout << "YES" << endl;
        else cout << "NO" << endl;
     }

    return 0;
}

bool Brackets(string str)
{
    vector < char > s;

    int i;
    for(i=0; i<str.size(); i++){
        char temp = str[i];

        if(temp == '{' || temp == '(' || temp == '[')s.push_back(temp);

        else {
            if(s.size() == 0)return false;

            char c = s.back();
            s.pop_back();

            if(c == '{' && str[i] != '}')return false;
            if(c == '(' && str[i] != ')')return false;
            if(c == '[' && str[i] != ']')return false;
        }
    }

    if(s.size() == 0)return true;
    else return false;

}
