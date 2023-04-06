#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int binaryToDecimal(string s)
{
    int x =0,k=0;
    int n=s.length();
    for(int i=n-1;i>=0;i--)
    {
        int j = s[i]-48;
        if(j == 1)
        {
            x = x + pow(2,k);
        }
        k++;
    }
    return x;
}
int main()
{
    string binary("011");
    cout<<binaryToDecimal(binary);
    return 0;
}