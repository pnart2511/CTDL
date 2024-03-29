#include <iostream>
#include <algorithm>
using namespace std;
class PhanSo{
	private:
		int ituSo;
		int imauSo;
	public:
		/*
		PhanSo(int t = 0 , int m = 1):ituSo(t), imauSo(m){
		}
		*/
		
		PhanSo();
		PhanSo(int, int);
		~PhanSo(){
		}
		void Nhap();
		void Xuat();
		void ToiGian();
		PhanSo& Cong(PhanSo&);
		PhanSo& Tru(PhanSo&);
		PhanSo& Nhan(PhanSo&);
		PhanSo& Chia(PhanSo&);
		
};

PhanSo::PhanSo()
{
	ituSo = 0;
	imauSo = 1;
 } 
 PhanSo::PhanSo(int tu , int mau )
 {
 	ituSo = tu;
 	if(mau == 0)
 	
 	imauSo = 1;
 	else
 		imauSo = mau;
 	
	  }
void PhanSo::Nhap()
{
	cout<<"Nhap Tu So : "; cin>>ituSo;
	cout<<"Nhap Mau So : "; cin>>imauSo;
	while(imauSo == 0)
	{
		cout<<"Nhap Lai Mau So Khac O :"; cin>>imauSo;
	}
}
void PhanSo::Xuat()
{
  cout<<"Ket Qua"<<ituSo<<"/"<<imauSo<<endl;
	
}
void PhanSo::ToiGian()
{
	int UCLN = __gcd(ituSo , imauSo);
	ituSo /= UCLN;
	imauSo /= UCLN;
	if(imauSo < 0)
	{
		imauSo = -imauSo , ituSo = - ituSo;
		
	}
	if(ituSo == 0)
	 imauSo = 1;
}
PhanSo& PhanSo::Cong(PhanSo& ps)
{
	PhanSo ketQua;
	ketQua.ituSo = ituSo * ps.imauSo + imauSo * ps.ituSo;
	ketQua.imauSo = imauSo * ps.imauSo;
	ketQua.ToiGian();
	return ketQua;
}
PhanSo& PhanSo::Tru(PhanSo& ps)
{
	PhanSo ketQua;
	ketQua.ituSo = ituSo * ps.imauSo - imauSo * ps.ituSo;
	ketQua.imauSo = imauSo * ps.imauSo;
	ketQua.ToiGian();
	return ketQua;
}
PhanSo& PhanSo::Nhan(PhanSo& ps)
{
	PhanSo ketQua;
	ketQua.ituSo = ituSo * ps.ituSo;
	ketQua.imauSo = imauSo * ps.imauSo;
	ketQua.ToiGian();
	return ketQua;
}
PhanSo& PhanSo::Chia(PhanSo& ps)
{
	PhanSo ketQua;
	ketQua.ituSo = ituSo * ps.imauSo;
	ketQua.imauSo = imauSo * ps.ituSo;
	ketQua.ToiGian();
	return ketQua;
}
int main()
{
PhanSo ps1;
ps1.Nhap();
PhanSo ps2;
ps2.Nhap();
PhanSo tong = ps1.Cong(ps2);
tong.Xuat();
PhanSo hieu = ps1.Tru(ps2);
hieu.Xuat();
PhanSo tich = ps1.Nhan(ps2);
tich.Xuat();
PhanSo thuong = ps1.Chia(ps2);
thuong.Xuat();


	return 0;
}
