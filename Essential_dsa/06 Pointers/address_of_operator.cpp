#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x=10;
   float y=5.5;
   cout<<&x<<endl;


   int *sd=&x;

   

   cout<<sd<<endl;

   cout<<*sd<<endl;



  //pointer to pointer
   int **xptr = &sd;
   cout<<xptr<<endl;
   cout<<**xptr<<endl;
}
