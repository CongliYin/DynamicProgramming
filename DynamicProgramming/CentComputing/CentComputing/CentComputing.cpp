#include <cstdio>
#include <iostream>
#include<algorithm>
using namespace std;
int dp[1000];

int main() 
{  
    int a[3] = {1,3,5};
	//int sum = 11,cent = 0,dp[12];  
    //dp[0] = 0;  
    int sum;
	cin>>sum;

	for(int i = 0; i <= sum; i++) 
		dp[i] = i;//我们假设存在1元的硬币那么i元最多只需要i枚1元硬币，当然最好设置dp[i]等于无穷大  
   
    for(int i = 1; i <= sum; i++){  
        for(int j = 0; j < 3; j++)
		{
            if(i >= a[j] )
			//&& dp[i - a[j]] + 1 < dp[i])
			{  
                //dp[i] = dp[i- a[j] ] + 1;  
				dp[i] = min(dp[i- a[j] ] + 1,dp[i]);
            }  
        }  
    }  
    cout<<dp[sum]<<endl;  
    return 0;  
} 