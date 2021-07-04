# include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    int neg(0),pos(0),even(0),odd(0);
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]>=0){
            pos++;
        }
        if(arr[i]<0){
            neg++;
        }
        if(arr[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<pos<<"\n";
    cout<<neg<<"\n";
    cout<<even<<"\n";
    cout<<odd<<"\n";
    return 0;
}