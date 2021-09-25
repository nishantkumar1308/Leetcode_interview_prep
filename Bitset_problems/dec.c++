//https://leetcode.com/problems/convert-a-number-to-hexadecimal/
#include<bits/stdc++.h>
using namespace std;
  string decimal_to_hex(int num)
  {
  	 unsigned int num1=num;
        string str="";
        if(num1==0)
        {
            return "0" ;
        }
        
        else if( num1<0)
        {
             num1=pow(2,32) - (-1*num1);
        }
        while(num1>15)
        {
        unsigned int x=num1%16;
            if(x<=9)
            {
                str+=to_string(x);
            }
            else
            {
                str+=(char)(x+87);
            }
            num1=num1/16;
        }
         if(num1<=9)
            {
                str+=to_string(num1);
            }
            else
            {
                str+=(char)(num1+87);
            }
         reverse(str.begin(),str.end());
      
        return str;
        

  }
int main()
{
	int num;
	cin>>num;
	string str=decimal_to_hex(num);
	cout<<str;
}