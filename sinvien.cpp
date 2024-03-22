#include <iostream>
#include <stdexcept>
using namespace std;


//lopcha
class ngoaileCha{
	
	private:
		int maLoi;
		string thongBao;
	public:
		ngoaileCha(int ma_loi , string thong_bao): maLoi(ma_loi) , thongBao(thong_bao){
		}
		string getThongBao(){
			return thongBao;
		}
	
};
//lop con
class ngoaiLeCon: public ngoaileCha{
	
	public:
		ngoaiLeCon(int ma_loi , string thong_bao):ngoaileCha(ma_loi,thong_bao){	
		}
};
 class SinhVien{
 	private :
 		string maSV;
 		string hoTen;
 		float diemTB;
 	public:
 		SinhVien(string ma_sv , string ho_ten, float diem_trung_binh)
 		{	
 			if(ma_sv.length() != 6 )
 			throw invalid_argument("Ma Sinh Vien Phai du 6 ki tu!");
 			maSV = ma_sv;
 			hoTen = ho_ten;
 			if(diem_trung_binh <0 || diem_trung_binh > 10)
 			throw 
			 
			out_of_range("Diem Phai Tu 0 > 10!");
 			
 			
 			diemTB = diem_trung_binh;
		 }
		 void Xuat()
		 {
		 	cout <<maSV<<","<<hoTen<<","<<diemTB<<endl;
		 
		 	
			 
		 }
 };
 int main()
 {
 	try
 	{
	 	SinhVien sv ("123456", "Pham Nguyen" , 10);
	 	sv.Xuat();
 	}
 	
 		catch(logic_error e)
 	{
 		cout<<e.what()<<endl;
	 }
 	return 0;
 }
