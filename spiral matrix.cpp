#include <iostream>

using namespace std;

int main()
{
    int n1,m1,n,m,c=0,brk;
    cout<<"enter the number of rows,columns of matrix"<<endl;
    cin>>n1>>m1;
    n=n1-1;
    m=m1-1;
    brk=n1*m1;
    int fspiral[n][m];
    cout<<endl<<"Enter the content of the matrix"<<endl;
    for(int i=0 ;i<=n;i++)
    {
        for(int j=0 ;j<=m;j++)
         cin>>fspiral[i][j];
    }
cout<<"The required spiral is"<<endl;
for(int k=0;k>-1;k++)
{
    for(int j=k;j<=(m-k);j++) //L to R
    {
        if(c==brk)
        {
        break;
        }
        cout<<fspiral[k][j]<<" ";
        c++;
    }
    for(int j=k+1;j<=(n-k);j++)  //U to D
    {
        if(c==brk)
        {
        break;
        }
        cout<<fspiral[j][m-k]<<" ";
        c++;
    }
    for(int j=m-(k+1);j>=k;j--)    //R to L
    {
        if(c==brk)
        {
        break;
        }
        cout<<fspiral[n-k][j]<<" ";
        c++;
    }
    for(int j=n-(k+1);j>=k;j--)  //D to U
    {
        if(c==brk)
        {
        break;
        }
        cout<<fspiral[j][k]<<" ";
        c++;
    }
if(c==brk)
    {
    break;
    }
}
 return 0;
}
