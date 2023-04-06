#include<iostream>
#include<vector>

using namespace std;

vector<int> WavePrint(int m, int n, vector<vector<int>> a)
{   vector<int> b;
    int k=0;
    for(int j =m-1;j>=0;j--)
    {
        if(k % 2 == 0)
        {
            for(int i = 0;i<=n-1;i++)
            {
                b.push_back(a[i][j]);
            }
        
        }
        else
        {
            for(int i = n-1;i>=0;i--)
            {
                b.push_back(a[i][j]);
            }
        
        }
        k++;
    }
    return b;
}
int main()
{
    vector<vector<int>> a={
            {1,2,3,4},
            {12,13,14,5},
            {11,16,15,6},
            {10,9,8,7}};
    vector<int> b;
    int n=4,m=4;
    b = WavePrint(m,n,a);
    for(auto x:b)
    {
        cout<<x<<" ";
    }
}