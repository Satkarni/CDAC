#include "problem5.h"
using namespace std;

Player::Player()
{
   _age=0;
   _name="";
   _count="";
}

Player::Player(int age,string name,string count)
{
	_age=age;
	_name=name;
	_count=count;
}

void Player:: Accept()
{
	cout<<"\nEnter player name,age and country separated by spaces"<<endl;
	cin >> _name >> _age >> _count;
} 
void Player::Display()
{
	cout<<"\n" << _name<< " " << _age << " " << _count << endl;
}

void Player::Displaylist(Player *p)
{
	for(int i=0;i<size-1;i++)
	{
		if(p[i]._age == 0 && p[i+1]._age == 0)
			break;
		cout<< p[i]._name<< "\t" << p[i]._age << "\t" << p[i]._count << endl;
	}

}
	
