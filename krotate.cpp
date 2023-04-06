#include<iostream>
#include<vector>

using namespace std;

vector<int> kRotate(vector<int> a,int k)
{
    int n=a.size();
    while(k>0)
    {
        int temp=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            a[i+1]=a[i];
        }
        a[0]=temp;
        k--;
    }
    return a;
}
int main()
{
    vector<int> a={1,3,5,7,9};
    int k=3;
    for(int x:a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    a=kRotate(a,k);
    for(auto x:a)
    {
        cout<<x<<" ";
    }
    return 0;
}