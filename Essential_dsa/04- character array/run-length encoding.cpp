#include<bits/stdc++.h>
using namespace std;

string compressstring(string str){
    int n=str.length();
    string output;
    for(int i=0;i<n;i++){
        int count=1;
        while(i<n-1 and str[i+1]==str[i]){
            count++;
        
        i++;
    }
    output+=str[i];
    output+=to_string(count);
}
if(output.length()>str.length()){
    return str;
}

return output;

}

int main()
{
  
  string s1="aaabbccddee";
  cout<<compressstring(s1)<<endl;

  string s2="dharpure";
  cout<<compressstring(s2)<<endl;

  return 0;
}
