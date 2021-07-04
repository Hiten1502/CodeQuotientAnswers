int* cutSticks(int lengths_size, int *lengths, int *result_size) {
   int i;
  	int *arr;
  	int n=lengths_size;
  	arr=(int*)malloc(sizeof(int)*lengths_size);
    int min,count=0,count1=0,k=0;
    while(count1!=n)
    {
        count=0;
        count1=0;
    for(i=0;i<n;i++)
    {
        if(lengths[i]!=0)
        {
            min=lengths[i];
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(lengths[i]<min&&lengths[i]!=0)
        {
            min=lengths[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(lengths[i]!=0&&lengths[i]-min>=0)
        {
        lengths[i]=lengths[i]-min;
        count++;
        }
    } 
    for(i=0;i<n;i++)
    {
        if(lengths[i]==0)
            count1=count1+1;
    }
    arr[k]=count;
      k++;
    }
  *result_size=k;
  return arr;
}
