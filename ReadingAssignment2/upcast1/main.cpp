#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}



class Shape
{
private:
protected:
    double a;
public:
    Shape(){}
    virtual void draw(){}
    virtual double area(){return a;}
    virtual void print(){}
};

class Circle: public Shape
{
private:
    double radius;
public:
    Circle(){}
    Circle(double radius)
    {
        this->radius=radius;
    }
    void draw()
    {
        cout<<"Circle drew."<<endl;
    }
    double area()
    {
        a=3.14*(radius)*(radius);
        return a;
    }
    void print()
    {
        cout<<"Area= "<<a<<endl;
    }
};

class Square: public Shape
{
private:
    double side;
public:
    Square(){}
    Square(double side)
    {
        this->side=side;
    }
    void draw()
    {
        cout<<"Square drew."<<endl;
    }
    double area()
    {
        a=side*side;
        return a;
    }
    void print()
    {
        cout<<"Area= "<<a<<endl;
    }
};

class Triangle: public Shape
{
private:
    double height;
    double bottom;
public:
    Triangle(){}
    Triangle(double height, double bottom)
    {
        this->height=height;
        this->bottom=bottom;
    }
    void draw()
    {
        cout<<"Triangle drew."<<endl;
    }
    double area()
    {
        a=height*bottom*0.5;
        return a;
    }
    void print()
    {
        cout<<"Area= "<<a<<endl;
    }
};

void play(Shape& s)
{
   s.draw();
}


int main()
{
    vector <Shape*>list_of_shape;
    Circle c(3);
    Square s(4);
    Triangle t(25,4);
    list_of_shape.push_back(&c);
    list_of_shape.push_back(&s);
    list_of_shape.push_back(&t);
    list_of_shape[0]->draw();
    list_of_shape[1]->draw();
    list_of_shape[2]->draw();
    c.area();
    s.area();
    t.area();
    c.print();
    s.print();
    t.print();
    Shape temp;
    play(c);
    for(int i=0;i<list_of_shape.size()-1;i++)
    {
        for (int j=0;j<list_of_shape.size()-i-1;j++)
        {
            if (list_of_shape[j]->area()<list_of_shape[j+1]->area())
            {
                swap(list_of_shape[j], list_of_shape[j+1]);
            }
        }
    }
    cout<<endl;
    for (int i=0;i<list_of_shape.size();i++)
    {
        list_of_shape[i]->print();
    }
    Shape shape;
    shape.draw();
    return 0;
}
