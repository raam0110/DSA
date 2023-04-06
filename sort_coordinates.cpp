#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2)
{
    return p1>p2;
}
vector<pair<int,int>> sortcartesian(vector<pair<int,int>> v)
{
    sort(v.begin(),v.end(),compare);
    for(auto x:v)
    {
        cout<<x.first<<","<<x.second<<endl;
    }

}

int main()
{
    vector<pair<int,int>> p;
    int x,y;
    cout<<"Enter the pairs of coordinates";
    for(int i=0;i<4;i++)
    {
        cin>>x>>y;
        p.push_back(make_pair(x,y));
    }
    for(auto x:p)
    {
        cout<<x.first<<","<<x.second<<endl;
    }
    sortcartesian(p);
    return 0;
}