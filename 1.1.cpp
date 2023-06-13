#include<iostream>
using namespace std;
class Room
{
	protected :
	int length, breadth;
	public:
		int area()
		{
			return(length*breadth);
		}
};
class BedRoom : public Room
{
	int height;
	public:
		int setData(int l,int b,int h)
		{
			length =l;
			breadth =b;
			height = h;
			
		}
		int Volume()
		{
			return(length*breadth*height);
		}
};
int main()
{
	BedRoom b;
	b.setData(8,6,5);
	cout<<"Area = "<<b.area()<<endl;
	cout<<"Volume = "<<b.Volume()<<endl;
}
