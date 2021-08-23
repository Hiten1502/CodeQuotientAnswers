#include<iostream>
using namespace std;
void primeFactors(int n){
  int temp=n;
  for(int i=2;i<=n;i++)
  {
    while(temp%i==0)
    {
      cout<<i<<endl;
      temp=temp/i;
      if(temp==1){
          break;
      }
    }
  }
}
