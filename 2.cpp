#include<iostream>
using namespace std;
class class1
{
	protected:
		int num1;
		
	public :
		void getdata()
		{
			cout<<"Enter the first number = ";
			cin>>num1;
		}
};
class class2
{
	protected :
		int num2;
		
	public :
		void getdata()
		{
			cout<<"Enter the second number = ";
			cin>>num2;
		}
};
class class3 : public class1 , public class2
{
	int sum;
	public :
		void calculate()
		{
			sum = num1+num2;
			cout<<"The sum of two number is "<<sum;
		}
		
 };
 int main()
 {
 	class3 c;
 	c.class1::getdata();
 	c.class2::getdata();
 	c.calculate();
 }
