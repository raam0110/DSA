// #include<iostream>
// #include<vector>

// using namespace std;

//int insertion(vector<int> arr)
// {
//     int n=arr.size();
//     for(int i=1;i<arr.size();i++)
//     {
//         int c=arr[i];
//         int p=i-1;
//         while(p >= 0 and arr[p] > c)
//         {
//             arr[p+1]=arr[p];
//             p--;
//         }
//         arr[p+1] = c; 
//     }
//     for(auto x: arr)
//     {
//         cout<<x<<" ";
//     }

// }
// int main()
// {
//     vector <int> arr ={-2,3,4,-2,5,-12,6,1,3};
//     for(auto x : arr)
//     {
//         cout<<x<<" ";
//     }
//     cout<<"the sorted array is: "<<endl;
//     insertion(arr);
//     return 0;
// }
// #include<iostream>
// #include<vector>

// using namespace std;

// int selection(vector<int> a)
// {
//     int k=0;
//     int n =a.size();
//     for(int i=0;i<a.size();i++)
//     {
//         int min = a[i];
//         for(int j=i; j<n; j++)
//         {
//             if(a[j]<min)
//             {
//                 min = a[j];
//                 k=j;
//             }
//         }
//         swap(a[k],a[i]);
//     }
//     for(auto x: a)
//     {
//         cout<<x<<" ";
//     }
//     return 0;
// }
// int main()
// {
//     vector<int> a={1,5,3,-4,2,6};
//     selection(a);
// }
// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// bool compare(int a,int b)
// {
//     return a<b;
// }
// int main()
// {
//     int a[]={10,9,7,5,11,3,5,2};
//     int n=sizeof(a)/sizeof(int);
//     sort(a,a+n,compare);//ASCENDING SORT the sort function can pass a function as an argument which is an optional argument we can use greater<int> to get a descendingly sorted array
//     //reverse(a,a+n);//REVERSING THE ARRAY
//     for(auto x:a)
//     {
//         cout<<x<<",";
//     }
// }

// #include<iostream>
// #include<vector>

// using namespace std;

// vector<int> counting(vector<int> a)
// {
//     int range=0;
//     for(int x:a)
//     {
//       range = max(range,x);
//     }
//     cout<<range<<endl;
//     vector<int> ar(range+1,0);
//     for(int x : a)
//     {
//         ar[x]++;
//     }
//     int j=0;
//     for(int i=0;i<ar.size();i++)
//     {
//         while(ar[i]>0)
//         {
//             a[j] = i;
//             j++;
//             ar[i]--;
//         }
//     }
//     for(int x:a)
//     {
//         cout<<x<<" ";
//     }
// }
// int main()
// {
//     vector<int> a={5,8,3,1,1,2,6};
//     counting(a);
// }
// #include<iostream>
// #include<vector>

// using namespace std;

// vector<int> op_bubble(vector<int>a)
// {
//     bool flag = true;
//     for(int i=0;i<a.size();i++)
//     {
//         flag = false;
//         for(int j=0;j<a.size()-i-1;j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 swap(a[j],a[j+1]);
//                 flag = true;
//             }
//         }
//         if(flag == false)
//         {
//             break;
//         }
//     }
//     return a;
// }
// int main()
// {
//     vector<int> a={1,2,3,5,4,7};
//     a = op_bubble(a);
//     for(int x:a)
//     {
//         cout<<x<<" ";
//     }
// }

// 

// #include<iostream>
// #include<vector>

// using namespace std;

