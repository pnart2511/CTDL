#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class SV 
{
	private:
	string hoTen;
	string ngaysinh;
	string gioitinh;
	float diemToan;
	float diemLy;
	float diemHoa;
	float diemTrungBinh;
	public:
		void Nhap();
		void xuat();
		float tinhDTB();
		
		
	
	
	
	

	
};
void SV::Nhap()
{
	cout<<"Ho Ten: ";
	getline(cin , hoTen);
	
	cout<<"Ngay sinh: ";
	getline(cin , ngaysinh);
	
	
	cout<<"Gioi Tinh: ";
	getline(cin , gioitinh);
	
	
	cout<<"Diem Toan: ";
	cin>>diemToan;
	
	cout<<"Diem Ly: ";
	cin>>diemLy;
	
	cout<<"Diem Hoa: ";
	cin>>diemHoa;
	
}

float SV::tinhDTB()
{
	return (diemToan + diemLy + diemHoa) / 3 ;
	
}
void SV::xuat()
{
	cout<<"Ho Ten: " << hoTen<<endl;
	cout<<"Ngay Sinh: " << ngaysinh<<endl;
	cout<<"Gioi Tinh: " << gioitinh<<endl;
	cout<<"diemToan" << diemToan<<endl;
	cout<<"diemLy: " << diemLy<<endl;
	cout<<"diemHoa: " << diemHoa<<endl;
	cout<<"Diem Trung Binh: " <<tinhDTB()<<endl;
	
}
int main ()
{
	SV sinhvien;
	sinhvien.Nhap();
	sinhvien.xuat();

	getch();	
	return 0;
}
