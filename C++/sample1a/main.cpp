#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int selection;


    cout << "Please enter the choice of ticket "
    << "(a number from 1 to 4 or 0 to quit)" << endl;
    cout << "Ticket Menu " << endl << endl;
    cout << "1: Exclusive VIP area A " << endl;
    cout << "2: VIP area B " << endl;
    cout << "3: Elevated area " << endl;
    cout << "4: General area R600 " << endl;
    cout << "0: QUIT " << endl <<endl << endl;
    cin >> selection ;

    while (selection != 0)
        {

            if(selection > 4)
           {
               cout << "Invalid choice - Please re-enter "<<endl;
                cin >> selection;
            }
                cout << "You have selected option number " << selection<< endl;

        }

return 0;
  }
