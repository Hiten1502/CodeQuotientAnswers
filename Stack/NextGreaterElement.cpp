void printNextGreaterElement(int arr[],int n){
  for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
            else if(j == n-1){
                cout<<"-1"<<" ";
            }
        }
    }
}