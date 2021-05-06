#include <iostream>

using namespace std;
template<typename T>
class Wrapper
{
public:
    Wrapper(T const& value) : value_(value) {}

    T const& get() const { return value_; }

private:
    T value_;
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