// vector<int>compsort(vector<int> a,bool flag)
// {
//     int range=0;
//     for(int x:a)
//     {
//       range = max(range,x);
//     }
//     cout<<range<<endl;
//     int n=a.size()-1;
//     vector<int> ar(range+1,0);
//     for(int x : a)
//     {
//         ar[x]++;
//     }
//     if(flag == true)
//     {
//         int j=0;
//         for(int i=0;i<ar.size();i++)
//         {
//             while(ar[i]>0)
//             {
//                 a[j] = i;
//                 j++;
//                 ar[i]--;
//             }
//         }
//         for(int x:a)
//         {
//             cout<<x<<" ";
//         }
//     }
//     else
//     {
//         int j=0;
//         for(int i=range;i>=0;i--)
//         {
//             while(ar[i]>0)
//             {
//                 a[j] = i;
//                 j++;
//                 ar[i]--;
//             }
//         }
//         for(int x:a)
//         {
//             cout<<x<<" ";
//         }
//     }
// }
// int main()
// {
//     vector<int> a={1,5,3,7,2};
//     a=compsort(a,false);
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool compare(pair<int,int> p1,pair<int,int> p2)
// {
//     return p1.first<p2.first;
// }
// vector<int> indexsort(vector<int> a)
// {
//     vector<pair<int,int>> p;
//     for(int i=0;i<a.size();i++)
//     {
//         p.push_back(make_pair(a[i],i));
//     }
//     sort(p.begin(),p.end(),compare);
//     for(auto x: p)
//     {
//         cout<<x.first<<","<<x.second<<"\n";
//     }
//     cout<<p.size();  
//     for(int i=0;i<p.size();i++)
//     {
//         a[p[i].second] = i;
//     }
//     return a;
// }
// int main()
// {
//     vector<int> ar={10,16,7,14,5,3,12,9};
//     vector<int> a;
//     a= indexsort(ar);
//     for(int i:a)
//     {
//         cout<<i<<" ";
//     }
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// bool compare(pair<int,int> p1,pair<int,int> p2)
// {
//     return p1>p2;
// }
// vector<pair<int,int>> sortcartesian(vector<pair<int,int>> v)
// {
//     sort(v.begin(),v.end(),compare);
//     for(auto x:v)
//     {
//         cout<<x.first<<","<<x.second<<endl;
//     }

// }

// int main()
// {
//     vector<pair<int,int>> p;
//     int x,y;
//     cout<<"Enter the pairs of coordinates";
//     for(int i=0;i<4;i++)
//     {
//         cin>>x>>y;
//         p.push_back(make_pair(x,y));
//     }
//     for(auto x:p)
//     {
//         cout<<x.first<<","<<x.second<<endl;
//     }
//     sortcartesian(p);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// int pairsticks(vector<int> length,int D)
// {
//     pair<int,int> p;
//     int count=0;
//     for(int i=0;i<length.size();i++)
//     {
//         for(int j=i+1;j<length.size();j++)
//         {
//             p.first = max(length[i],length[j]);
//             p.second = min(length[i],length[j]);
//             if((p.first - p.second)<=D)
//             {
//                 cout<<"("<<p.first<<","<<p.second<<")"<<endl;
//                 length[i] = 9999;
//                 length[j] = 9999;
//                 count++;
//                 break;
//             }
//         }
//     }   
//     return count;
// }
// int main()
// {
//     vector<int> a ={1,3,3,9,4};
//     int count = pairsticks(a,2);
//     cout<<count;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// bool compare(pair<int,int> p1,pair<int,int> p2)
// {
//     return p1<p2;
// }
// int defkin(int w,int h, vector<pair<int,int>> position)
// {
//     int penalty;
//     for(int i=1;i<position.size();i++)
//     {
//         int mul = 0;
//         int x = (position[i].first) -1 - position[i-1].first;
//         int y = position[i].second -1 - position[i-1].second;
//         mul = x*y;
//         penalty=max(penalty,mul);
//         // if(mul>penalty)
//         // {
//         //     penalty = mul;
//         //     cout<<penalty;
//         // }
//     }
//     return penalty;
// }
// int main()
// {
//     int height,width;
//     cout<<"Enter the hieght and width of the kingdom: ";
//     cin>>height>>width;
//     int n;
//     cout<<"Enter the no. of towers: ";
//     cin>>n;
//     vector<pair<int,int>> tower;
//     cout<<"Enter the tower positions: ";
//     int x,y;
//     tower.push_back(make_pair(0,0));
//     for(int i=0;i<n;i++)
//     {
//         cin>>x>>y;
//         tower.push_back(make_pair(x,y));
//     }
//     sort(tower.begin(),tower.end(),compare);
//     tower.push_back(make_pair(height,width));
//     for(auto x:tower)
//     {
//         cout<<x.first<<","<<x.second<<endl;
//     }
//     int penalty;
//     penalty = defkin(width,height,tower);
//     cout<<penalty;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<cstring>

