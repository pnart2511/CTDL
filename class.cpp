#include<iostream>
using namespace std;
template <typename T, typename U>
class DuongTron{
	private:
		T x,y;
		U BanKinh;
	public:
		DuongTron(T x , T y, U bk);
		void Xuat();
		
};

template <typename T , typename U>
DuongTron<T, U>::DuongTron(T x , T y , U bk)
{
			this->x = x;
			this->y = y;
			this->BanKinh = bk;
}
template <typename T , typename U>
void DuongTron<T, U>::Xuat()
{
	cout<<x<<","<<y<<", "<<BanKinh<<endl;
}
int main ()
{
	DuongTron <int,float> c(5,10,22.3);
	c.Xuat();
	return 0;
}
