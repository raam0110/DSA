#include<iostream>
#include<cstring>

using namespace std;

bool ispalindrome(string str)
{
    string str1;
    int n=-1;
    for(int i=0;str[i]!='\0';i++)
    {
        n++;
    }
    for(int i=n;i>=0;i--)
    {
        char temp=str[i];
        str1.push_back(temp);
    }
    cout<<str<<endl;
    cout<<str1<<endl;
    if(str == str1)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string str;
    cout<<"enter a string: ";
    cin>>str;
    bool flag = ispalindrome(str);
    if(flag == true)
    {
        cout<<"the string is a palindrome"<<endl;    
    }
    else
    {
        cout<<"the string is not a palindrome";
    }
}