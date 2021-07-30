int isMaxHeap(int array[], int n){
  for (int i = 0; i <= (n-2)/2; i++)
  {
      if(array[2*i+1] >  array[i]){
          return false;
      }
      if(2*i+2 < n && array[2*i+2] > array[i]){
        return false;
      }
  }
  return true;
}
