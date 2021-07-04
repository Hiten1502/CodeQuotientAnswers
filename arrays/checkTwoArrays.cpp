# include<bits/stdc++.h>
using namespace std;


int arraysEqualorNot(vector<int> A, vector<int> B) {
  sort(A.begin(),A.end());
  sort(B.begin(),B.end());
  for (int i = 0; i < A.size(); i++)
   {
       if(A[i] != B[i]){
           return 0;
       }
   }
   return 1;
  
}

int main(){
    
    return 0;
}