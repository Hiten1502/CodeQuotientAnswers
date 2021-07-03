# include<bits/stdc++.h>
using  namespace std;
bool isLeap(int n){
    if(n % 400 == 0){
        return true;
    }
    if(n %100 == 0){
        return false;
    }
    if(n %4 == 0){
        return true;
    }
    return false;
}
int main(){
    int n;cin>>n;
    if(isLeap(n)){
        cout<<"Leap Year"<<"\n";
    }
    else{
        cout<<"Not a Leap Year"<<"\n";
    }
    return 0;
}