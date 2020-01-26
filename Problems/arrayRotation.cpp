/*
Q. Given Array of N integers and K, rotate elements of array K times in left to right direction.
*/

#include<bits/stdc++.h>

using namespace std;
int a[10001];
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n;
        for(int i = 0; i <n; i++) {
            cin>>a[i];
            cout<<a[i]<<" ";
        }
        cout<<'\n';
        cin>>k;
        k = k%n;
        k = n - k;
        for(int i = k; i < n; i++)
            cout<<a[i]<<" ";
        for(int i = 0; i < k; i++)
            cout<<a[i]<<" ";
            
        cout<<"\n\n";
    }
}