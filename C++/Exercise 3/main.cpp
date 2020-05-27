#include <iostream>

using namespace std;

int main()
{
  float total_amount, discounted_amount,discount;

        cout<<"Enter Total Bill Amount : "<<endl;
        cin>>total_amount;

   if(total_amount<100.0)
        {
         cout<<endl<<"Please take note that you do not qualify for a discount "<<endl;
        }

   else if(total_amount>=100.0&&total_amount<500.0)
        {
             discount=total_amount*0.1;
       discounted_amount=total_amount-(total_amount*0.1);
       cout<< "You qualify for 10% discount"<<endl;
       cout<< "Your discount is :"<<discount<<endl;
       cout<< "Your Discounted Amount is :"<<discounted_amount<<endl;;

        }

        else if(total_amount>=500)

        {discount=total_amount*0.2;
       discounted_amount=total_amount-(total_amount*0.1);

       cout<< "You qualify for 20% discount"<<endl;
       cout<< "Your discount is :"<<discount<<endl;
       cout<< "Your Discounted Amount is :"<<discounted_amount<<endl;
        }

    return 0;
}
