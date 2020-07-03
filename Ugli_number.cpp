#include<iostream>
using namespace std;
int  main()
{
    int i,k,n,a[100],b[100],q=1,r=0;

    cout<<"enter the value of n\n";
    cin>>n;
    a[0]=1;
    for(i=2;i<=n;i++)
    {
        int pin=0;
        if(i%2!=0 && i%3!=0 && i%5!=0)
        {
            b[r++]=i;
        }
        else{

            for(k=0;b[k]!=NULL;k++)
            {
              if(i%b[k]==0)
               {

                pin=1;
               }
            }

              if(pin!=1)
              {
                a[q++]=i;
              }
           }

     }

  for(i=0;a[i]!=NULL;i++)
  {
      cout<<a[i]<<"\t";
  }
return 0;
}
