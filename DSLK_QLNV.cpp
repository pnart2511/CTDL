	#include <stdlib.h>
	#include <stdio.h>
	#include <conio.h>
	#include <iostream>
	using namespace std;

	//typedef int ElementType;
	
	struct NhanVien
	{
		char  Hoten[40];
		float Hsluong, Phucap, Luong;
	};
	
	typedef NhanVien ElementType;
	
	typedef struct Node
	{
		ElementType Element;
		Node    *Next;
	}pNode;
	struct Node 
	
	typedef Node *PtrToNode;
	typedef PtrToNode Position;
	typedef PtrToNode List;

	void Makenull_List( List &L );
	int IsEmpty_List( List L );
	int IsLast( Position P);
	void Insert_List( ElementType X, Position P, List L );
	Position Header( List L );
	Position First_List( List L );
	Position End_List( List L);
	Position Advance( Position P );
	ElementType Retrieve( Position P );
	void Read_List(List L);
	void Write_List(List L);
	//void Sort_List(List L);
	


/* MAIN PROGRAM */
int main()
{
	List L;
	
	printf("\n Nhap vao danh sach \n");
	Makenull_List(L);
	Read_List(L);
	printf("\n Danh sach  vua nhap \n");
	Write_List(L);
	//printf("\n Danh sach sau khi sap xep\n");
	//Sort_List(L);	
	//Write_List(L);
	getch();
	return 1;

}

/* Cai dat cac ham*/
	/*Tao 1 danh sach rong*/
	void  Makenull_List(List  &L)
	{
		L = new Node;
		if (L== NULL){
			printf("Khong du bo nho");
			exit(1);
		}
		L->Next = NULL;
	}

	/* Kiem tra danh sach rong? */
	int IsEmpty_List( List L )
	{
		return L->Next == NULL;
	}

	/* Kiem tra P co tro den phan tu cuoi cua ds khong? */

	int IsLast( List P )
	{
		return P->Next == NULL;
	}

	/* Chen 1 phan tu vao danh sach */
	void  Insert_List( ElementType X, List P, List L )
	{
		Position TmpCell;
		TmpCell = new Node;
		
		if (TmpCell == NULL)
		{
			printf("Khong du bo nho");
			exit(1);
		}
		TmpCell->Element = X;
		TmpCell->Next = P->Next;
		P->Next = TmpCell;
	}

	
	/* Tim phan tu header */
	Position	Header( List L )
	{
		return L;
	}

	/* Tim phan tu dau tien */
	Position       First_List( List L )
	{
		return L->Next;
	}

	/* Tim phan tu ke tiep */
	Position	Advance( Position P )
	{
		return P->Next;
	}

	/* Tim gia tri cua 1 phan tu */
	ElementType	Retrieve( Position P )
	{
		return P->Element;
	}

	/* Nhap danh sach */
	
	//Sua lai noi dung ham nay cho dung kieu NhanVien da khai bao
	void Read_List(List L)
	{	int i,n;
		ElementType x;		Position P;
		printf("So phan tu cua danh sach = "); 
		scanf("%d",&n);
		P = Header(L);
		i = 1;
		while(i<=n)
		{	printf("Phan tu %d = ",i); 
			scanf("%d",&x);
			Insert_List(x,P,L); //Chen x vao sau vi tri P
			P = P->Next;
			i++;
		}
	}


	/* In danh sach */
	//Sua lai noi dung ham nay cho dung kieu NhanVien da khai bao
	void Write_List(List L)
	{	Position P;
		if(!IsEmpty_List(L))
		{	P = First_List(L);
			while(P != NULL)
			{
				printf("%3d",P->Element);
				P = P->Next;
			}
		}
		else
			printf("List is empty!");
		printf("\n");
	}
	void nhapnhanvien(ELementType *NV)
	{
		
		
		printf("HoVaTen: ");
		fflush(stdin);
		get(NV->Hoten);
		printf("He So Luong :");
		scanf("f",&NV->Hsluong);
		printf("Phu Cap : ");
		gets(NV->Phucap);
		
			

			
			
			
			}
	void nhapdsnv(List *L, int n )
	{
	Makenull_List(L)
	for(int i = 0 ; i < n ; i ++ )
		{
		ElementType NV;
		printf("Nhap thong tin nhan vien thu %d\n : ",i);
		
			
		
		}						
	
	
	}
	
	
	
