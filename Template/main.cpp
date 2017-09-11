#include "array.h"
#include "complexClass.h"

int main()
{
    Array<double> a(5);
    a.accept();
    a.display();

    Array<comp> complexArray(5);
    for(int i=0;i<5;i++)
    {
        complexArray[i].accept();
    }

    for(int j=0;j<5;j++)
    {
        complexArray[j].print();
    }
    return 0;
}

ostream& operator<<(ostream& os,const comp& c)
{
    return os << "\n" << c.x<< " + " << c.y << "j" << endl;
}

istream& operator>>(istream& is,comp& c)
{
    return is >> c.x >> c.y;
}

comp& operator+(int i,comp& c)
{
   c.x += i;
    return c;
}

comp& operator-(int i,comp& c)
{
   c.x = i- c.x;
   c.y *= -1;
    return c;
}
comp& operator*(int i,comp& c)
{
   c.x *= i;
   c.y *= i;
    return c;
}
comp& operator/(int i,comp& c)
{
    double den = c.x*c.x + c.y*c.y;
    c.x = c.x*i/den;
    c.y = c.y*-1*i/den;
    return c;
}

comp& operator+(comp& c,int i)
{
   c.x += i;
    return c;
}

comp& operator-(comp& c,int i)
{
   c.x -= i;
    return c;
}
comp& operator*(comp& c,int i)
{
   c.x *= i;
   c.y *= i;
    return c;
}
comp& operator/(comp& c,int i)
{
   c.x /= i;
   c.y /= i;
    return c;
}


