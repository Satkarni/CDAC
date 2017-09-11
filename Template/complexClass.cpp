
#include "complexClass.h"

void comp::accept()
{
    cout<<"\n"<<"Enter the real element"<<endl;
    cin>>x;
    cout<<"\n"<<"Enter the imaginary element"<<endl;
    cin>>y;
}

void comp::print()
{
     cout<<"\n"<<x<<"+j"<<y<<endl;
}

comp& comp::add(comp& c)
{
    c.x += x;
    c.y += y;
    return c;
}

comp& comp::sub(comp& c)
{
    c.x -= x;
    c.y -= y;
    return c;
}

comp& comp::mul(comp& c)
{
    double x2 = c.x;
    double y2 = c.y;	
    c.x = x*x2 - y*y2;
    c.y = x*y2 + y*x2;
    return c;
}

comp& comp::division(comp& c)
{
    double x2 = c.x;
    double y2 =c.y;
    c.x= x*x2+y*y2;
    c.y=y*x2-x*y2;
    c.x /= (x2*x2+y2*y2);
    c.y /= (x2*x2+y2*y2);
    return c;
}
comp& comp::operator+(comp& c)
{
    c.x += x;
    c.y += y;
    return c;
}

comp& comp::operator-(comp& c)
{
    c.x -= x;
    c.y -= y;
    return c;
}

comp& comp::operator*(comp& c)
{
    double x2 = c.x;
    double y2 = c.y;	
    c.x = x*x2 - y*y2;
    c.y = x*y2 + y*x2;
    return c;
}

comp& comp::operator/(comp& c)
{
    double x2 = c.x;
    double y2 =c.y;
    c.x= x*x2+y*y2;
    c.y=y*x2-x*y2;
    c.x /= (x2*x2+y2*y2);
    c.y /= (x2*x2+y2*y2);
    return c;
}





