#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isprime=true;

    if(n<2){
        isprime=false;
    }else{
        for(i=2;i<n;i++){
            if(n%i==0){
                isprime=false;
                break;
            }
        }
    }

    string result = isprime ? "is prime" : "not prime";
    cout<<"The number is"<<n<<" is : "<<result;

    return 0;

}
