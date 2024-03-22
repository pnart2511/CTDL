#include <iostream>
using namespace std;
template <typename TYPE>
void HoanVi(TYPE&a , TYPE& b)
{
	TYPE tmp = a;
	a= b ;
	b = tmp;
}
template <class T1 , class L1 >
L1 TinhTong (T1 a , L1 b)
{
	return a + b;
}
int main()
{
 int a = 10 ;
 float b = 10.5;
 cout<<"Ket Qua = "<<TinhTong(a,b);

return 0;
}


