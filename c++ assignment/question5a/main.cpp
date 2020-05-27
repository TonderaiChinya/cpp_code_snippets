#include<iostream>
#include<string>
using namespace std;

void userInfo(float theHoursWorked, float thePayRate);
float calcEmployeePay(float theHoursWorked, float thePayRate);
void displayPaySlip(string theEmployee, float theHoursWorked, float thePayRate, float overTime, float ePay);

int main()
{   string theEmployee;
    float theHoursWorked,
          thePayRate,
          overTimeHours,
          ePay;

    userInfo(theHoursWorked, thePayRate);
    calcEmployeePay(theHoursWorked, thePayRate);
    displayPaySlip(theEmployee, theHoursWorked, thePayRate, overTimeHours, ePay);

    return 0;
}

void userInfo(float &theHoursWorked, float &thePayRate)
{
    string theEmployee;
    cin.get();
    cout<< "Please Enter employee name "<<endl;
    getline(cin, theEmployee, '\n');
    cout<< "Please enter the hours worked"<<endl;
    cin>>theHoursWorked;
    cout<< "Please Enter the pay rate"<<endl;
    cin>>thePayRate;
}

float calcEmployeePay(float theHoursWorked, float thePayRate)
{

    if (theHoursWorked > 40.0)
    {
        float overTime = (theHoursWorked - 40.0);
        float ePay = ((40.0 * thePayRate) + (overTime * 1.5));
        return ePay;
    }
    else{
        float ePay = theHoursWorked * thePayRate;
        return ePay;
    }
}

void displayPaySlip(string theEmployee, float theHoursWorked, float thePayRate, float overTime, float ePay)
{
    cout<< "Pay slip for "<< theEmployee <<endl;
    cout<<"Hours worked: "<< theHoursWorked << "hours" <<endl;
    cout<<"Overtime hours: "<< overTime<<endl;
    cout<<"Hourly pay rate: "<<thePayRate<<endl;
    cout<<"Pay: R"<< ePay<<endl<<endl;

}
