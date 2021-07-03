# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     for (int i = 0; i < 1; i++)
    {
        for (int j = 1; j < n-i+1; j++)
        {
            cout<<j;
        }
        int p = n-i-1;
        for (int j = 1; j < n; j++)
        {
            cout<<p;
            p--;
        }
        cout<<"\n";
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<j+1;
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<"*";
        }
        int p = n - i-1;
        for (int j = 0; j < (n-i-1); j++)
        {
            cout<<p;
            p--;
        }
        cout<<"\n";
    }
    return 0;
}