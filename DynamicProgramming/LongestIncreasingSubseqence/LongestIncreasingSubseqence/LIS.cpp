//动态规划实现最长非降子序列

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

	//j是从0开始的,因为j>k，k是从0开始的，所以只有一个元素时直接返回d[0]=1；0个元素时，直接返回reult = 0 
	for(int j = 0; j < n;j++)
	{
		d[0] = 1;
		//d[j] = 1;
		for(int k = 0;k < j; k++)
		{
			if(a[k] <= a[j])//非降，这里是小于等于，若是小于，则是最长递增子序列
				d[j] = max((d[k] + 1),1);
		}
		
		result = max(result, d[j]);
	}
	cout<<result<<endl;
	return 0;
}