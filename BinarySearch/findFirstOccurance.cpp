# include<bits/stdc++.h>
using namespace std;
int find(int arr[],int n,int k){
    for (int i = 0; i < n; i++)
    {
         if(arr[i] == k){
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<find(arr,n,k)<<"\n";
    }
    return 0;
}