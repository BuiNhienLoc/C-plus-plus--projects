template<class T>
class A
{
  public:
    A(T a = 0): m_a(a) {}

    friend A operator+(const A& lhs, const A& rhs)
    {
      return lhs.m_a + rhs.m_a;
    }

  private:
    T m_a;
};

int main()
{
  A<int> a(5);
  A<int> b(7);
  int i = 4;

  a + b;    // Succeeds
  i + a;    // Also succeeds
  return 0;
}
