#include <iostream>

using namespace std;

template <class T>
T sum(T x,T y)
{
    return x + y;
}

template <class T>
class A
{
    private:
        T x;
        T y;
    public:
        A(T x_,T y_): x(x_),y(y_)
        {

        }
        T display()
        {
            return x+y;
        }
};

int main()
{

    cout << sum(1,2)<< endl;
    cout << sum(1.25,3.67) << endl;
    cout << sum('(','1') << endl;
    A sample(1.2323,3.22323);
    cout << sample.display();
    return 0;
}
