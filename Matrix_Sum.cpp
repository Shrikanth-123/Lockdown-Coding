#include<iostream>
using namespace std;

int main()
{

    int a[10][10];
    int i,j,m,n,msum=0,mdsum=0,sdsum=0;
        cout<<"enter the number of rows and coloums in a matrix"<<endl;
        cin>>m>>n;
        cout<<"enter matrix elements"<<endl;
        for(i=0;i<m;i++)
        {
            cout<<"enter\t"<<i+1<<"\trow element"<<endl;
            for(j=0;j<n;j++)
        {
            cin>>a[i][j];

        }
        cout<<endl;
        }
         cout<<"matrix elements are"<<endl;
         for(i=0;i<m;i++)
         {
            for(j=0;j<n;j++)
            {
              cout<<a[i][j]<<"\t";
            }
            cout<<endl;
         }

         for(i=0;i<m;i++)

            for(j=0;j<n;j++)
            {
              msum=msum+a[i][j];
            }
         cout<<"sum of matrix elements is "<<msum<<endl;


         for(i=0;i<m;i++)

            for(j=0;j<n;j++)
            {
                if(i==j)
                {
              mdsum=mdsum+a[i][j];
                }
            }
         cout<<"sum of first diagonal elements in matrix is "<<mdsum<<endl;


           for(i=0;i<m;i++)

            for(j=0;j<n;j++)
            {
                if(i==m-1-j)
                {
              sdsum=sdsum+a[i][j];
                }
            }
         cout<<"sum of second diagonal elements in matrix is "<<sdsum<<endl;

return 0;
}
