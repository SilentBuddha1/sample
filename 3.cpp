/*A class Student consists of feild roll, a method to assigns roll number. A new class Test is
derived from class Student and consists of two new fields sub1 and sub2, a method to initialize
these fields with obtained mark. Again, a new class Result is derived from Test and consists of
a field total and a method to display entire details along with total obtained marks. WAP to
input roll number, marks in two different subject and display total.*/
//Program :
#include<iostream>
using namespace std;
class Student
{
	protected:
		int roll ;
	
	public:
		void getdata()
		{
			cout<<"Enter the roll no = ";
			cin>>roll;
		}
};
class Test : public Student
{
	protected:
		double sub1,sub2;
	
	public:
		void getroll()
		{
			cout<<"Enter the mark of programming and math respectively"<<endl;
			cin>>sub1>>sub2;
		}
};
class Result : public Test
{
	double Total;
	public:
		void display()
		{
			Total = sub1+sub2;
			cout<<"Roll No = "<<roll<<endl;
			cout<<"Programming = "<<sub1<<endl;
			cout<<"Math = "<<sub2<<endl;
			cout<<"Obtained Mark = "<<Total<<endl;
		}
};
int main()
{
	Result R;
	R.getroll();
	R.getdata();
	R.display();
}

