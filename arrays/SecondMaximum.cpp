# include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[5];
   for (int i = 0; i < 5; i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+5);
   for (int i = 0; i < 5; i++)
   {
       if(arr[i] == arr[i+1]){
           arr[i] = 0;
       }
   }
   sort(arr,arr+5);
   cout<<arr[3]<<"\n";
    return 0;
}