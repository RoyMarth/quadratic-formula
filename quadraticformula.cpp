#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int sqr(int q)
{
	double r;	
	r=q*q;
	return (r);
}
int main()
{
	Loop:
	cout<< "This program will solve a problem using the Quadratic Formula.\n";
	cout<< "The Quadratic Formula is  ax^2+bx+c\n";
	cout<< "Please enter a\n";
	double a;
	double b;
	double c;
	cin>> a;
	cout<< "Please enter b\n";
	cin>> b;
	cout<< "Please enter c\n";
	cin>> c;
	double x1 = (-b+sqrt(sqr(b)-4*a*c))/(2*a);
	double x2 = (-b-sqrt(sqr(b)-4*a*c))/(2*a);
	cout<< "x="<<x1<<", x="<<x2<<endl;
	loop2:
	cout<< "Would you like to do another problem?\n1).Yes\n2).No\n";
	int choice;	
	cin>> choice;
	if (choice==1)
	{
		goto Loop;
	}
	else if (choice==2)
	{
		return 0;
	}
	else
	{
		cout<< "You have entered an invalid choice.\n";
		goto loop2;
	}

char z;
cin>> z;
return 0;
}

