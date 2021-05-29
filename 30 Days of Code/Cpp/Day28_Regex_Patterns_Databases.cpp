#include <bits/stdc++.h>
using namespace std;
/*
bool Find(string a)
{
    string t = "@gmail.com";
    if(a.size() < t.size())return false;
    int i, j;
    for(i=a.size()-1, j = t.size()-1; i>=0&&j>=0; --i, --j){
        if(a[i] != t[j])return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t){
        vector<string>arr;
        string name, email_id;
        cin >> name >> email_id;
        if(Find(email_id))
            arr.push_back(name);
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++)cout << arr[i] << "\n";
        t--;
    }

    return 0;
}*/
bool end_with(string& s) {
    string t = "@gmail.com";
    if (s.size() < t.size()) return false;
    for (int i = s.size() - 1, j = t.size() - 1; i >= 0 && j >= 0; --i, --j) {
        if (s[i] != t[j]) return false;
    }
    return true;
}
int main(){
    int N;
    cin >> N;
    vector<string> ans;
    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        if (end_with(emailID))
            ans.push_back(firstName);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); ++i)
        cout << ans[i] << endl;
    return 0;
}