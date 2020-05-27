#include <iostream>

using namespace std;

class MyException1:exception
{

};
int main()
{
    try
    {
        throw MyException1();
    }
    catch(int e)
    {
        cout<< "int Catch"<<endl;
    }
     catch(double e)
    {
        cout<< "double Catch"<<endl;
    }
     catch(...)
    {
        cout<< "All Catch"<<endl;
    }
}
