#include<iostream>
#include<string>

using namespace std;

string vowel(string s)
{
    string v("aeiou");
    string w;
    for(auto x : s)
    {
        for(auto y: v)
        {
            if(x == y)
            {
                w.push_back(x);
                break;
            }
        }
    }
    return w;
}
int main()
{
    string v("aeoibsddaeioudb");
    string w = vowel(v);
    cout<<w;
    return 0;
}