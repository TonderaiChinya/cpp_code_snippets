#include <iostream>

using namespace std;

int main()
{
    int numStudents, days;
    float bioNumHours, proNumHours, total, average,totalBio,totalPro,  bioAverage,  proAverage;
    int student,day = 0; // these are the counters for the loops
    cout << "This program will find the average number of hours a day"
    << "that a student spent programming over a long weekend\n\n";
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
            << student << " on Biology on day " << day << "." << endl;
            cin >> bioNumHours;
            totalBio += bioNumHours;
            }

        for(day = 1; day <= days; day++)
            {
            cout << "Please enter the number of hours worked by student"
            << student<< " on Programming on day"  << day << "." << endl;
            cin >> proNumHours;

            totalPro += proNumHours;
            }
                bioAverage = totalBio / days;
                cout << endl;
                cout << "The average number of hours per day spent Biology "
                << "by student " << student << " is " << bioAverage
                << endl <<endl;

                proAverage = totalPro / days;
                cout << endl;
                cout << "The average number of hours per day spent programming "
                << "by student " << student << " is " << proAverage
                << endl <<endl;
                totalBio = 0, totalPro = 0;

    if(proAverage > bioAverage)
        {
            cout<< "The student"<<student<< " spent more time on Programming than Biology."<<endl;
        }
    else
        {
            cout<< "The student"<<student<< "spent more time on Biology than Programming."<<endl;
        }
        cout<<endl<<endl;
    }


    return 0;
}


