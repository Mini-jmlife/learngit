/*
[ʾ��]:��������ߴη���ȵĶ���ʽ��Ӻ�������
*/
#include <stdio.h>
#define ITEMS 6
void PrintPoly(int Poly[],int items);
void PolySum(int Poly1[ITEMS],int Poly2[ITEMS]);
int main()
{
	int PolyA[ITEMS]={4,3,7,0,6,2};		/*��������ʽA*/
	int PolyB[ITEMS]={4,1,5,2,0,9};		/*��������ʽB*/
	printf("����ʽA=> ");
	PrintPoly(PolyA,ITEMS);			/*��ӡ�������ʽA*/
	printf("����ʽB=> ");
	PrintPoly(PolyB,ITEMS);			/*��ӡ�������ʽB*/
	printf("A+B => ");
	PolySum(PolyA,PolyB);			/*����ʽA+����ʽB*/
	system("pause");
}
void PrintPoly(int Poly[],int items)
{
	int i,MaxExp;
	MaxExp=Poly[0];
	for(i=1;i<=Poly[0]+1;i++)
	{
	    MaxExp--;
	    if(Poly[i]!=0)			/*�������Ϊ0������*/
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
	    result[i]=Poly1[i]+Poly2[i];	/*���ݵ�ϵ�����*/
	PrintPoly(result,ITEMS);
}
