#include <iostream>
using namespace std;


class NhanVien {
private:
    string maNhanVien;
    string hoTen;
    float heSoLuong;
    float luong;
    int thamNien;

public:
  
    NhanVien() : maNhanVien(""), hoTen(""), heSoLuong(0), luong(0), thamNien(0) {}
    NhanVien(string ma, string ten, float heSo, int thamNien) : maNhanVien(ma), hoTen(ten), heSoLuong(heSo), thamNien(thamNien) {}

    // ham sett
    void setMaNhanVien(string ma) { maNhanVien = ma; }
    void setHoTen(string ten) { hoTen = ten; }
    void setHeSoLuong(float heSo) { heSoLuong = heSo; }
    void setThamNien(int tn) { thamNien = tn; }

    //ham get
    string getMaNhanVien() { return maNhanVien; }
    string getHoTen() { return hoTen; }
    float getHeSoLuong() { return heSoLuong; }
    int getThamNien() { return thamNien; }

  //nhap thong tin
    void nhapThongTin() {
        cout << "Nhap ma nhan vien: ";
        cin >> maNhanVien;
        cout << "Nhap ho va ten: ";
        cin.ignore();
        getline(cin, hoTen);
        cout << "Nhap he so luong: ";
        cin >> heSoLuong;
        cout << "Nhap tham nien (thang): ";
        cin >> thamNien;
    }

    //xuat thong tin
    void xuatThongTin() {
        cout << "Ma nhan vien: " << maNhanVien << endl;
        cout << "Ho va ten: " << hoTen << endl;
        cout << "He so luong: " << heSoLuong << endl;
        cout << "Tham nien: " << thamNien << " thang" << endl;
        cout << "Luong: " << tinhLuong() << " dong" << endl;
    }

   //tinh luong
    float tinhLuong() {
        if (thamNien < 12)
            heSoLuong = 1.92;
        else if (thamNien < 36)
            heSoLuong = 2.34;
        else if (thamNien < 60)
            heSoLuong = 3.0;
        else
            heSoLuong = 4.5;

        luong = heSoLuong * 1800000;
        return luong;
    }
};

int main() {
    NhanVien nv;
    cout << "Nhap thong tin nhan vien:\n";
    nv.nhapThongTin();
    cout << "\nThong tin nhan vien:\n";
    nv.xuatThongTin();

    return 0;
}
