#include <iostream>
using namespace std;
int main()
{
	int t,n,a[3000],b[3000],c[3000];
	cin>>t;
	for(int j=0,b1=0,c1=0;j<t;j++,b1=0,c1=0)
	{
		cin>>n; 
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0)
			{
				b[b1]=a[i];
				b1++;
			}
			else
			{
				c[c1]=a[i];
				c1++;
			}
		}
		for(int i=0;i<b1;i++)
		cout<<b[i]<<" ";
		for(int i=0;i<c1;i++)
		cout<<c[i]<<" ";
		cout<<endl;
	}
	// 
//   ���ٸ��� xunhuan  ŶŶ ��Ҳ��ѭ��������  wodongle
//	�ⲻ���Ƕ�ά���飿
//	��ά����ռ�ռ䰡�����һ��һά���鲻�ͽ�ʡ�ռ��� 
//  ��˵�ĺ��е��������������������ˡ�������������ڤ��ᡣ ���⣿��������������/ 
//  �ҿ�����������ż���ж���  ��ѽ ��ͦ��С��C Ϊɶ���벻��  ����   ����������xdm 

	return 0;
	
} 
