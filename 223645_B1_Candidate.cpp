#include <iostream>
using namespace std;


class Candidate{
	private:
		string sMa , sTen , sNgaySinh;
		float fDiemToan, fDiemVan,fDiemAnh;
	public:
		Candidate(){
		}
		Candidate(string ma_ts , string ten_ts ,string ngay_sinh_ts , float fdiem_toan ,float fdiem_van ,float fdiem_av):
		sMa(ma_ts),sTen(ten_ts) , 
		sNgaySinh(ngay_sinh_ts),
		fDiemToan(fdiem_toan) , 
		fDiemVan(fdiem_van),
		fDiemAnh(fdiem_av){}
		~Candidate();
		void Nhap()
		{
			cout<<"Nhap Ma So Thi Sinh: "; getline(cin,sMa);
			cout<<"Ho Va Ten: "; getline(cin,sTen);
			cout<<"Ngay Sinh: "; getline(cin,sNgaySinh);
			cout<<"Diem Mon Toan: "; cin>>fDiemToan;
			while(fDiemToan < 0 || fDiemToan > 10 )
			{
				cout<<"Nhap Lai Diem Toan: "; cin>>fDiemToan;
			}
				cout<<"Diem Mon Anh Van: "; cin>>fDiemAnh;
			while(fDiemAnh < 0 || fDiemAnh > 10 )
			{
				cout<<"Nhap Lai Diem Anh Van: "; cin>>fDiemAnh;
			}
				cout<<"Diem Mon Ngu  Van: "; cin>>fDiemVan;
			while(fDiemVan < 0 || fDiemVan > 10 )
			{
				cout<<"Nhap Lai Diem Ngu Van: "; cin>>fDiemVan;
			}
		}
		void Xuat(){
			cout<<"MS Thi Sinh :"<<sMa<<endl;
			cout<<"Ho Va Ten :"<<sTen<<endl;
			cout<<"Ngay Sinh :"<<sNgaySinh<<endl;
			cout<<"Diem Toan :"<<fDiemToan<<endl;
			cout<<"Diem Van :"<<fDiemVan<<endl;
			cout<<"Diem Van :"<<fDiemAnh<<endl;
			cout<<"Tong Diem : "<<LayTongDiem()<<endl;
			
			
		}
		float LayTongDiem(){
			return fDiemToan + fDiemVan + fDiemVan ;
		}
};
Candidate::~Candidate()
{
}
class TestCandidate{
	public:
		void NhapDanhSach(int , Candidate[]);
		void XuatDanhSach(int , Candidate[]);
};
void TestCandidate::NhapDanhSach(int n , Candidate ds [])
{
	for(int i = 0 ; i < n ; i ++)
	{
		cout<<"Nhap Thi sinh Thu : "<<i+1<<endl;
		ds[i].Nhap();
	}
}
void TestCandidate::XuatDanhSach(int n , Candidate ds [])
{
	cout<<"Danh Sach Thi Sinh tren 15  diem:"<<endl;
	for(int i =0 ; i <n ; i ++ )
	{
			if(ds[i].LayTongDiem() > 15)
			{	cin.ignore();				ds[i].Xuat();
			}	
	}
	
}
int main()
{
 Candidate *ts;
 TestCandidate test;
 int n ; 
 cout<<"So Luong thi sinh can nhap:" ; cin>>n;
 ts = new Candidate[n];
 test.NhapDanhSach(n,ts);
 test.XuatDanhSach(n,ts);
return 0; 		
	
}
