#include<bits/stdc++.h>
using namespace std;
bool compare(int a ,int b){
    return a>b;
}
void bubble_sort(int a[], int n){
for(int i=1;i<n-1;i++){
    for(int j=0;j<=n-i-1;j++){
        if(compare(a[j],a[j+1])){
            swap(a[j],a[j+1]);
        }
    }
}
}

int main()
{
    int arr[]={-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n=sizeof(arr[0]/sizeof(int));
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
return 0;
}
