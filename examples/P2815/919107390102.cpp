#include <bits/stdc++.h>   //��˵���������ͷ�ļ�
using namespace std;



char s[39];
int MAXI=-1,MAX=1;




void find ()          //Ѱ���"0000"�ֶκ��� 
{
    int i,j,t;
    bool f;
    for (i=0,t=0;i<8;i++)
    {
        f=true;
        for (j=0;j<4;j++)
        {
            if (s[i*5+j]!='0')
            {
                f=false;    //�����һ����0�ַ�������ѭ�� 
                break;
            }
        }
        if (f) 
        {
        	t++;          //������ 
            if (t>MAX) 
            {
                MAX=t;
                maxi=i;
            }
        }
        else t=0;           
    }
    if (MAX==1) MAXI=-1;  
    MAXI=MAXI-MAX+1;
} 
int main ()
{
    scanf("%s",s);
    find();
    int i,j;
    for (i=0;i<8;i++)
    {
        if (MAXI==i)     
        {
            cout<<":";
            if (i==0) cout<<":";
            i=i+MAX;
            if (i>7) break;
        }
        j=0;
        while (a[i*5+j]=='0'&&j<3) 
		        j++; 
        for (;j<4;j++)
        { 
            cout<<a[i*5+j];
        }
        if (j==4&&i!=7) 
		    cout<<":";  
    }
    return 0;
}
