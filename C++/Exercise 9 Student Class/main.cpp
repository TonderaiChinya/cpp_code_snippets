#include <iostream>

using namespace std;

class Student
{
private:

    int roll;
    string studentName;
    int mathsMarks;
    int chemistryMarks;
    int physicsMarks;
    float averageMark;
    char grade;

public:

    //functions prototyping

    float average();
    void setGradeSymbol();
    void setStudentName();
    void setMathsMarks();
    void setChemistryMarks();
    void setPhysicsMarks();
    int getGradeSymbol();


};

int main()
{

}
