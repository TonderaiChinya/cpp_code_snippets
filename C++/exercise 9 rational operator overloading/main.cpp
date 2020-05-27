#include <iostream>

using namespace std;

class Rational
{
private:
    int numerator;
    int devisor;
public:
    Rational(int n=1,int d=1)
    {
        numerator=n;
        devisor=d;
    }

    void display()
    {
        cout<<numerator<<"/"<<devisor<<endl;
    }

 friend Rational operator/(Rational r1, Rational r2);

};
Rational operator/(Rational r1, Rational r2)
    {
        Rational temp;
        temp.numerator=r1.numerator+r2.numerator;
        temp.devisor=r1.devisor+r2.devisor;
        return temp;
    }

int main()
{
    Rational r1(4,6),r2(3,4),r3;


    r3=operator/(r1,r2);
   r3.display();
}
