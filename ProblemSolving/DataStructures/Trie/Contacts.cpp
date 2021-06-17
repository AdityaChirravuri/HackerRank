#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int ct; // stores the count of words starting from this node
    Node *nextChar[26]; // pointers to next char
    Node()
    {
        ct = 0;
        for(int i=0 ; i<26 ; i++)
            nextChar[i] = NULL;
    }
};

void addString(Node *head , string s)
{
    for(auto i : s)
    {
        // if node doesnot exists then create it
        if(! head->nextChar[i-'a'])
            head->nextChar[i-'a'] = new Node();
        head = head->nextChar[i-'a'];
        // now increment the count for new node
        // as our word ends at this next character
        head->ct++;
    }
}
int findStringCount(Node *head , string s)
{
    for(auto i : s)
    {
        // if node doesnot exists then return zero
        if(!head->nextChar[i-'a'])
            return 0;
        head = head->nextChar[i-'a'];
    }
    return head->ct;
}

int main()
{
    int n;  cin>>n;
    string t,s;
    Node root;
    Node *head = &root;

    while(n--)
    {
        cin>>t>>s;
        head = &root;
        if(t == "add")
            addString(head , s);
        else if( t == "find")
            cout<<findStringCount(head , s)<<'\n';
    }
}