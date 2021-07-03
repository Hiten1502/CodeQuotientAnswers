# include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    cout<<(*max_element(arr,arr+3))<<"\n";
    return 0;
}