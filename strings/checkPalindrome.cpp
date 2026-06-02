#include <bits/stdc++.h>
using namespace std;

string reverseString(string str,int n){
       for(int i=0;i<n/2;i++){
        swap(str[i],str[n-1-i]);

      }
      return str;
}

bool checkPalindrome(string str, int len)
{

   string result=reverseString(str,len);

   if(result==str){
    return 1;

   }
   else {
    return 0;
   }


    
}

int main()
{

    string str = "madam";
    int l = str.length();
    bool result = checkPalindrome(str, l);

    cout<<"the string is "<<result;

    return 0;
}