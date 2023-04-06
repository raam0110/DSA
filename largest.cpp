#include<bits/stdc++.h>

using namespace std;

int largest(vector<int> arr)
{
    int largest = arr[0];
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    cout<<"the largest element is: "<<largest;
    return 0;
}
int main()
{
    vector<int> arr = {-3,4,1,2,3};
    largest(arr);
    return 0;
}