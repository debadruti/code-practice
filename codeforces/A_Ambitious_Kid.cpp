#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
       
    }
    int m = abs(arr[0]);
    for(int i=1;i<n;i++){
         m=min(m,abs(arr[i]));
    }
    cout<<m<<endl;
   

}