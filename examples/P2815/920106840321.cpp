#include <bits/stdc++.h>   
using namespace std;

void find(char a[]); //Ѱ���"0000"�ִ� 
int maxi=-1,maxn=1;

int main()
{
	char a[39];
    cin>>a;
    find(a);
    for(int i=0; i<8; i++)
    {
        if(maxi==i) //����ֶ�ѹ����"::"
        {
            cout<<":";
            if(i==0) cout<<":";
            i+=maxn;
            if(i>7) break;
        }
        int j=0;
        while(a[i*5+j]=='0'&&j<3) j++;  //����ȫ"0"�ֶ�
        for(; j<4; j++) cout<<a[i*5+j];
        if(j==4&&i!=7) cout<<":";  
    }
    return 0;
}

void find(char a[])
{
    int t=0;
    bool is=false;
    for(int i=0; i<8; i++)
    {
        is=true;
        for(int j=0; j<4; j++)
        {
            if(a[i*5+j]!='0')
            {
                is=false; //�����һ����0�ַ�������ѭ�� 
                break;
            }
        }
        if(is) 
        {
        	t++; //������ 
            if(t>maxn) 
            {
                maxn=t;
                maxi=i;
            }
        }
        else t=0;           
    }
    if(maxn==1) maxi=-1; 
    maxi=maxi-maxn+1;
} 
