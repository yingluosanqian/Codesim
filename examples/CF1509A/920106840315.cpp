#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;//��ʾ����������
	int n;//��ʾ��������������
	int a[2003];//���ڴ�������������
	cin>>t;
	for(t;t>0;t--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++){
			if(a[i]%2!=0)cout<<a[i]<<" ";
		}
		for(int i=1;i<=n;i++){
			if(a[i]%2==0)cout<<a[i]<<" ";
		}
		cout<<'\n';
	} 
	return 0;
} 
