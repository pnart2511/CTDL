//QL xe
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <math.h>
#include <conio.h>
#include <iomanip>
#include <iostream>

using namespace std;

typedef struct //QLXe
	{
		char  Bangso[10];
		char  Hangsx[40];
		int   Namsx;
		float Giatien;
	} QLXe;

void NhapXe(QLXe &xe);
void XuatXe(QLXe xe);

//bo sung cac ham con lai	
//void NhapMang(QLXe a[], int n) ;
//void XuatMang(QLXe a[], int n) ;


int main()
{
	QLXe mangxe[100];
	int n;

	printf("\nDanh sach co bao nhieu xe: "); scanf("%d",&n);
	//NhapMang(mangxe, n);
	//printf("\nDanh sach xe vua nhap: \n");
	//XuatMang(mangxe, n);
	

	//printf("\nDanh sach xe duoc sx theo Bang so: \n");
	//Sx_Theo_Bangso(mangxe, n);
	//XuatMang(mangxe, n);
	
	getch();
	return 0;	
}


void NhapXe(QLXe &xe)
{
	int nsx;
	float t;
	fflush(stdin); //xoa dau Enter
	printf("\nNhap Bangso: "); gets(xe.Bangso);
	printf("Nhap Hang sx: "); gets(xe.Hangsx); 
	printf("Nhap nam sx: "); scanf("%d",&nsx);	xe.Namsx=nsx;
	printf("Nhap gia tien: "); scanf("%f",&t);	xe.Giatien=t;
}


void XuatXe(QLXe xe)
{
	printf("\nBangso: %s ", xe.Bangso);
	printf(" -Hang sx: %s ", xe.Hangsx);
	printf(" -Nam sx: %4d", xe.Namsx);
	printf(" -Gia tien: %0.2f", xe.Giatien);
}



