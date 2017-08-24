 #include <cstdio>    
 #include <iostream>    
 #include <algorithm>    
 #include <cstring>   
 #include <string> 
 using namespace std;    
      
 int main()    
 {    
     string str1,str2;     
     int dp[200][200];    
     while(cin>>str1>>str2)    
     {    
         memset(dp,0,sizeof(dp));    
      
         int la = str1.length();    
         int lb = str2.length();    
      
         for(int i = 1; i <= la; i++) 
		 {
			  for(int j = 1; j <= lb; j++)    
			{    
				if(str1[i-1] == str2[j-1])    //字符串的第i个和第j个元素相等
				 {    
					 dp[i][j] = dp[i-1][j-1] + 1;    
				 }    
				 else 
					 dp[i][j] = max(dp[i-1][j],dp[i][j-1]);    
			 }    
		 }   
         cout<<dp[la][lb]<<endl; 
		 //cout<<la<<endl;
		 //cout<<lb<<endl;
     } 
     return 0; 
 }