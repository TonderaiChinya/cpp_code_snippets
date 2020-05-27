#include <iostream>

using namespace std;

int startNum, numValues, incValue, number;

void printTabs(){

             cout<<"NUMBER"<<"    "<<"SQUARE"<<"    "<<"CUBE"<<endl;
             for(number = startNum; number<=numValues; number+=incValue)
             {
                 cout<<number<<"          "<<number*number<<"          "<<number*number*number<<endl;
             }

}

selTabs(){



    cout<<"Enter the starting value of the table "<<endl;
    cin>>startNum;
    cout<<"Enter the number of values to be displayed "<<endl;
    cin>>numValues;
    cout<<"Enter the increment between the values "<<endl;
    cin>>incValue;

    printTabs();


}
int main()
{
    selTabs();
    return 0;
}
