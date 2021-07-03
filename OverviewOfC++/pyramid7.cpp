# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int p = i;
        for (int j = 1; j <= i; j++)
        {
            cout<<p<<"";
            p--;
        }
        int m = 2;
        for (int x = 1; x < i; x++)
        {
            cout<<m<<"";
            m++;
        }
        cout<<"\n";
    }
    return 0;
}