// using namespace std;
// int main()
// {
//     char a[]={'a','b','c'};//it can also give a garbage value
//     char b[]={"abc"};//this will only print till the specied content
//     char c[]={'a','b','c','\0'};
//     cout<<a<<endl<<b<<endl<<c<<endl;
//     cout<<strlen(b);//number of elements
//     cout<<sizeof(b)<<endl<<"\nenter a sentence";//includes the null
//     char sent[100];
//     // char temp =cin.get();
//     // int len =0;
//     // while(temp != '#')
//     // {
//     //     cout<<temp;
//     //     sent[len]=temp;
//     //     temp = cin.get();
//     //     len++;
//     // }
//     // sent[len] = '\0';
//     cin.getline(sent,100,'.');//to get the line string at once we can also set a stopping parameter
//     cout<<sent;
    
// }
// DIGITS AND SPACES
// #include<iostream>
// #include<vector>
// #include<cstring>

// using namespace std;



// int main()
// {
//     int a = 0;
//     vector<char> alpha;
//     int d =0;
//     vector<char> digit;
//     int space =0;
//     int symbols =0;
//     vector<char> symbol;
//     char temp;
//     temp = cin.get();
//     while(temp != '\n')
//     {
//         if(temp >= '0' and temp<='9' )
//         {
//             d++ ;
//             digit.push_back(temp);
//         }
//         else if((temp >= 'a' and temp <= 'z') or (temp >= 'A' and temp <= 'Z'))
//         {
//             a++;
//             alpha.push_back(temp);
//         }
//         else if(temp == ' ')
//         {
//             space++;
//         }
//         else
//         {
//             symbols++;
//             symbol.push_back(temp);
//         }
//         temp = cin.get();
//     }
//     cout<<"\nthe alphabets are"<<endl;
//     for(auto x:alpha)
//     {
//         cout<<x<<" ";
//     }
//     cout<<"\nthe digits are"<<endl;
//     for(auto x:digit)
//     {
//         cout<<x<<" ";
//     }
//     cout<<"\nthe symbols are"<<endl;
//     for(auto x:symbol)
//     {
//         cout<<x<<" ";
//     }
// }
// #include<iostream>
// #include<vector>
// #include<cstring>

// using namespace std;

// pair<int,int> direct(char d[])
// {
//     pair<int,int> cord;
//     cord.first=0;
//     cord.second=0;
//     for(int i=0;d[i]!='\0';i++)
//     {
//         if(d[i] == 's')
//         {
//             cord.second--;
//         }
//         else if(d[i] == 'n')
//         {
//             cord.second++;
//         }
//         else if(d[i] == 'w')
//         {
//             cord.first--;
//         }
//         else
//         {
//             cord.first++;
//         }
//     }
//     return cord;
// }
// int shortest_path(pair<int,int> a)
// {
//     if(a.first>0)
//     {
//         cout<<'E';
//         a.first--;
//     }
//     else if(a.first<0)
//     {
//         cout<<'W';
//         a.first++;
//     }
//     else if(a.first == 0 and a.second!=0)
//     {
//         if(a.second>0)
//         {
//             cout<<'N';
//             a.second--;
//         }
//         else if(a.second<0)
//         {
//             cout<<'s';
//             a.second++;
//         }
//     }
//     else{
//         return 0;
//     }
//     shortest_path(a);
// }
// int main()
// {
//     char direction[100];
//     cout<<"enter the route"<<endl;
//     cin.getline(direction,100);
//     int x,y;
//     pair<int,int> point;
//     point = direct(direction);
//     cout<<point.first<<" "<<point.second;
//     shortest_path(point);
//     return 0;

// }

// #include<iostream>
// #include<vector>
// #include<cstring>

// using namespace std;

// int main()
// {
//     char a[100] ={"apple"};
//     char b[100] = {" mango"};

//     //the length of the string excluding the null
//     cout<<strlen(a)<<endl;
//     //copy a string
//     strcpy(b,a);
//     //comparing strings
//     cout<<strcmp(b,a);
//     //combining two strings
//     char c[100];
//     strcpy(c,strcat(b,a));
//     cout<<c<<strcmp(a,c);
//     return 0;
// }

// #include<iostream>
// #include<cstring>

// using namespace std;

