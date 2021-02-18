#include <bits/stdc++.h>
using namespace std;


int main() {
    int t ,type, val;
    set<int>arr;

    cin >> t;
    while(t){
        cin >> type;

        switch(type){

        case 1:
            cin >> val;
            arr.insert(val);
            break;

        case 2:
            cin >> val;
            arr.erase(val);
            break;

        case 3:
            cin >> val;
            set<int>::iterator it;
            it = arr.find(val);

            if(it == arr.end())cout << "No" << endl;
            else cout << "Yes" << endl;

            break;
        }
        t--;
    }

    return 0;
}
