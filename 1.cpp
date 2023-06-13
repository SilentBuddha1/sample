/*A class Room consists of two fields length and breadth and method int area()
to find the area o room. A new class Bedroom is derived from class Room and 
consist of additional field height and two methods setData(int,int,int) to set
the value for three fields and int volume() to find the vomume. Now write the 
c++ program to input the length,breadth and height and find the area and volume.*/
// Program :
#include<iostream>
using namespace std;
class Room
{
	protected:
		int l,b;
		
	public:
		int area()
		{
			int a = l*b;
			return(a);
		}
};
class Bedroom : public Room
{
		int h;
		
	public :
		int setData(int x,int y, int z)
		{
			l=x;
			b=y;
			h=z;
		 } 
		 int volume()
		 {
		 	int v = l*b*h;
			return(v);
		 }
 };
 int main()
 {
 	Bedroom r;
 	r.setData(5,4,2);
 	cout<<"Area = "<<r.area()<<endl;
 	cout<<"Volume = "<<r.volume()<<endl;
	} 
