//����һ�����ַ� T ���ַ� M ���ɵġ�����Ϊ n ���ַ��� s����Ҫ�������ֳ����ɸ����ཻ�������У�
//ʹ�����������ж����� TMT���ж��Ƿ��н⣬�н���� YES���޽���� NO��TT �����ݡ�

#include<bits/stdc++.h>
using namespace std;
int T;
int n;
int judge(){
	cin>>n;
	char a[n];
	if(n%3!=0)
	return 0;
	else{
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	}
	int num_T=0,num_M=0;
	for(int i=0;i<n;i++){
		if(a[i]=='T') num_T++;
		if(a[i]=='M') num_M++;
	}
	if(num_T/2!=num_M) return 0;
	else{
		int len=0;
		len=n/3-1;
		char b[n][2];
		for(int i=0;i<n;i++){
			int j=0;
			if(a[i]=='M'){
			   b[j][1]='M';
			   int temp=0;
			   temp=i;
			   for(int k=0;k<i;k++){
			   	if(a[k]=='T'){
			   		b[j][0]=='T';
			   		a[k]=='N';
			   		break;
				   }
				   else return 0;
			   }
			   for(int k=i;k<n;k++){
			   	if(a[k]=='T'){
			   		b[j][2]=='T';
			   		a[k]=='N';
			   		break;
				   }
				   else return 0;
			   }
			}
			else
			return 1;
		}
	}
	
}
int main(){
	cin>>T;
	int c[T];
	for(int i=0;i<T;i++){
		if(judge())
		c[i]=1;
		else
		c[i]=0;
	}
	for(int i=0;i<T;i++){
		if(c[i]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

