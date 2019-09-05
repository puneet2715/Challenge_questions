#include <iostream>

using namespace std;

int main()
{
    int a,b,n,i,flag;
    cin>>a>>b;
    if(a>b)
    n=b;
    else
    n=a;
    for(i=n;i>=1;i--)
    {
     if(n%i==0)
     {
      major:
      if(a>b)
      {
          if(a%i==0)
          {
              for(int j=i-1;j>=2;j--)
              {
               if(i%j==0)
               {

                   cout<<i<<" is the prime HCF";
                   break;
               }
              }
         }
      }
     if(b>a)
     {
         if(b%i==0)
         {
             for(int j=i-1;j>=2;j--)
              {
               if(i%j==0)
               {

                   cout<<i<<" is the prime HCF";
                   break;
               }
              }
         }
     }
       /* if(flag==1)
        {
            for(int k=i-1;k>=2;k--)
            {
                if(i%k==0)
                {
                    goto major;
                }
                else if(k==2)
                    cout<<i<<" is the prime HCF";
            }
        }
       */
    }
    }
    return 0;
}
