#include <iostream>
#include <cstring>
using namespace std; 
/*˼·�� 
��numT,numM�ֱ��ʾ T,M �ĸ����� 
�ȴ�ǰ���������
����ĳһʱ�� T�ĸ���С�� M�ĸ��������겻��ƥ�䣬boolֵb=0��
�ٴӺ���ǰ������
����ĳһʱ�� T�ĸ���С�� M�ĸ��������겻��ƥ�䣬boolֵb=0��
����ж� f�Ƿ�Ϊ0���Ƿ������ƥ�䣩����T�ĸ����Ƿ���M��2����
���YES��NO���ɡ�
*/
int main() 
{
	int ALLMODEL=0;
	cin>>ALLMODEL;
	
	while(ALLMODEL--)
	{
		int length=0;
		cin>>length;
		string s;
		cin>>s;
		int numT=0,numM=0; bool b=1;
		for(int i=0; i<length; i++)
		{
			if(s[i]=='T') numT++;
			if(s[i]=='M') numM++;
			if(numT<numM) {b=0; break;}
		} 
		numT=0; numM=0;
		for(int i=0; i<length; i++)
		{
			if(s[length-i-1]=='T') numT++;
			if(s[length-i-1]=='M') numM++;
			if(numT<numM) {b=0; break;}
		} 
		if( b && (numT==2*numM) ) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

