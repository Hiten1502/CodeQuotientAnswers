# include<bits/stdc++.h>
using namespace std;

int numberOfSwaps(int *A,int n){
    int isSorted = 1;
    int swap(0);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
                swap++;
            }
        }
        if(isSorted){
            return swap;
        }
    }
    return swap;
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
        cout<<numberOfSwaps(arr,n)<<"\n";
    }
    return 0;
}
