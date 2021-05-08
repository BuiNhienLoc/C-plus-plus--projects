#include<iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
    Point (){x= 0 , y=0;}
	Point(int x1, int y1) { x = x1; y = y1; }

	// Copy constructor
	Point(const Point &p1) {x = p1.x; y = p1.y; }
	//destructor
	~Point(){delete &x,&y;}
	Point& operator=(const Point& other)
	{
	    this->x = other.x;
	    this->y=other.y;
	    return *this;
	}

	int getX()		 { return x; }
	int getY()		 { return y; }
};

int main()
{
	Point p1(10, 15); // Normal constructor is called here
	Point p2 = p1; // Copy constructor is called here
    Point p3;
    p3 = p1;
	// Let us access values assigned by constructors
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();
    cout << "\np3.x = " << p3.getX() << ", p3.y = " << p3.getY();
	return 0;
}

