#include<iostream>

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt1 = 0,cnt2 = 0;
        for(int i = 0; i < n; i++)              // �ȱ���һ�� ˳��ɵ��������״̬
            if(s[i] == 'M')
                cnt1++;                         //cnt1����M  cnt2����T
            else
                cnt2++;
        if(cnt1*2 != cnt2)
            cout << "NO" << endl;
        else
        {
            int cnt = 0;
            int flag = 1;                       //���
            for(int i = 0; i < n ; i++)
            {
                if(s[i] == 'M')
                    cnt--;                      //��¼��ǰMǰ���T����
                else
                    cnt++;
                if(cnt < 0|| (cnt2 / 2) < cnt)  //������������򲻺��� 
                {
                    cout << "NO" << endl;
                    flag = 0;                   //���һ��
                    break;
                }
            }
            if(flag)
                cout << "YES" << endl;
        }
    }
}
