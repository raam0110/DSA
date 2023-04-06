#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2)
{
    return p1.first<p2.first;
}
vector<int> indexsort(vector<int> a)
{
    vector<pair<int,int>> p;
    for(int i=0;i<a.size();i++)
    {
        p.push_back(make_pair(a[i],i));
    }
    sort(p.begin(),p.end(),compare);
    for(auto x: p)
    {
        cout<<x.first<<","<<x.second<<"\n";
    }
    cout<<p.size();  
    for(int i=0;i<p.size();i++)
    {
        a[p[i].second] = i;
    }
    return a;
}
int main()
{
    vector<int> ar={10,16,7,14,5,3,12,9};
    vector<int> a;
    a= indexsort(ar);
    for(int i:a)
    {
        cout<<i<<" ";
    }
}