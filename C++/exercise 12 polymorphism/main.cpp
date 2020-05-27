#include <iostream>

using namespace std;

class Shape
{
public:
    virtual float area()=0;
    virtual float perimeter()=0;
};

class Rectangle:public Shape
{
private:
    float breadth;
    float length;
public:
    //mutators
    void setLength(float l)
    {
        if(l>=0)
            length=l;
            else
            length=0;
    }
    void setBreadth(float b)
    {
        if(b>=0)
            breadth=b;
        else
            breadth=0;
    }
    //accessors
    float getLength()
    {
        return length;
    }
    float getBreadth()
    {
        return breadth;
    }
    //function prototyping
    //fascilitators
    float area();

    float perimeter();

    //constructors
    Rectangle(float l=0,float b=0)
    {
        setLength(l);
        setBreadth(b);
    }
};
//scope resolution....good practise
float Rectangle::area()
    {
        return length*breadth;
    }
float Rectangle::perimeter()
    {
        return 2*(length+breadth);
    }


class Circle:public Shape
    {
    private:
      //  float diameter;
        float radius;
        //float circumferance;
    public:


        Circle(float r)
        {
          radius=r;
        }

        float area()
        {
            return radius*radius*3.14;
        }
        float perimeter()
        {
            return 2*3.14*radius;
        }
    };

int main()
{
    Shape *s=new Rectangle(2.3,4.1);
    cout<< "Area of Rectangle is "<<s->area()<<endl;
    cout<< "Perimeter of Reactangle is "<<s->perimeter()<<endl;

    s=new Circle(5);
    cout<< "Area of Circle is "<<s->area()<<endl;
    cout<< "Perimeter of Circle is "<<s->perimeter()<<endl;


}
