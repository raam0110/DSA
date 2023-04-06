#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int pairsticks(vector<int> length,int D)
{
    pair<int,int> p;
    int count=0;
    for(int i=0;i<length.size();i++)
    {
        for(int j=i+1;j<length.size();j++)
        {
            p.first = max(length[i],length[j]);
            p.second = min(length[i],length[j]);
            if((p.first - p.second)<=D)
            {
                cout<<"("<<p.first<<","<<p.second<<")"<<endl;
                length[i] = 9999;
                length[j] = 9999;
                count++;
                break;
            }
        }
    }   
    return count;
}
int main()
{
    vector<int> a ={1,3,3,9,4,5};
    int count = pairsticks(a,1);
    cout<<count;
}