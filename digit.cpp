#include<iostream>
#include<vector>
#include<cstring>

using namespace std;



int main()
{
    int a = 0;
    vector<char> alpha;
    int d =0;
    vector<char> digit;
    int space =0;
    int symbols =0;
    vector<char> symbol;
    char temp;
    temp = cin.get();
    while(temp != '\n')
    {
        if(temp >= '0' and temp<='9' )
        {
            d++ ;
            digit.push_back(temp);
        }
        else if((temp >= 'a' and temp <= 'z') or (temp >= 'A' and temp <= 'Z'))
        {
            a++;
            alpha.push_back(temp);
        }
        else if(temp == ' ')
        {
            space++;
        }
        else
        {
            symbols++;
            symbol.push_back(temp);
        }
        temp = cin.get();
    }
    cout<<"\nthe alphabets are"<<endl;
    for(auto x:alpha)
    {
        cout<<x<<" ";
    }
    cout<<"\nthe digits are"<<endl;
    for(auto x:digit)
    {
        cout<<x<<" ";
    }
    cout<<"\nthe symbols are"<<endl;
    for(auto x:symbol)
    {
        cout<<x<<" ";
    }
}