template<class T>
class A;

template<class T>
A<T> foo(A<T>& a);

template<class T>
class A
{
  public:
    A(T a = 0): m_a(a) {}

    friend A foo<T>(A& a);

  private:
    T m_a;
};

template<class T>
A<T> foo(A<T>& a)
{
  return a;
}

int main()
{
  A<int> a(5);
  int i = 4;

  foo(a); // Succeeds
  foo(i); // Cannot deduce template parameters

  return 0;
}
