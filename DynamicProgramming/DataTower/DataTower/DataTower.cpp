//使用动态规划求解数塔问题
//a[0][0] = a[0][0] + max(a[1][0],a[1][1])

#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[2000][2000];//全局变量，存储数塔和最优解

int main()
{
	//输入数塔高度
	int n;
	cin>>n;
	//输入数塔元素
	for(int i = 0;i < n;i++)
	{
		for (int j = 0; j <= i;j++)
		{
			cin>>a[i][j];
		}
	}

	//下面是求最优解的过程
	for(int i = n - 1;i > 0;i--)
	{
		for(int j = 0;j < i;j++)
		{
			a[i-1][j] = a[i-1][j] + max(a[i][j],a[i][j+1]);//这是状态转移函数
		}
		
	}
	cout<<a[0][0]<<endl;
	return 0;
}
