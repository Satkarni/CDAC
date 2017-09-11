#include<iostream>
using namespace std;

class comp
{

   private:
   double x;
   double y;

   public:
   void accept()
   {
     cout<<"\n"<<"Enter the real element"<<endl;
     cin>>x;
     cout<<"\n"<<"Enter the imaginary element"<<endl;
     cin>>y;
   }
  
   void print()
   {
     cout<<"\n"<<x<<"+j"<<y<<endl;
   }
   
   comp& add(comp& c)
   {
    c.x += x;
	c.y += y;
	return c;
	}

   comp& sub(comp& c)
   {
    c.x -= x;
	c.y -= y;
	return c;
	}
   
   comp& mul(comp& c)
   {
	double x2 = c.x;
	double y2 = c.y;	
    c.x = x*x2 - y*y2;
	c.y = x*y2 + y*x2;
	return c;
	}

   comp& division(comp& c)
    {
        double x2 = c.x;
        double y2 =c.y;
        c.x= x*x2+y*y2;
        c.y=y*x2-x*y2;
        c.x /= (x2*x2+y2*y2);
        c.y /= (x2*x2+y2*y2);
    }
   comp& operator+(comp& c)
   {
    c.x += x;
	c.y += y;
	return c;
	}

   comp& operator-(comp& c)
   {
    c.x -= x;
	c.y -= y;
	return c;
	}
   
   comp& operator*(comp& c)
   {
	double x2 = c.x;
	double y2 = c.y;	
    c.x = x*x2 - y*y2;
	c.y = x*y2 + y*x2;
	return c;
	}
   
   comp& operator/(comp& c)
    {
        double x2 = c.x;
        double y2 =c.y;
        c.x= x*x2+y*y2;
        c.y=y*x2-x*y2;
        c.x /= (x2*x2+y2*y2);
        c.y /= (x2*x2+y2*y2);
    }
friend istream& operator>>(istream& is,comp& c);
friend ostream& operator<<(ostream& os,const comp& c);
friend comp& operator+(int i,comp& c);
friend comp& operator-(int i,comp& c);
friend comp& operator*(int i,comp& c);
friend comp& operator/(int i,comp& c);

friend comp& operator+(comp&c,int i);
friend comp& operator-(comp&c,int i);
friend comp& operator*(comp&c,int i);
friend comp& operator/(comp&c,int i);

};

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

int main()
{ 
   comp c1,c2,c3,c4;
    cin >> c1;
    cout << c1;
    c2 =  c1+ 10;
   cout << c2;
   c2 = 5 - c1;
   cout << c2;
   c2 = 5*c1;
   
   cout << c2;
   c3 = 3/c1;
   cout << c3;
   
return 0;
}
