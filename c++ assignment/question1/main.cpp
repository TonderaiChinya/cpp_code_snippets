#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int selection;

    cout << "Please enter the choice of ticket "
    << "(a number from 1 to 4 or 0 to quit) " << endl;
    cout << "Ticket Menu " << endl << endl;
    cout << "1: Exclusive VIP area A " << endl;
    cout << "2: VIP area B " << endl;
    cout << "3: Elevated area " << endl;
    cout << "4: General area R600 " << endl;
    cout << "0: QUIT " << endl <<endl << endl;
    cin >> selection ;

    while (selection != 0)
    {
        if(selection == 1)
          cout<< "Exclusive VIP area A : R3 000.00 " <<endl;
          else
            if(selection == 2)
            cout << "2: VIP area B : R2 000.00 " << endl;
          else
            if(selection == 3)
            cout << "3: Elevated area : R1 200.00 " << endl;
          else
            if(selection==4)
            cout << "4: General area R600 " << endl;

    }
}
