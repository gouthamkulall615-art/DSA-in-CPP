#include <bits/stdc++.h>
using namespace std;

int main() {
   vector<string> strs={"flower","flow","flight"};

   if(strs.empty())
   return 0;

   string prefix=strs[0];
   for(int i=0;i<strs.size();i++){
    while(strs[i].find(prefix)!=0){
        prefix=prefix.substr(0,prefix.size()-1);
        if(prefix.empty())
        return 0;

    }

   }
   cout<<" the longest prefix is "<<prefix;

   

    return 0;
}