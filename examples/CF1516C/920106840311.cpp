#include<iostream>
using namespace std;	
int n =0;

void show (char a [])	//��ӡ������� 
{
	for(int i= 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void exchange(char a[])//��С�������� 
{
	for(int i = 0;i<n;i++)
	{
		for(int j = i;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				char tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
bool isgood(char a[])
{
	; 
}
int main()
{
	
	cin>>n;
	char a[n+1]={0};
	for(int i= 0;i<n;i++)
	{
		cin>>a[i];
	}
	exchange(a); 
	show(a);
	return 0;
 } 
