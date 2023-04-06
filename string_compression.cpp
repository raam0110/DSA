#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string n("abcd");
    string m;
    cout<<n<<endl;
    sort(n.begin(),n.end());
    cout<<n;
    char temp,current;
    temp = n[0];
    int length=1;
    for(int i=1;i<n.size();i++)
    {
        current = n[i];
        if(temp == current)
        {
            length++;
        }
        else
        {
            m.push_back(temp);
            // if(length>1)
            m+= to_string(length);
            // m.push_back(char(length));
            temp = current;
            length=1;
        }
    }
    m.push_back(temp);
    // if(length>1)
    m+= to_string(length);
    cout<<endl<<m<<endl;
    if(m.size()>=n.size())
    {
        cout<<"the string cant be compressed."<<endl<<n;
    }
    else{
        cout<<endl<<"the compressed string is: "<<endl<<m;
    }
    return 0;

}