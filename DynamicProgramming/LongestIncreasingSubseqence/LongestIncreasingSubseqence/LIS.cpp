//��̬�滮ʵ����ǽ�������

#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int a[2000], d[2000];

int main()
{
	int n;
	int result = 0;
	cin>>n;
	for(int i = 0; i < n;i++)
		cin>>a[i];

	//j�Ǵ�0��ʼ��,��Ϊj>k��k�Ǵ�0��ʼ�ģ�����ֻ��һ��Ԫ��ʱֱ�ӷ���d[0]=1��0��Ԫ��ʱ��ֱ�ӷ���reult = 0 
	for(int j = 0; j < n;j++)
	{
		d[0] = 1;
		//d[j] = 1;
		for(int k = 0;k < j; k++)
		{
			if(a[k] <= a[j])//�ǽ���������С�ڵ��ڣ�����С�ڣ����������������
				d[j] = max((d[k] + 1),1);
		}
		
		result = max(result, d[j]);
	}
	cout<<result<<endl;
	return 0;
}