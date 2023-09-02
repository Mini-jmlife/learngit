/*
[示范]:将两个最高次方相等的多项式相加后输出结果
*/
#include <stdio.h>
#define ITEMS 6
void PrintPoly(int Poly[],int items);
void PolySum(int Poly1[ITEMS],int Poly2[ITEMS]);
int main()
{
	int PolyA[ITEMS]={4,3,7,0,6,2};		/*声明多项式A*/
	int PolyB[ITEMS]={4,1,5,2,0,9};		/*声明多项式B*/
	printf("多项式A=> ");
	PrintPoly(PolyA,ITEMS);			/*打印输出多项式A*/
	printf("多项式B=> ");
	PrintPoly(PolyB,ITEMS);			/*打印输出多项式B*/
	printf("A+B => ");
	PolySum(PolyA,PolyB);			/*多项式A+多项式B*/
	system("pause");
}
void PrintPoly(int Poly[],int items)
{
	int i,MaxExp;
	MaxExp=Poly[0];
	for(i=1;i<=Poly[0]+1;i++)
	{
	    MaxExp--;
	    if(Poly[i]!=0)			/*如果该项为0就跳过*/
	    {
	        if((MaxExp+1)!=0)
	            printf(" %dX^%d ",Poly[i],MaxExp+1);
	        else
	            printf(" %d",Poly[i]);
	        if(MaxExp>=0)
	            printf("%c",'+');
	    }
	}
	printf("\n");
}
void PolySum(int Poly1[ITEMS],int Poly2[ITEMS])
{
	int i;
	int result[ITEMS];
	result[0] = Poly1[0];
	for(i=1;i<=Poly1[0]+1;i++)
	    result[i]=Poly1[i]+Poly2[i];	/*等幂的系数相加*/
	PrintPoly(result,ITEMS);
}
