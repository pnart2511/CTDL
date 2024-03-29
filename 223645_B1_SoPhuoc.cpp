#include <iostream>
#include <math.h>
using namespace std;

class SoPhuc{
	
	private:
		double dPhanThuc, dPhanAo;
	public:
	
		SoPhuc(double phanthuc = 0  , double phanao = 0 ):dPhanThuc(phanthuc), dPhanAo(phanao){
		}
		
		~SoPhuc(){
			
		}
		void Nhap()
		{
			cout<<"Nhap phan Thuc:"; cin>>dPhanThuc;
		cout<<"Nhap Phan Ao : "; cin>>dPhanAo;
		}
		
		void Xuat(){
			cout<<dPhanThuc<<"+"<<dPhanAo<<"i"<<endl;
		}
		SoPhuc& Cong(SoPhuc&);
		SoPhuc& Tru(SoPhuc&);
		SoPhuc& Nhan(SoPhuc&);
		SoPhuc& Chia(SoPhuc&);
		
};
	SoPhuc& SoPhuc::Cong(SoPhuc& sp)
	{
	SoPhuc sophuc;
	sophuc.dPhanThuc = dPhanThuc + sp.dPhanThuc;
	sophuc.dPhanAo = dPhanAo + sp.dPhanAo;
	return sophuc;
	}
SoPhuc& SoPhuc::Tru(SoPhuc& sp)
	{
	SoPhuc sophuc;
	sophuc.dPhanThuc = dPhanThuc - sp.dPhanThuc;
	sophuc.dPhanAo = dPhanAo - sp.dPhanAo;
	return sophuc;
	}

SoPhuc& SoPhuc::Nhan(SoPhuc& sp)
	{
	SoPhuc sophuc;
	sophuc.dPhanThuc = dPhanThuc * sp.dPhanThuc  - dPhanAo *  sp.dPhanAo;
	sophuc.dPhanAo = dPhanThuc * sp.dPhanAo  + dPhanAo *  sp.dPhanThuc;
	return sophuc;
	}
SoPhuc& SoPhuc::Chia(SoPhuc& sp)
	{
	    SoPhuc ketqua;
        double mau = sp.dPhanThuc * sp.dPhanThuc + sp.dPhanAo * sp.dPhanAo;
        ketqua.dPhanThuc = (dPhanThuc * sp.dPhanThuc + dPhanAo * sp.dPhanAo) / mau;
        ketqua.dPhanAo = (sp.dPhanThuc * dPhanAo - dPhanThuc * sp.dPhanAo) / mau;
        return ketqua;
    }
	
	
	
	int main()
	{
		SoPhuc p1;
		p1.Nhap();
		SoPhuc p2;
		p2.Nhap();
		SoPhuc tong  = p1.Cong(p2); tong.Xuat();
		SoPhuc hieu  = p1.Tru(p2); hieu.Xuat();
		SoPhuc tich  = p1.Nhan(p2); tich.Xuat();
		SoPhuc thuong  = p1.Chia(p2); thuong.Xuat();
		
	}
