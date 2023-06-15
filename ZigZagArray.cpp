void zigZag(int arr[], int n) 
    {
        if(arr[0]>arr[1])
            {
                swap(arr[0],arr[1]);
            }
        for(int i=1;i<=n-1;i=i+2)
        {
            if(arr[i]<arr[i+1] && i<n-1)
            {
                swap(arr[i],arr[i+1]);
            }
            if(arr[i]<arr[i-1])
            {
                swap(arr[i],arr[i-1]);
            }
        }
    }
