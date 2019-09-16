#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    int n,flag_m=0,m=0;
    cout<<"enter your string of 1 and 0 's by providing space after each element :"<<endl;
    getline(cin,str);
    cout<<str.capacity();
    str.push_back(0);
    str.shrink_to_fit();
    cout<<str;
    n=str.capacity();
    //strcat(s,0);
    cout<<n<<endl;
    for(int i=2 ;i<=n ;i++)
        {
                if(str[i]==0 && str[i-1]==1 && str[i-2]==1)
                flag_m++;
        }
    //if(flag_m==2 && m> 2)
    //cout<<"The no. of group of 1s are :"<<endl<<1<<endl
    //else if(flag_m>0)
    cout<<"The no. of group of 1s are :"<<endl<<flag_m<<endl;
    //else if(flag_m==0)
    //cout<<"The no. of group of 1s are :"<<endl<<0<<endl;
    return 0;
}
