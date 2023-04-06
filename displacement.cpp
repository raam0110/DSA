#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

pair<int,int> direct(char d[])
{
    pair<int,int> cord;
    cord.first=0;
    cord.second=0;
    for(int i=0;d[i]!='\0';i++)
    {
        if(d[i] == 's')
        {
            cord.second--;
        }
        else if(d[i] == 'n')
        {
            cord.second++;
        }
        else if(d[i] == 'w')
        {
            cord.first--;
        }
        else
        {
            cord.first++;
        }
    }
    return cord;
}
int shortest_path(pair<int,int> a)
{
    if(a.first>0)
    {
        cout<<'E';
        a.first--;
    }
    else if(a.first<0)
    {
        cout<<'W';
        a.first++;
    }
    else if(a.first == 0 and a.second!=0)
    {
        if(a.second>0)
        {
            cout<<'N';
            a.second--;
        }
        else if(a.second<0)
        {
            cout<<'s';
            a.second++;
        }
    }
    else{
        return 0;
    }
    shortest_path(a);
}
int main()
{
    char direction[100];
    cout<<"enter the route"<<endl;
    cin.getline(direction,100);
    int x,y;
    pair<int,int> point;
    point = direct(direction);
    cout<<point.first<<" "<<point.second;
    shortest_path(point);
    return 0;

}