//ipv6��ַѹ��    ģ��
#include <bits/stdc++.h>
using namespace std;

char str[29];//һ��39���ַ����ַ���������һ����ȫչ����IPv6��ַ
char ans[29];//���ַ���
int main() {
	cin >> str;
	/*
	��������Ŀ�괮���м�⣬
	ÿ������ð�ţ�ʱflag=true��Ȼ��������Ƿ���0����Ϊ0����ɾ��
	����������ʱ����flag=false,������0��ɾ����ֱ���ٴ�����ð��
	*/
	//ϣ���Լ��ܸо����Լ�ʱ���ڽ���
	bool flag = true;
	int j = 0;
	for (int i = 0; i < 29; i++) {
		if (flag && str[i] == '0') {
			continue;
		} else
			ans[j++] = str[i];
		if (str[i] != '0' && str[i] != ':')
			flag = false;
		if (str[i] = ':')
			flag = true;

	}

	//�������0ɾ����Ϻ��ٱ���ans���飬�������ð�Ų����
	int count = 0;
	for (int j = 0; j < strlen(str); j++) {
		if (str[j] != ':')  {
			cout << str[j];
			count = 0;  //��ð�ż�������
		} else {
			count++;
			if (count <= 2)
				cout << str[j];
			else
				continue;
		}
	}
	return 0;
}