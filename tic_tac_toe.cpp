#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdlib>

using namespace std;

vector<vector<char>> a(3,vector<char>(3,'E'));
vector<pair<int,int>> p;
bool win(char x,int k,int l) //FOR FINDING OUT THE WINNER
{
    int count = 0;
    int c=0;
    for(int i=0;i<3;i++)
    {
        int j=i;
        if(a[i][j] == x)
        {
            c++;
        }
        else
        {
            break;
        }

    }
    if(c == 3)
    {
        return true;
    }
    c=0;
    for(int i=0, j=2;i<3, j>=0;i++, j--)
    {
        if(a[i][j] == x)
        {
            c++;
        }
        else
        {
            break;
        }

    }
    if(c == 3)
    {
        return true;
    }
    c=0;
    for(int i=0;i<3;i++)
    {
        if(a[i][l] == x)
        {
            c++;
        }
        else
        {
            break;
        }
    }
    if(c == 3)
    {
        return true;
    }
    c=0;
    for(int j=0;j<3;j++)
    {
        if(a[k][j] == x)
        {
            c++;
        }
        else
        {
            break;
        }
    }
    if(c == 3)
    {
        return true;
    }
    return false;    
}
bool rdia(char x)
{
    //cout<<"enter rdia";
    int c=0;
    for(int i=0;i<3;i++)
    {
        int j=i;
        if(a[i][j] == 'E' || a[i][j] == x)
        {
            c++;
        }
        else
        {
            return false;
        }

    }
    //cout<<c;
    if(c == 3)
    {
        return true;
    }
    return false;
}
bool ldia(char x)
{
    //cout<<"enter ldia";
    int c=0;
    for(int i=0, j=2;i<3, j>=0;i++, j--)
    {
        if(a[i][j] == 'E' || a[i][j] == x)
        {
            c++;
        }
        else
        {
            return false;
        }

    }
    //cout<<c;
    if(c == 3)
    {
        return true;
    }
    return false;
}
bool vert(char x,int j)
{
    //cout<<"enter vert";
    int c=0;
    for(int i=0;i<3;i++)
    {
        if(a[i][j] == 'E' || a[i][j] == x)
        {
            c++;
        }
        else
        {
            return false;
        }
    }
    //cout<<c;
    if(c == 3)
    {
        return true;
    }
    return false;
}
bool hori(char x,int i)
{
    //cout<<"enter hori";
    int c=0;
    for(int j=0;j<3;j++)
    {
        if(a[i][j] == 'E' || a[i][j] == x)
        {
            c++;
        }
        else
        {
            return false;
        }
    }
    if(c == 3)
    {
        return true;
    }
    return false;
}
int check(char x) //CHECKING NPUT
{
    if(x=='X' || x=='O')
    {
        return 1;
    }
    return 0;
}
char setchar(char x)
{
    if(x =='X')
    {
        return 'O';
    }
    else
    {
        return 'X';
    }
}
int inputchar(int x,int y,char c) //FOR INPUT
{
    pair<int,int> p1={x,y};
    for(auto x:p)
    {
        if(x==p1)
        {
            return 0;
        }
    }
    p.push_back(make_pair(x,y));
    a[x][y] = c;
}
int ticboard() //FOR DISPLAYING BOARD
{
    for(int i = 0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
bool check_coor(int x,int y)
{
    if(x<=3 && y<=3)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int wc(int i,int j,char x) //FOR FINDING OUT THE NUMBER OF WINNING COMBOS
{
    //cout<<"enter wc ";
    int c=0;
    if((i == 1)&&(i == j))
    {
        if(rdia(x))
        {
            c++;
        }
        if(ldia(x))
        {
            c++;
        }
        if(vert(x,j))
        {
            c++;
        }
        if(hori(x,i))
        {
            c++;
        }
        return c;
    }
    if(i == j)
    {
        if(rdia(x))
        {
            c++;
        }
        if(vert(x,j))
        {
            c++;
        }
        if(hori(x,i))
        {
            c++;
        }
        return c;
    }
    if(abs(i-j) == 2)
    {
        if(vert(x,j))
        {
            c++;
        }
        if(ldia(x))
        {
            c++;
        }        
        if(hori(x,i))
        {
            c++;
        }
        return c;
    }
    if(abs(i-j) == 1)
    {
        if(vert(x,j))
        {
            c++;
        }
        if(hori(x,i))
        {
            c++;
        }
        return c;
    }
    return c;
} 

int main()
{
    char x,y;

    int i,j;
    for(int k=0;k<=9;k++)
    {
        check:
        cout<<"Enter your character to play with 'X' or 'O': ";
        cin>>x;
        int c = check(x);
        if(c == 0)
        {
            cout<<"invalid input\n";
            goto check;
        }
        y=setchar(x);
        ticboard();
        re:
        cout<<"Enter the position in x&y coordinates: "<<endl;
        cin>>i>>j;
        if(check_coor(i,j) == false || inputchar(i-1,j-1,x) == 0)
        {
            cout<<"invalid input\n";
            goto re;
        }
        cout<<"The possible winning combination/s with this input is/are: "<<wc(i-1,j-1,x)<<endl;
        if(win(x,i-1,j-1))
        {
            cout<<"You have won with "<<x<<endl;
            ticboard();
            break;
        }
        ticboard();
    }
}