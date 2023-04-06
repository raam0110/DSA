#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string removeDuplicate(string &a)
{
    string m;
    sort(a.begin(),a.end());
    char temp = a[0];
    for(int i=0;i<a.length();i++)
    {
        if(temp != a[i])
        {
            m.push_back(temp);
            temp = a[i];
        }
    }
    m.push_back(temp);
    return m;
}
int main()
{
    string a="geeksforgeeks";
    string b = removeDuplicate(a);
    cout<<b;
    return 0;
}