#include<bits/stdc++.h>
using namespace std;

int getreverse(int num,int rev){
    if(num==0)
        return rev;
    int rem =num%10;
    rev=rev*10+rem;
    return getreverse(num/10,rev);
}
int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int num,reverse=0;
    cin>>num;

    if(getreverse(num,reverse)==num)
        cout<<num<<"  it is a palindrome number";
    else
        cout<<num<< " it is not palindrome";
   
    return 0;
}
