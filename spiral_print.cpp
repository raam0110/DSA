#include<iostream>

using namespace std;

void spiral(int a[][4],int n,int m)
{
    int sr =0,sc=0;
    int er=n-1,ec=m-1;
    //traversal loop(Array boundary)
    while((sc <= ec) and (sr <= er))
    {   
        //start row is fixed for this upcoming loop
        for (int col =sc;col<=ec;col++)
        {
            cout<<a[sr][col]<<" ";
        }
        // for this row end column is fixed
        for(int row = sr+1;row<=er;row++)
        {
            if(sr == er)break;
            cout<<a[row][ec]<<" ";
        }
        //for this loop end row is fixed
        for(int col = ec-1;col>=sc;col--)
        {
            cout<<a[er][col]<<" ";
        }
        //for this loop the start column is fixed
        for(int row = er-1;row>sr;row--)
        {
            if(sc == ec)break;
            cout<<a[row][sc]<<" ";
        }
        //updatation of the values of sr,sc,ec,er
        sc++;
        ec--;
        sr++;
        er--;

    }
}
int main()
{
    int a[][4] ={
            {1,2,3,4},
            {12,13,14,5},
            {11,16,15,6},
            {10,9,8,7}};
    int n=4,m=3;

    spiral(a,n,m);
}