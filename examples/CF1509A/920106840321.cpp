#include <iostream>
using namespace std;

int main() 
{
	int ALLMODEL=0;
	cin>>ALLMODEL;
	
	while(ALLMODEL--)
	{
		int number=0;
		cin>>number;
		int a[2000]={0};
		for(int i=0; i<number; i++) cin>>a[i];
		
		for(int i=0; i<number; i++)
		{
			if(a[i]%2)
			cout<<a[i]<<" "; //һ��������������� 
		}
		for(int i=0; i<number; i++)
		{
			if(a[i]%2==0) //һ�����������ż�� 
			cout<<a[i]<<" ";
		}
		cout<<endl;
    }
	return 0;
}
