#include<bits/stdc++.h>
using namespace std;
int s[10],k,e,m,km,em,mm,sum;
//s�Ǵ��IP��k�Ǵ��ȫ����Ŀ�ʼ�±꣬e�Ǵ��ȫ����Ľ����±꣬m��ȫ�����������Ŀ��km�Ǵ��ȫ����Ŀ�ʼ�±�����ֵ��em�Ǵ��ȫ����Ľ����±�����ֵ��mm��ȫ�����������Ŀ�����ֵ��sum��ȫ���������Ŀ��
int main(){
	scanf("%x:%x:%x:%x:%x:%x:%x:%x",&s[1],&s[2],&s[3],&s[4],&s[5],&s[6],&s[7],&s[8]);
   
	for(int i=1;i<=8;i++)
		if(s[i]!=0)break;
		else if(i==8)puts("::"),exit(0);
    //�ж�IPȫ0�����
	for(int i=1;i<=8;i++)
	    if(s[i]==0)sum++;
    //ͳ��ȫ0�����Ŀ
	for(int i=1;i<=7;i++){
	    k=0;  
		if(s[i]==0)k=i; 
		for(int j=i;j<=8;j++)
			if(s[j]!=0){e=j;break;}  
			else if(s[j]==0&&j==8)e=9;  
		if(k)m=e-k;  
		if(m>mm)mm=m,km=k,em=e;  
	}
	for(int i=1;i<=8;i++)
		if(sum==1&&s[i]==0)printf(":");  
		else if(i==km-1||i==8)printf("%x",s[i]); 
		else if(i!=km)printf("%x:",s[i]); 
		else printf("::"),i=em-1;  
	return 0;
}
