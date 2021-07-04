# include<bits/stdc++.h>
using namespace std;

int rotationCount(int a[], int size){
   int mn = *min_element(a,a+size);
    for (int i = 0; i < size; i++)
    {
        if(a[i] == mn){
            return i;
        }
    }
    return 0;
}

int main(){
   
    return 0;
}