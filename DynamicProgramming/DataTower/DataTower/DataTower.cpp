//ʹ�ö�̬�滮�����������
//a[0][0] = a[0][0] + max(a[1][0],a[1][1])

#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[2000][2000];//ȫ�ֱ������洢���������Ž�

int main()
{
	//���������߶�
	int n;
	cin>>n;
	//��������Ԫ��
	for(int i = 0;i < n;i++)
	{
		for (int j = 0; j <= i;j++)
		{
			cin>>a[i][j];
		}
	}

	//�����������Ž�Ĺ���
	for(int i = n - 1;i > 0;i--)
	{
		for(int j = 0;j < i;j++)
		{
			a[i-1][j] = a[i-1][j] + max(a[i][j],a[i][j+1]);//����״̬ת�ƺ���
		}
		
	}
	cout<<a[0][0]<<endl;
	return 0;
}
