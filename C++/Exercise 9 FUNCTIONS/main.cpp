#include <iostream>

using namespace std;

class Student
{
private:
    int roll;
    string name;
    int mathMark;
    int chemMark;
    int phyMark;

public:
    Student(int r,string n,int m, int c, int p )
    {
       roll=r;
       name=n;
       mathMark=m;
       chemMark=c;
       phyMark=p;
    }
    int total()
    {
        return mathMark+chemMark+phyMark;
    }
    char grade()
    {
        float average=total()/3;
        if(average>60)
            return 'A';
        else if(average>=40 && average<60)
            return 'B';
        else
            return 'C';
    }
};

int main()
{
    int roll;
    string name;
    int m,c,p;
    cout << "Enter roll number of a student" << endl;
    cin>>roll;
    cout<<endl;
    cout<< "Enter name of student"<<endl;
    cin>>name;
    cout<< "Enter marks of 3 subjects"<<endl;
    cin>>m>>c>>p;
    cout<<endl;

    Student s(roll,name,m,c,p);

    cout<< "The total is : "<<s.total()<<endl;
    cout<< "The grade is : "<<s.grade()<<endl;
    return 0;
}
