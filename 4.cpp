/*Create a class Student with data member roll_no and two functions to instialize and display it.
Derive a new class Test which has two methods to assign and display marks in two subjects.
Create a new class Sport with two functions that assign and display the score in sports. Now
create another class Result that is derived from from both class Test and Sport, having a function
that display the total of marks and score. Write a main program to test your class.*/
//Program :
#include<iostream>
using namespace std;
class Student
{
	protected :
		int roll_no;
	
	public:
		void getroll()
		{
			cout<<"Enter the roll no = ";
			cin>>roll_no;
		}
		void showroll()
		{
			cout<<"Roll No = "<<roll_no<<endl;
		}
};
class Test : public Student
{
	protected:
		double M,C;
		
	public:
		void getmark()
		{
			cout<<"Enter the mark of the subject"<<endl;
			cout<<"Math = ";
			cin>>M;
			cout<<"C Programming = ";
			cin>>C;
		}
		void showmark()
		{
			cout<<"Math = "<<M<<endl;
			cout<<"C Programming = "<<C<<endl;
		}
};
class Sport
{
	protected:
		double s;
		
	public:
		void getscore()
		{
			cout<<"Enter the score of sport = ";
			cin>>s;
		}
};
class Result : public Test, public Sport
{
	double Total;
	public:
		void display()
		{
			Total = M+C;
			cout<<"Total Marks = "<<Total<<endl;
			cout <<"Sport Score = "<<s<<endl;
		}
};
int main()
{
	Result R;
	R.getroll();
	R.getmark();
	R.getscore();
	R.showroll();
	R.showmark();
	R.display();
	
}