// bool ispalindrome(string str)
// {
//     string str1;
//     int n=-1;
//     for(int i=0;str[i]!='\0';i++)
//     {
//         n++;
//     }
//     for(int i=n;i>=0;i--)
//     {
//         char temp=str[i];
//         str1.push_back(temp);
//     }
//     cout<<str<<endl;
//     cout<<str1<<endl;
//     if(str == str1)
//     {
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main()
// {
//     string str;
//     cout<<"enter a string: ";
//     cin>>str;
//     bool flag = ispalindrome(str);
//     if(flag == true)
//     {
//         cout<<"the string is a palindrome"<<endl;    
//     }
//     else
//     {
//         cout<<"the string is not a palindrome";
//     }
// }

// #include<iostream>
// #include<string>
// #include<algorithm>

// using namespace std;

// int main()
// {
//     //getline(cin,string name,terminator(default \n)) to take input
//     //vector of string(vector<string> sarr)
    
// }

// #include<iostream>
// #include<string>
// #include<algorithm>

// using namespace std;

// int main()
// {
//     string n("aaabbccddee");
//     string m;
//     cout<<n<<endl;
//     sort(n.begin(),n.end());
//     cout<<n;
//     char temp,current;
//     temp = n[0];
//     int length=1;
//     for(int i=1;i<n.size();i++)
//     {
//         current = n[i];
//         if(temp == current)
//         {
//             length++;
//         }
//         else
//         {
//             m.push_back(temp);
//             m+= to_string(length);
//             // m.push_back(char(length));
//             temp = current;
//             length=1;
//         }
//     }
//     m.push_back(temp);
//     m+= to_string(length);
//     cout<<endl<<m<<endl;
//     if(m.size()>n.size())
//     {
//         cout<<"the string cant be compressed."<<endl<<n;
//     }
//     else{
//         cout<<endl<<"the compressed string is: "<<endl<<m;
//     }
//     return 0;

// }

// #include<iostream>
// #include<string>
// #include<algorithm>

// using namespace std;

// bool permutation(string a,string b)
// {
//     sort(a.begin(),a.end());
//     sort(b.begin(),b.end());

//     char temp = a[0];
//     string A;
//     string B;
//     for(int i=1;i<a.size();i++)
//     {
//         if(temp != a[i])
//         {
//             A.push_back(temp);
//             temp = a[i];
//         }
//     }
//     A.push_back(temp);
//     temp = b[0];
//     for(int i=1;i<b.size();i++)
//     {
//         if(temp != b[i])
//         {
//             B.push_back(temp);
//             temp = b[i];
//         }
//     }
//     B.push_back(temp);
//     cout<<endl<<A<<endl<<B<<endl;
//     if(A == B)
//     {
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main()
// {
//     string a("raam");
//     string b("rishav");
//     if(permutation(a,b))
//     {
//         cout<<"the strings are permutation of each other: ";
//     }
//     else
//     {
//         cout<<"the strings are not permutation of each other: ";   
//     }
// }

// #include<iostream>
// #include<string>
// #include<algorithm>

// using namespace std;

// string removeDuplicate(string &a)
// {
//     string m;
//     sort(a.begin(),a.end());
//     char temp = a[0];
//     for(int i=0;i<a.length();i++)
//     {
//         if(temp != a[i])
//         {
//             m.push_back(temp);
//             temp = a[i];
//         }
//     }
//     m.push_back(temp);
//     return m;
// }
// int main()
// {
//     string a="geeksforgeeks";
//     string b = removeDuplicate(a);
//     cout<<b;
//     return 0;
// }

// #include<iostream>
// #include<cstring>

// using namespace std;

// int main()
// {
//     char c[] ="abc";
//     for(auto x : c )
//     {
//         x = toupper(x);
//         cout<<x;
//     }
//     return 0;
// }
// #include<iostream>
// #include<string>

// using namespace std;

// string vowel(string s)
// {
//     string v("aeiou");
//     string w;
//     for(auto x : s)
//     {
//         for(auto y: v)
//         {
//             if(x == y)
//             {
//                 w.push_back(x);
//                 break;
//             }
//         }
//     }
//     return w;
// }
// int main()
// {
//     string v("aeoibsddaeioudb");
//     string w = vowel(v);
//     cout<<w;
//     return 0;
// }

// #include<iostream>
// #include<string>
// #include<cmath>

// using namespace std;

