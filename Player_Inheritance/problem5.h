#ifndef PROBLEM5_H
#define PROBLEM5_H


#include<iostream>
#include<string>
#define size 100
using namespace std;

class Player
{
	private:
	int _age;
	string _name;
        string _count;

	public:
	Player();
	Player(int ,string,string);
	void Accept();
	void Display();
	void Displaylist(Player *p);
    int getage(){
            return _age;
    }
    string getname(){
        return _name;
    }
};
#endif
