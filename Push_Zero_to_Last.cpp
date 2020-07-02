#include<iostream>
using namespace std;
int i,n,a[10],k,*s,*p;
void swap(int *s,int *p);
void swap(int *s,int *p)
{
    int temp;
    temp=*s;
    *s=*p;
    *p=temp;

}
int main()
{

    cout<<"enter number of elements in your list "<<endl;
cin>>n;
cout<<"enter your list of array containing zero's"<<endl;
for(i=0;i<n;i++)
{
    cin>>a[i];

}
for(i=0;i<n-1;i++)
    {
    if(a[i]==0&&a[i+1]!=0)
    {
        swap(&a[i],&a[i+1]);
    }
    else
        if(a[i]==0&&a[i+1]==0)
    {
      for(k=(i+1);k<n;k++)
      {
          if(a[k+1]==0)
          {

          }
             else
             {
             break;
             }


      }
        swap(&a[i],&a[k+1]);

    }

}
for(i=0;i<n;i++)
{
    cout<<a[i]<<"\t";

}
}
