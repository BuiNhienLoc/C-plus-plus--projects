#include<iostream>
using namespace std;

template<class T>
class A
{
  public:
    A(T a = 0): m_a(a) {}

    template<class U>
    friend A<U> foo(A<U>& a);

  private:
    T m_a;
};

template<class T>
A<T> foo(A<T>& a)
{
  return a;
}

A<double> secret_pie(3.14);

struct dummy {};
template<>
A<dummy> foo<dummy>(A<dummy>& d)
{
  cout << "Hacked! " << secret_pie.m_a << endl;
  return d;
}
