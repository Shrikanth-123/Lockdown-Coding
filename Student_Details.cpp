#include <iostream>

using namespace std;
int i,n;
class student
{
    private:
        string name[20];
        int id[20];
        char sec[20];
    public:
        void student_Details()
        {
            for(i=0;i<n;i++)
            {
                cout<<"Name=";
                cin>>name[i];
                cout<<"ID=";
                cin>>id[i];
                cout<<"Section=";
                 cin>>sec[i];
            }
        }
        void display()
        {
            cout<<"Name\tID\tSection"<<endl;
             for(i=0;i<n;i++)
            {
                cout<<name[i]<<"\t"<<id[i]<<"\t"<<sec[i]<<endl;
            }
        }
};
int main()
{
    student ob;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    ob.student_Details();
    ob.display();
    return 0;
}
