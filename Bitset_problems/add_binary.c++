//:Problem Link----->https://leetcode.com/problems/add-binary/


#include<bits/stdc++.h>
using namespace std;
string add_binary(string str1,string str2)
{
	int n=str1.length()-1;
	int m=str2.length()-1;
     string ans="";
     int carry=0;
     
	while(n>=0||m>=0||carry)
	{
		int val1= (n>=0 and str1[n]=='1')?1:0;
		int val2=(m>=0 and str2[m]=='1')?1:0;

		 ans=((((val1+val2+carry)%2)==0)?'0':'1')+ans;
		  carry=(val1+val2+carry)/2;
		 n--;
		 m--;
	}
	return ans;

}
int main()
{
	string str1;
	string str2;
	cin>>str1>>str2;
	string ans= add_binary(str1,str2);
	cout<<ans<<endl;
}