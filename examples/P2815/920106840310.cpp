#include <bits/stdc++.h>

using namespace std;

int main() 
{
	char dizhi[39];
	
	for (int k=0;k<39;k++)
	{
		cin>>dizhi[k];
	} //��ɳ�ʼ��ַ������
	
	int sum;//ȫ���ֶμ�����
	bool judge=true;//�ж�ȫ���ֶ�
	int maxzero=1;
	int place=-1;
	int i,j;
	
	for (i=0,sum=0;i<8;i++)
	{
		judge=true;
		for (j=0;j<4;j++)
		{
			if (dizhi[i*5+j] != '0')
			{
				judge=false;
				break;//��Ȼ������ȫ���ֶε�������ֱ�������˶�ѭ�� 
			}
		}
		if (judge==true)//ȫ���ֶα�����
		{
			sum++;
			if (sum>maxzero)
			{
				maxzero=sum;
				place=i;
			} 
		}
		else sum=0;	
	}
	
	if (maxzero==1) place=-1;//��ʱû�п���ѹ���ɡ����������ֶ� 
	place=place-maxzero+1;
	
	for (i=0;i<8;i++)
	{
		if (place==i)
		{
			cout<<":";
			if (i==0) cout<<":";
			i+=maxzero;
			if (i>7) break;
		}
		
		j=0;
		while (dizhi[i*5+j]=='0' && j<3)
		{
			j++;
		}
		
		while (j<4)//��������ֶε���� 
		{
			cout<<dizhi[i*5+j];
			j++;
		}
		if (j==4 && i!=7) cout<<":";
	}
	return 0;
}
