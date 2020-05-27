#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int selection, number_of_tickets;
    double cost = 0;

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
            {
                if (selection > 4)
                cout << "Invalid choice - Please re-enter ";
                cin >> selection;
            }

        cout << "You have selected option number " << selection<< endl;
        cout << "How many tickets would you like?" << endl;
        cin >> number_of_tickets;

            switch(selection)
            {
            case 1: cost = double(number_of_tickets) * 3000.00;
                cout<< " The total cost is R" << cost <<endl;
                break;
            case 2: cost = double(number_of_tickets) * 2000.00;
                cout<< " The total cost is R" << cost <<endl;
                break;
            case 3: cost = double(number_of_tickets) * 1200.00;
                cout<< " The total cost is R" << cost <<endl;
                break;
            case 4: cost = double(number_of_tickets) * 600.00;
                cout<< " The total cost is R" << cost <<endl;
                break;
            case 0:cout << " Please come again" << endl;
                break;
            default:
                cout << " Invalid selection ";
                cout<< " Try again please " << endl;

            }
        }
     return 0;
}
