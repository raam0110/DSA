#include<bits/stdc++.h>

using namespace std;

int lower(vector<int> A,int val)
{
    int x=-1;
    for(int i=0;i<A.size();i++)
    {
        if(A[i] == val)
        {
            return val;
        }
        else if(A[i]<val)
        {
            if(A[i] > x)
            {
                x=A[i];
            }
        }
    }
    return x;
}
int main()
{
    int val =4;
    vector<int> A={-1,2,-1,3,5,4};
    cout<<"The lower bound is: "<<lower(A,val);

}