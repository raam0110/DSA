#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool permutation(string a,string b)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    char temp = a[0];
    string A;
    string B;
    for(int i=1;i<a.size();i++)
    {
        if(temp != a[i])
        {
            A.push_back(temp);
            temp = a[i];
        }
    }
    A.push_back(temp);
    temp = b[0];
    for(int i=1;i<b.size();i++)
    {
        if(temp != b[i])
        {
            B.push_back(temp);
            temp = b[i];
        }
    }
    B.push_back(temp);
    cout<<endl<<A<<endl<<B<<endl;
    if(A == B)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string a("raam");
    string b("rishav");
    if(permutation(a,b))
    {
        cout<<"the strings are permutation of each other: ";
    }
    else
    {
        cout<<"the strings are not permutation of each other: ";   
    }
}