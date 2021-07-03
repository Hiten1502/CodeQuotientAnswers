# include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2000, 500, 100, 50, 20, 10, 5, 2, 1};
    int n;cin>>n;
    int x  = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < x; i++)
    {
        int z = n/arr[i];
        n  = n - z*arr[i];
        arr[i] = z;
    }
    for (int i = 0; i < x; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}