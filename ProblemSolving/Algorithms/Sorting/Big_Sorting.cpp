#include <bits/stdc++.h>
using namespace std;

bool compare(string str1, string str2)
{
    int len1 = str1.size();
    int len2 = str2.size();
    
    if(len1 == len2)return str1<str2;

    return len1<len2;

}


int main()
{
    int n;
    string str;
    cin >> n;

    vector<string>arr;
    vector<string>::iterator it;
    for (int i=0; i<n; i++){
        cin >> str;
        arr.push_back(str);
    }

    /*for(it = arr.begin(); it!=arr.end(); it++)
        cout << *it << " ";

    cout << endl << endl;*/
    sort(arr.begin(), arr.end(), compare);

    for(it = arr.begin(); it!=arr.end(); it++)
        cout << *it << endl;

    return 0;
}
