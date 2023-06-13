/*Define a shape class (with necessary constructor and member functions) in Object Oriented
Programming (abstract necessary attributes and their types). Write a complete code in C++
programming language.
i. Derive triangle and rectangle classes from shape class adding necessary attributes.
ii. Use these classes in main function and display the area of triangle and rectangle.*/
//Program :
#include<iostream>
using namespace std;
class Shape
{
	protected:
		int length,breadth,base,height;
		
	public:
		Shape()
		{
			cout<<"Enter length, breadth,base,height respectively"<<endl;
			cin>>length>>breadth>>base>>height;
		}
};
class triangle : public Shape
{
	public:
		triangle()
		{
			double A = (base*height)/2;
			cout<<"Area of trangle = "<<A<<endl;
		}
};
class rectangle : public triangle
{
	public:
		rectangle()
		{
			double A = length * breadth;
			cout<<"Area of Rectangle = "<<A<<endl;
		}
};
int main()
{
	rectangle r;
}
