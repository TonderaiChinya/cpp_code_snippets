#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    //mutators
    void setLength(int l)
    {
        if(l>=0)
            length=l;
            else
            length=0;
    }
    void setBreadth(int b)
    {
        if(b>=0)
            breadth=b;
        else
            breadth=0;
    }
    //accessors
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
public:
    //function prototyping
    //fascilitators
    int area();

    int perimeter();

    //constructors
    Rectangle(int l=0,int b=0)
    {
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &r2)
    {
        length=r2.length;
        breadth=r2.breadth;
    }

};
//scope resolution....good practise
int Rectangle::area()
    {
        return length*breadth;
    }
int Rectangle::perimeter()
    {
        return 2*(length+breadth);
    }



int main()
{
    Rectangle r(10,5);
    Rectangle r2(r);

    cout<<r2.area()<<endl;
    cout<<r2.getLength()<<endl;
    return 0;
}
