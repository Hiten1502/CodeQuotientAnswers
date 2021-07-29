void printKLargest(int array[],int n,int k){
    sort(array , array + n);
    for (int i = n-1; i > n-1-k; i--)
    {
      cout<<array[i];
      if(i > (n-k )){
        cout<<" "; 
      }
    }
}
