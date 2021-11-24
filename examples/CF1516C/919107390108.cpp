#include <iostream>
#include <algorithm>
using namespace std;
int n, ans;
int a[1001];
int f[1001][1001];

int main() {
	cin >> n;   //����a�ĳ���
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	//�����������Լ���ĳ���
	int gc = a[1];
	for (int i = 1; i <= n; i++) {
		gc = __gcd(gc, a[i]);  //��a�����Լ��
	}

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		a[i] /= gc;
		sum += a[i];
	}

	//��sum��ֵΪ��������˵��ԭ�����Ǻõ�
	if (sum % 2 )  {
		cout << "0" << endl;
		return 0;
	}


	//��sum��ֵΪż���������ñ������ж�ԭ�����Ƿ�ɷ�
	//��ʼ��״̬����f
	for (int j = 0; j <= sum / 2; j++)
		f[0][j] = 0;
	for (int i = 0; i <= n; i++)
		f[i][0] = 0;
	//״̬ת��
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum / 2; j++) {
			if (a[i] > j)
				f[i][j] = f[i - 1][j];
			else {
				f[i][j] = max(f[i - 1][j], f[i - 1][j - a[i]] + a[i]);
			}
		}
	}

//���f[n][sum/2]�պÿ���װ���ﵽsum/2����˵��ԭ���в���
//��ʱֻҪɾȥԭ�����е�һ����������
	if (f[n][sum / 2] == sum / 2) {
		for (int i = 1; i <= n; i++) {
			if (a[i] % 2 == 1) {
				cout << "1" << endl << i << endl;
				break;
			}
		}
	}
	//����ԭ�����Ǻõ�
	else {
		cout << "0" << endl;
	}
	return 0;
}



