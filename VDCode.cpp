// bai 17 
#include<conio.h>
#include<stdio.h>
#include<malloc.h>
void input(float *a, int n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%f",(a+i));
	}	
}
void output(float *a, int n)
{
	for(int i=0;i<n;i++)
	printf("\n %10.3f",*(a+i));	
}

float tbc(float *a,int n)
{
	float tong=0;
	int dem=0,x,y;
	
    do
	{
		printf("\n nhap x : ");
		scanf("%d",&x);
	}while(x<0||x>=n);
	do
	{
		printf("\n nhap y : ");
		scanf("%d",&y);
	}while(y<0||y>=n);
	for(int i=x; i<=y; i++)
	{
		tong+=*(a+i);
		dem++;
	}
		
	
	return tong/dem;
}
// 
float max(float *a, int n)
{
	float max;
	for(int i=0;i<n;i++)
	if(*(a+i)>max)max=*(a+i);
	return max;
}

int main()
{
	float *a;
	int n;
	do
	{
		printf("\n nhap so phan tu cua mang : ");
		scanf("%d",&n);
	}while(n<0);
	a=(float*)malloc(n* sizeof(float));
	input(a,n);
	printf("\n hien thi cac phan tu cua day theo dang cot :  ");
	output(a,n);
	printf("\n trung binh cong cac so trong khoang la : %10.3f",tbc(a,n));
	printf("\n gia tri lon nhat cua day la : %10.3f",max(a,n));
	
}
