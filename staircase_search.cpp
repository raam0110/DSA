#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

pair<int,int> staircase(vector<vector<int>> a, int n, int m, int key)
{
    if(key> a[n-1][m-1] or key<a[0][0])
    {
        return {-1,-1};
    }
    int row=0;
    int column=m-1;
    while(row<=n-1 or column>=0)
    {
        if(a[row][column] ==  key)
        {
            return {row+1,column+1};
        }
        else if(a[row][column]<key)
        {
            row++;
        }
        else
        {
            column--;
        }
    }
    return {-1,-1};
}

int main()
{
    vector<vector<int>> a={
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12},
            {13,14,15,16}};  
    int m=4,n=4;
    pair<int,int> b =  staircase(a,n,m,6);
    cout<<"("<<b.first<<","<<b.second<<")";
    return 0;
}