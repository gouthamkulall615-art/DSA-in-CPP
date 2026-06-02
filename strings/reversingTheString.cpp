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

/*
Why n/2 in string reversal?

Each swap fixes 2 characters at the same time:

One from the left side
One from the right side

So after reversing half of the string, the other half is already in the correct position.

Therefore, only n/2 swaps are needed.
*/