// int binaryToDecimal(string s)
// {
//     int x =0,k=0;
//     int n=s.length();
//     for(int i=n-1;i>=0;i--)
//     {
//         int j = s[i]-48;
//         if(j == 1)
//         {
//             x = x + pow(2,k);
//         }
//         k++;
//     }
//     return x;
// }
// int main()
// {
//     string binary("011");
//     cout<<binaryToDecimal(binary);
//     return 0;
// }

// #include<iostream>
// #include<vector> 

// using namespace std;

// void snake(int a[][100],int n,int m)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(i%2 ==0)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 cout<<a[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         else
//         {
//             for(int j=m-1;j>=0;j--)
//             {
//                 cout<<a[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }
// int main()
// {
//     int a[10][10];
//     int n,m;
//     cout<<"enter the number of rows and colmns: ";
//     cin>>n>>m;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//     snake(a,n,m);
//     return 0;
// }

// #include<iostream>

// using namespace std;

// void spiral(int a[][4],int n,int m)
// {
//     int sr =0,sc=0;
//     int er=n-1,ec=m-1;
//     //traversal loop(Array boundary)
//     while((sc <= ec) and (sr <= er))
//     {   
//         //start row is fixed for this upcoming loop
//         for (int col =sc;col<=ec;col++)
//         {
//             cout<<a[sr][col]<<" ";
//         }
//         // for this row end column is fixed
//         for(int row = sr+1;row<=er;row++)
//         {
//             if(sr == er)break;
//             cout<<a[row][ec]<<" ";
//         }
//         //for this loop end row is fixed
//         for(int col = ec-1;col>=sc;col--)
//         {
//             cout<<a[er][col]<<" ";
//         }
//         //for this loop the start column is fixed
//         for(int row = er-1;row>sr;row--)
//         {
//             if(sc == ec)break;
//             cout<<a[row][sc]<<" ";
//         }
//         //updatation of the values of sr,sc,ec,er
//         sc++;
//         ec--;
//         sr++;
//         er--;

//     }
// }
// int main()
// {
//     int a[][4] ={
//             {1,2,3,4},
//             {12,13,14,5},
//             {11,16,15,6},
//             {10,9,8,7}};
//     int n=4,m=3;

//     spiral(a,n,m);
// }

// #include<iostream>
// #include<vector>

// using namespace std;

// vector<int> WavePrint(int m, int n, vector<vector<int>> a)
// {   vector<int> b;
//     int k=0;
//     for(int j =m-1;j>=0;j--)
//     {
//         if(k % 2 == 0)
//         {
//             for(int i = 0;i<=n-1;i++)
//             {
//                 b.push_back(a[i][j]);
//             }
        
//         }
//         else
//         {
//             for(int i = n-1;i>=0;i--)
//             {
//                 b.push_back(a[i][j]);
//             }
        
//         }
//         k++;
//     }
//     return b;
// }
// int main()
// {
//     vector<vector<int>> a={
//             {1,2,3,4},
//             {12,13,14,5},
//             {11,16,15,6},
//             {10,9,8,7}};
//     vector<int> b;
//     int n=4,m=4;
//     b = WavePrint(m,n,a);
//     for(auto x:b)
//     {
//         cout<<x<<" ";
//     }
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std ;

// pair<int,int> staircase(vector<vector<int>> a, int n, int m, int key)
// {
//     if(key> a[n-1][m-1] or key<a[0][0])
//     {
//         return {-1,-1};
//     }
//     int row=0;
//     int column=m-1;
//     while(row<=n-1 or column>=0)
//     {
//         if(a[row][column] ==  key)
//         {
//             return {row+1,column+1};
//         }
//         else if(a[row][column]<key)
//         {
//             row++;
//         }
//         else
//         {
//             column--;
//         }
//     }
//     return {-1,-1};
// }

