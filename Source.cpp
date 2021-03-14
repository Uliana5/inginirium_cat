#include <iostream>
using namespace std;

class fraction {
private: 
	int numerator;
	int  denominator;
public:
	
	fraction(int a)
	{
		cout << "Hello world" << endl;
	}
	void input(int num, int den)
	{
		numerator = num;
		denominator = den;
	}
	void vivod()
	{
		cout << numerator << "/" << denominator << endl;
		cout << (float)numerator/denominator << endl;
	}
};

int main()
{
	fraction obj1(2);
	obj1.input(10, 4);
	obj1.vivod();
	

	return(0);
}


	