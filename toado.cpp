#include <iostream>
#include <conio.h>
using namespace std;
class toado
{
	private:
	int x;
	int y;
	
	public: 
		void Nhap()
		{
			cout<<"Nhap X = ";
			cin>>x;
			cout<<"Nhap y = ";
			cin>>y;
		}
		void Xuat();
		void DiChuyen(int newX , int NewY);	
};
void toado::Xuat()
{
	cout<<"Toa do : "<<x<<" "<<y<<endl;
	}	
	
void toado::DiChuyen(int NewX, int NewY)
{
	
	x = NewX;
	y = NewY;
	
	}
	
int main()
{
	toado td;
	td.Nhap();
	td.Xuat();
	getch();
	return 0;
	}	