// int main()
// {
//     vector<vector<int>> a={
//             {1,2,3,4},
//             {5,6,7,8},
//             {9,10,11,12},
//             {13,14,15,16}};  
//     int m=4,n=4;
//     pair<int,int> b =  staircase(a,n,m,6);
//     cout<<b.first<<b.second;
//     return 0;
// }
// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// int sum(vector<vector<int>> v, int sr, int sc, int er, int ec)
// {
//     int s=0;
//     for(int i=sr;i<=er;i++)
//     {
//         for(int j=sc;j<=ec;j++)
//         {
//             s=s+v[i][j];
//         }
//     }
//     return s;
// }
// int main()
// {
//     vector<vector<int>>mat  {{1, 2, 3, 4, 6},
//                     {5, 3, 8, 1, 2},
//                     {4, 6, 7, 5, 5},
//                     {2, 4, 8, 9, 4} };
//     int s = sum(mat,0,0,1,1);   
//     cout<<s;             
//     return 0;
// }
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<vector<int>> printPascal(int n)
// {
//     vector<vector<int>> a;
//     a.push_back({1});
//     a.push_back({1,1});
//     for(int i=2;i<n;i++)
//     {
//         vector<int> v;
//         v.push_back(1);
//         for(int j=1;j<i;j++)
//         {
//             int pascal = a[i-1][j-1] + a[i-1][j];
//             v.push_back(pascal);
//         }
//         v.push_back(1);
//         a.push_back(v);
//     }
//     return a;
// }
// int main()
// {
//     vector<vector<int>> b;
//     b = printPascal(7);
//     for(auto x: b)
//     {
//         for(auto y: x)
//         {
//             cout<<y<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }

// MANGO TREE

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// vector<pair<int,int>> mango_tree(vector<vector<int>> a,int n,int m)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {

//         }
//     }
// }

// int main()
// {

//     return 0;

// }

// #include<iostream>
// #include<vector>

// using namespace std;

// int main()
// {
//     int x = 10;
//     int* ptr;
//     int* * p = &ptr;//pointer to a pointer
//     ptr = &x;
//     int* N = NULL;
//     int a = *ptr;//dereference operator
//     cout<<&ptr<<endl<<p<<endl;
//     cout<<*ptr;
//     cout<<N;
//     return 0;
// }
// #include<iostream>
// #include<vector>

// using namespace std;

// int ** create2Darray(int rows,int columns)
// {
//     //making a pointer that can point to all the rows in the matrix seprately
//     int ** array = new int*[rows];
    
//     //allocation of memory for each row
//     for(int i=0;i<rows;i++)
//     {
//         array[i] = new int[columns]; 
//     }
//     //how to iterate accross is actually same as normal array
//     int values = 0;
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<columns;j++)
//         {
//             array[i][j] = values++;
//         }
//     }
//     return array;
// }

// int main()
// {

//     int n;
//     cin>>n;
//     //dynamic array
//     int * a = new int[n];

//     for(int i=0;i<n;i++)
//     {
//         a[i] = i;
//         cout<<a[i];
//     }
//     cout<<endl;
//     delete[] a;
//     cout<<a[5]<<endl;

//     int r,c;
//     cin>>r>>c;
//     int ** arr = create2Darray(r,c);

//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             cout<<arr[i][j];
//         }
//     }    
//     delete[] arr;
//     cout<<endl<<arr[0][0];
//     return 0; 
// }
// #include<iostream>
// #include "vector.h"
// using namespace std;



// int main()
// {
//     Vector<int> a(5);
//     int d = 9;
//     a.push_back(1);
//     a.push_back(2);
//     a.push_back(3);
//     a.push_back(4);
//     a.push_back(5);
//     cout<<a.size();
//     cout<<endl<<a.capacity()<<endl;
//     a.pop_back();
//     a.push_back(6);
//     cout<<a.end();
//     cout<<a.size();
//     cout<<endl<<a.capacity()<<endl;
//     cout<<a[3];
//     return 0;
// }
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main()
{
    vector<int> arr = {10,11,12,3,4,6,7,8};
    int key = 11;
    cin>>key;

    vector<int>::iterator it = find(arr.begin(),arr.end(),key);
    
    if(it!=arr.end())
    cout<<it-arr.begin();
    else
    cout<<"element not found";
    return 0;
}
// #include<iostream>
// #include<vector>

// using namespace std;

// int main()
// {



//     return 0;
// }
// #include<iostream>
// #include<vector>

// using namespace std;

// int main()
// {



//     return 0;
// }
// #include<iostream>
// #include<vector>

// using namespace std;

// int main()
// {



//     return 0;
// }
// #include<iostream>
// #include<vector>

// using namespace std;

// int main()
// {



//     return 0;
// }
// #include<iostream>
// #include<vector>

// using namespace std;

// int main()
// {



//     return 0;
// }
