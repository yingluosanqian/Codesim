#include <iostream>
using namespace std;
//�ṹ��test����Ų���������n�������������num����������
struct test
{
	int n = 0;
	int num[2000] = { 0 };
};
//����phOrder����һ��������������ʹ���Ͼ������������ֻ��Ҫ������ȫ����ǰ�������ż��ȫ���ں���������ɡ�
void phOrder(test sample)
{
	for (int i = 0; i < sample.n; i++)
		if (sample.num[i] % 2 != 0)
			cout << sample.num[i] << '\t';
	for (int i = 0; i < sample.n; i++)
		if (sample.num[i] % 2 == 0)
			cout << sample.num[i] << '\t';
	cout << endl;
}
int main()
{
	//���ղ���������t������t����������
	int t = 0;
	cin >> t;
	test* sample = new test[t];
	//¼��t����������
	for (int i = 0; i < t; i++)
	{
		cin >> sample[i].n;
		for (int j = 0; j < sample[i].n; j++)
		{
			cin >> sample[i].num[j];
		}
	}
	for (int i = 0; i < t; i++)
	{
		phOrder(sample[i]);
	}
	delete[]sample;
	return 0;
}