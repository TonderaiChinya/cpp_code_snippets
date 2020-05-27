// This program finds the average time spent programming by a student
// each day over a three day period.
#include <iostream>
using namespace std;
int main()
{
    int numStudents, days;
    float numHours, total, average;
    int student,day = 0; // these are the counters for the loops
    cout << "This program will find the average number of hours a day"
    << " that a student spent programming over a long weekend\n\n";
    cout << "How many students are there?" << endl << endl;
    cin >> numStudents;

    for( student = 1; student <= numStudents; student++)
    {
    total = 0;
    cout << "Enter number of days for student" <<student <<endl;
    cin >> days;
    for(day = 1; day <= days; day++)
    {
    cout << "Please enter the number of hours worked by student"
    << student <<" on day " << day << "." << endl;
    cin >> numHours;
    total = total + numHours;
    }
    average = total / days;
    cout << endl;
    cout << "The average number of hours per day spent programming "
    << "by student " << student << " is " << average
    << endl << endl << endl;
    }
    return 0;
}
