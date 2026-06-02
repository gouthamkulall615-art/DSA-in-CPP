#include <bits/stdc++.h>
using namespace std;

int main() {

      string str="fight";
      int n=str.length();

      for(int i=0;i<n/2;i++){
        swap(str[i],str[n-1-i]);

      }
      cout<<"the reversed string is "<<str;
      
   
    
    return 0;
}