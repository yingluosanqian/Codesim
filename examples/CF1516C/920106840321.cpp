#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a[100]={0};
	int length=0; cin>>length;
	int sum=0;
	for(int i=0; i<length; i++)
	{
		cin>>a[i]; 
		sum+=a[i];	
	}
	if(sum%2) {cout<<"0"; return 0;}//��һ���������������������������Ϊ�� 
	
	int ans=0;
	for(int i=0; i<length; i++)
	{
		if(a[i]%2) 
		{
		    ans=i+1; 
			cout<<"1"<<endl<<ans; 
			return 0;
		}//�ڶ��������������ż������������Ϊż��ֱ��ɾȥһ������ 
	}

	while(sum%2==0)	
	{
		sum=0;
		for(int i=0; i<length; i++)
		{
			a[i]/=2;
			sum+=a[i];
		} 
	}
	for(int i=0; i<length; i++)
	{
		if(a[i]%2) {ans=i+1; break;}
	}
	cout<<"1"<<endl<<ans; return 0;//�������������������������Ϊż����������2��ɾȥ���� 
}
