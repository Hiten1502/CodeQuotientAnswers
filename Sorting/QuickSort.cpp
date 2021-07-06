# include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)    
{
  int t = *a;
  *a = *b;
  *b = t;
}
int partition (int array[], int low, int high) {
  int pivot = array[high];
    int i = low - 1;
    int j;
    for ( j = low; j <= high-1; j++)
    {
            if(array[j] <= pivot){
                i++;
                swap(&array[i],&array[j]);
            }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high)
  {
    int pivot_index;
    pivot_index = partition(array, low, high);
    quickSort(array, low, pivot_index - 1);
    quickSort(array, pivot_index + 1, high);
  }
}  

int main(){

    return 0;
}