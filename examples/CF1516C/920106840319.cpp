#include<iostream>
#include<algorithm> 
#include<string.h>
using namespace std;

int main()
{
	int n,sum=0,flag=0;
	cin>>n;
	int a[n];
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
		sum+=a[i]; 
	}
	if(sum%2)			 //����֮��Ϊ����������Ҫ�� 
	{
		cout<<0<<endl;
		return 0;
	}
	else				 //����֮��Ϊż�����ȶ�ԭ�����ж�
	{
		bool b[sum];
		memset(b,0,sizeof(b));
		b[0]=1;
		for(int i=0;i<=n-1;i++)
			for(int j=sum/2;j>=a[i];j--)
				b[j]|=b[j-a[i]];
		if(!b[sum/2])
		{
			cout<<0<<endl;
			return 0;
		}
	}
	while(1)		//����֮��Ϊż�������ϳ���2ֱ���������� 
	{ 
		for(int i=0;i<=n-1;i++)
		{
			if(a[i]%2)
			{
				flag=1;			//��������flag��1
				cout<<1<<endl<<i+1<<endl; 
				break;
			}	
		}
		if(flag==1)
			break;
		for(int i=0;i<=n-1;i++)
		{
			a[i]/=2;
		}
	}
	
	return 0;
}
