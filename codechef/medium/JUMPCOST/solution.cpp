#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
in t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i =1;i<=n;i++){
        cin>>arr[i];
    } for(int i =1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[j]>0){
                sum = sum+ arr[j]-j+i;
                }
        }
    } cout<<sum<<endl;
} return 0;
}
