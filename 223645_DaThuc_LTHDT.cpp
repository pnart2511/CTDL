#include <iostream>
#include <vector>
using namespace std;

class DaThuc {
private:
    vector<float> heSo;
    int bac;

public:
  
    DaThuc() : bac(0) {}
    DaThuc(int n) : bac(n) {
        heSo.resize(n + 1);
    }

   
    float tinhGiaTri(float x) {
        float giaTri = 0;
        float x_mu = 1;
        for (int i = 0; i <= bac; ++i) {
            giaTri += heSo[i] * x_mu;
            x_mu *= x;
        }
        return giaTri;
    }

   
    friend istream& operator>>(istream& is, DaThuc& dt) {
        cout << "Nhap bac cua da thuc: ";
        is >> dt.bac;
        dt.heSo.resize(dt.bac + 1);
        cout << "Nhap cac he so cua da thuc (tu he so cua bac lon nhat den bac nho nhat):\n";
        for (int i = dt.bac; i >= 0; --i) {
            cout << "He so thu " << dt.bac - i + 1 << ": ";
            is >> dt.heSo[i];
        }
        return is;
    }

    friend ostream& operator<<(ostream& os, DaThuc& dt) {
        os << "Da thuc: ";
        for (int i = dt.bac; i > 0; --i) {
            os << dt.heSo[i] << "x^" << i << " + ";
        }
        os << dt.heSo[0] << endl;
        return os;
    }

    friend DaThuc operator+(DaThuc& dt1, DaThuc& dt2) {
        int maxBac = max(dt1.bac, dt2.bac);
        DaThuc tong(maxBac);
        for (int i = 0; i <= maxBac; ++i) {
            tong.heSo[i] = (i <= dt1.bac ? dt1.heSo[i] : 0) + (i <= dt2.bac ? dt2.heSo[i] : 0);
        }
        return tong;
    }

    friend DaThuc operator-(DaThuc& dt1, DaThuc& dt2) {
        int maxBac = max(dt1.bac, dt2.bac);
        DaThuc hieu(maxBac);
        for (int i = 0; i <= maxBac; ++i) {
            hieu.heSo[i] = (i <= dt1.bac ? dt1.heSo[i] : 0) - (i <= dt2.bac ? dt2.heSo[i] : 0);
        }
        return hieu;
    }

    friend DaThuc operator*(DaThuc& dt1, DaThuc& dt2) {
        int newBac = dt1.bac + dt2.bac;
        DaThuc tich(newBac);
        for (int i = 0; i <= dt1.bac; ++i) {
            for (int j = 0; j <= dt2.bac; ++j) {
                tich.heSo[i + j] += dt1.heSo[i] * dt2.heSo[j];
            }
        }
        return tich;
    }

    friend bool operator==(DaThuc& dt1, DaThuc& dt2) {
        if (dt1.bac != dt2.bac)
            return false;
        for (int i = 0; i <= dt1.bac; ++i) {
            if (dt1.heSo[i] != dt2.heSo[i])
                return false;
        }
        return true;
    }
};

int main() {
    DaThuc dt1, dt2;
    cout << "Nhap da thuc 1:\n";
    cin >> dt1;
    cout << "Nhap da thuc 2:\n";
    cin >> dt2;

    cout << "Da thuc 1: " << dt1 << endl;
    cout << "Da thuc 2: " << dt2 << endl;

    DaThuc tong = dt1 + dt2;
    DaThuc hieu = dt1 - dt2;
    DaThuc tich = dt1 * dt2;

    cout << "Tong hai da thuc: " << tong << endl;
    cout << "Hieu hai da thuc: " << hieu << endl;
    cout << "Tich hai da thuc: " << tich << endl;

    if (dt1 == dt2) {
        cout << "Hai da thuc bang nhau.\n";
    } else {
        cout << "Hai da thuc khong bang nhau.\n";
    }

    return 0;
}

