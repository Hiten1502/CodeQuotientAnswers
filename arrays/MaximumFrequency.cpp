# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int mx = *max_element(arr,arr+n);
        int x = mx+1;
        int b[x] = {0};
        for (int i = 0; i < n; i++)
        {
            b[arr[i]]++;
        }
        int ans = *max_element(b,b+x);
        for (int i = 0; i < x; i++)
        {
            if(b[i] == ans){
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}