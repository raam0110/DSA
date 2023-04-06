#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> printPascal(int n)
{
    vector<vector<int>> a;
    a.push_back({1});
    a.push_back({1,1});
    for(int i=2;i<n;i++)
    {
        vector<int> v;
        v.push_back(1);
        for(int j=1;j<i;j++)
        {
            int pascal = a[i-1][j-1] + a[i-1][j];
            v.push_back(pascal);
        }
        v.push_back(1);
        a.push_back(v);
    }
    return a;
}
int main()
{
    vector<vector<int>> b;
    b = printPascal(7);
    for(auto x: b)
    {
        for(auto y: x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;

}