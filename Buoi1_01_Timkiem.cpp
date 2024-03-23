#include <stdio.h>
#include <conio.h>
#include <stdlib.h>	// chua ham random
#include <iostream>
#include <math.h>

#define MAX 50

using namespace std;

void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);

void LinearSearch_1(int a[], int n, int x);  //cach1

//int LinearSearch_2(int a[], int n, int x) ; //cach2
//void BinarySearch_1(int a[],int  n, int x); //cach 1
//int BinarySearch_2(int a[],int  n, int x); //cach 2

// Chuong trinh chinh------
int main ()
{
	int a[100], n;
	printf("n NHap Mang A: \n");
	NhapMang(a,n);
	printf("\n Mang A vua nhap : \n");
	XuatMang(a,n);
	int x;
	printf("Nhap phan tu can tim: "); scanf("%d", &x);
	printf("\nKet qua tim tuyen tinh cach 1:");
	LinearSearch_1(a,n,x);
	
	//bo sung goi cac ham con lai
	
	getch();
	return 1;
}


// Dinh nghia cac ham-----------
// Ham hoan doi 2 so nguyen
void HoanDoi(int &x, int &y)
{
	int tam = x; 
	x = y; 
	y = tam;
}

void NhapMang(int a[], int &n) 
{
	printf("Nhap danh sach cac phan tu: \n");
	printf("->Nhap so luong phan tu: ");
	scanf("%d", &n);

	while(n<=0) {
		printf("-> Nhap lai so duong: ");
		scanf("%d", &n);
	}

	for(int i=0; i<=(n-1); i++) {
		printf("-Nhap phan tu thu %d:", i+1);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
}

///-----------------
// Tim kiem tuyen tinh - Cach 1
void LinearSearch_1(int a[], int n, int x)
{ 
	int i, flag = 0; 
	for(i=0;i<n;i++)
	 	if( a[i] == x) 
		{  
			printf("\nGia tri %d  o vi tri %d trong mang", x,i+1); 
			flag =1; 
			break; 
		} 
	
	if( flag == 0) 
		printf("\nGia tri %d khong co trong mang", x);  
} 

// Tim kiem tuyen tinh - Cach 2
//int LinearSearch_2(int a[], int n, int x)


