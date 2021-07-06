# include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int swaps(int arr[],int n){
    int min_index;
    int cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        min_index = i;
        int c = 0;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[min_index]){
                min_index = j;
                c= 1;
            }
        }
        if(c == 1){
            cnt++;
            c = 0;
        }
        swap(&arr[min_index],&arr[i]);
    }
    return cnt;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<swaps(arr,n)<<"\n";
    }
    return 0;
}