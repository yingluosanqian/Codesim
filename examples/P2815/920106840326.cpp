//1.�ĸ����֣���һλ��ʼ�����������
//2.һ����������ɣ���
//3.����㴮��ǰ����㴮��ֻ����һ��
#include <bits/stdc++.h>
using namespace std;
//���ҵ�����㴮����ɣ���
char a[39];
char b[39];
signed choose(char a[39]){
	int sum_1=0;
	int sum_2=0; 
	int num=39;
	int n_1=0;//��ʼλ�� 
	int n_2=0;//��ֹλ�� 
	for(int i=0;i<39;i++){
		if(a[i]=='0'){
			sum_2++;
		}
		else{
			if(sum_2>sum_1)
			sum_1=sum_2;
			n_2=i;//��ֹʱ��λ�� = n_2
			sum_2=0;
		}
	}
	n_1=39-sum_1/4-sum_1;
	for(int i=0;i<n_1;i++){
		int j=0;
		b[j]=a[i];
		j++;
	} 
	b[n_1]=':';
	b[n_1+1]=':';
	for(int i=n_2;i<39;i++){
		int k=n_1+2;
		b[k]=a[i];
		k++; 
	}
	num=num-n_2-n_1;
	return b[];
	return num;
}
int main(){
	for(int i=0;i<39;i++){
		cin>>a[i];
	}
	int temp=0;
	choose(a[39]);
	for(int i=0;i<num;i++){
		if(b[0]=='0'){
			if(b[1]=='0'){
				if(b[2]=='0'){
					if(b[3]=='0'){
						b[0]=b[1]=b[2]=b[3]="";
					}
					else{
						b[0]=b[1]=b[2]="";
					}
					
				}
				else{
						b[0]=b[1]="";
					}
			}
			else{
						b[0]="";
					}
		}
	}
}
