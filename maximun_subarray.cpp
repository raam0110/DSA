#include<iostream>
#include<vector>

using namespace std;

int ms(vector<int> arr)
{
    int max = 0;
    int sum = 0;
    for(int i=0;i<arr.size();i++)
    {
        sum = sum+arr[i];
        if(sum < 0)
        {
            sum =0;
        }
        if(sum>max)
        {
            max = sum;
        }
    }
    return max;
}

int main()
{
    vector<int> arr ={1,-2,3,4,4,-2};
    cout<<"the maximum subarray sum is: "<<ms(arr);
}