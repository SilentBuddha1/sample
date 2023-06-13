/*Create a class Student with data member roll_no and two functions to initialize and display.
Derive two new classes Theory and Practical from Student. Define suitable functions to assign
and display theory and practical marks for two different subjects. Again, derive a new class*/
//Program :
#include<iostream>
using namespace std;
class Student
{
	protected:
		int roll_no;
		
	public:
		void getroll()
		{
			cout<<"Enter the Roll No = ";
			cin>>roll_no;
		}
		void showroll()
		{
			cout<<"Roll No = "<<roll_no<<endl;
		}
};
class Theory : public Student
{
	protected:
		double TM,TC;
		
	public:
		void getdata()
		{
			cout<<"Enter the theory mark of Math and C programming "<<endl;
			cout<<"Math = ";
			cin>>TM;
			cout<<"C Programming = ";
			cin>>TC;
		}
		void display()
		{
			cout<<"Obtained Theory Marks"<<endl;
			cout<<"Math = "<<TM<<endl;
			cout<<"C Programming = "<<TC<<endl;
		}
};
class Practical : public Student
{
	protected:
		double PM,PC;
		
	public:
		void getmark()
		{
			cout<<"Enter the practical mark of math and c programming"<<endl;
			cout<<"Math = ";
			cin>>PM;
			cout<<"C Programming = ";
			cin>>PC;
		}
		void display()
		{
			cout<<"Obtained Practical Mark"<<endl;
			cout<<"Math = "<<PM<<endl;
			cout<<"C Programming = "<<PC<<endl;
		}
};
class Result: public Theory, public Practical
{
	protected :
	double m;
	public :
		void Total()
		{
			m = TM+PM+TC+PC;
		}
		void display()
		{
			cout<<"Total obtained mark"<<endl;
			cout<<"Total = "<<m;
		}
};
int main()
{
	Student s;
	Theory t;
	Practical p;
	Result r;
	r.Total();
	s.getroll();
	t.getdata();
	p.getmark();
	s.showroll();
	t.Theory::display();
	p.Practical::display();
	r.Result::display();
}
