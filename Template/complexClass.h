#ifndef COMPLEX_H
#define COMPLEX_H 

#include<iostream>
using namespace std;

class comp
{

   private:
   double x;
   double y;

   public:
	void accept();
	void print();
	comp& add(comp& c);
	comp& sub(comp& c);
	comp& mul(comp& c);
	comp& division(comp& c);

	comp& operator+(comp& c);
	comp& operator-(comp& c);
 	comp& operator*(comp& c);
 	comp& operator/(comp& c);

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

#endif
