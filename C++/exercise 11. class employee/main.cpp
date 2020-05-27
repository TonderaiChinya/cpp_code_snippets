#include <iostream>

using namespace std;

class Employee
{
private:
    int empId;
    string empName;

public:
    Employee(int Id,string Name)
    {
        empId = Id;
        empName = Name;
    }
    int getEmpId(){return empId;}
    string getEmpName(){return empName;}
};

class FulltimeEmp : public Employee
{
    private:
    int salary;

    public:
       FulltimeEmp(int Id,string Name,int sal):Employee(Id,Name)
       {
        salary=sal;
       }
       int getSalary(){return salary;}
};

class PartTimeEmp : public Employee
{
    private:
    int wages;

     public:
      PartTimeEmp(int Id, string Name,int wag):Employee(Id,Name)
      {
          wages = wag;
      }
      int getWages(){return wages;}
};

int main()
{

FulltimeEmp p1(5,"Tony",5000);
PartTimeEmp p2(2, "Cleo",300);

cout<< "Salary of "<<p1.getEmpName()<< " is :$ "<<p1.getSalary()<< " monthly"<<endl;
cout<< "Wages of "<<p2.getEmpName()<< " is :$ "<<p2.getWages()<<" daily"<<endl;
}
