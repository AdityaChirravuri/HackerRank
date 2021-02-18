#include <bits/stdc++.h>
using namespace std;

int main() {

    int type, t, val;
    string s;
    map<string, int>arr;
    cin >> t;

    while(t){
        cin >> type;

        switch(type){
            case 1:
                cin >> s >> val;
                arr[s] += val;
                break;

            case 2:
                cin >> s;
                arr.erase(s);
                break;

            case 3:
                cin >> s;
                cout << arr[s] << endl;
                break;
        }

        t--;
    }

    return 0;
}
