void maxHeapify(int arr[] , int i , int n){
    int l = (2*i) + 1;
    int r = (2*i) + 2;
    int largest = i;
    if(l<n && arr[l] > arr[i]){
        largest = l;
    }
    if(r<n && arr[r] > arr[largest]){
        largest = r;
    }
    if(largest != i){
        swap(arr[i] , arr[largest]);
        maxHeapify(arr , largest , n);
    }
}
void modifyMintoMax(int a[], int n){
  	for (int i = (n-2)/2; i >= 0; --i)
    {
        maxHeapify(a , i , n);
    }
}
