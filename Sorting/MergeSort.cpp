# include<bits/stdc++.h>
using namespace std;

void merge(int array[], int l, int m, int r) {
  int i,j,k,B[r+1];
    i = l;
    j = m + 1;
    k = l;
    while (i<=m && j<=r)
    {
        if(array[i] < array[j]){
            B[k] = array[i];
            i++;
            k++;
        }
        else{
            B[k] = array[j];
            j++;
            k++;
        }
    }
    while (i <= m)
    {
        B[k] = array[i];
        k++;
        i++;
    }
    while (j <= r)
    {
        B[k] = array[j];
        k++;
        j++;
    }
    for (int i = l; i <= r ; i++)
    {
        array[i] = B[i];
    }
}

void mergeSort(int array[], int l, int r) {
   int mid;
    if(l<r){
        mid = (l+r)/2;
        mergeSort(array,l,mid);
        mergeSort(array,mid+1,r);
        merge(array,l,mid,r);
    }
}

int main(){
   
    return 0;
}