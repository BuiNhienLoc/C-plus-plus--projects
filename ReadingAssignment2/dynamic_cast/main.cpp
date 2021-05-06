#include <string>

class Parent
{
public:
  void sleep() {}
};

class Child: public Parent
{
private:
  std::string classes[10];
public:
  void gotoSchool(){}
};

void f(Parent* p)
{
  Child *ptr = dynamic_cast<Child*>(p);
   if(ptr) {
    // we can safely use ptr
  }
}

int main( )
{
  Parent *pParent = new Parent;
  Parent *pChild = new Child;
  return 0;
}
