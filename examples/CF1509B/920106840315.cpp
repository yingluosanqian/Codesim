//TMT���⼴�ǰ�TMT��ȥ���������ܽ���������ȫ����ȥ�����������
//��ˣ�1��������������T������ʱ�̴��ڵ���M
//2��������������T������ʱ�̴��ڵ���M
//3������������T��M������ 
#include<bits/stdc++.h>
using namespace std;
	int t;//���ڼ�¼������
	int n;//���ڼ�¼����Ԫ�ظ���
	int NumT,NumM=0;
	int judge=1;
	string ac;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>ac;
		ac=" "+ac;//�������ַ� 
		for(int i=1;i<=n;i++){
			if(ac[i]=='T')NumT++;
			if(ac[i]=='M')NumM++;
			if(NumT<NumM){
				judge=0;
				break;
			}
		}NumT=0;NumM=0;
		for(int i=n;i>=1;i--){
			if(ac[i]=='T')NumT++;
			if(ac[i]=='M')NumM++;
			if(NumT<NumM){
				judge=0;
				break;
			}
		}
		if(judge==0||NumT!=NumM*2)cout<<"NO";
		else cout<<"YES";
		cout<<endl;
		NumT=0;NumM=0;judge=1;//Ϊ����һ��ѭ����׼�� 
	}
	return 0;	 
}
 
