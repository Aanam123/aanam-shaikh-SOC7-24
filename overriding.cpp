#include<iostream>
using namespace std;

class Animal
{
	public:
	void eat ()
	{
		cout << "the animal eats .";
	}
};

class Cat: public Animal 
{
	public:
	void eat()
	{
		cout << "cat eats fish.";
	}
};

int main ()
{
	Cat c;
	Animal a;
	a.eat();
	c.eat();
	return 0;
}
