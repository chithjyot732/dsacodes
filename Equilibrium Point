int equilibriumPoint(long long a[], int n) 
    {
        int lsum=0,rsum=0;
        if(n==1)
        {
            return 1;
        }
        for(int i=1;i<n;i++)
        {
            rsum+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(lsum==rsum)
            {
                return i+1;
            }
            lsum+=a[i];
            rsum-=a[i+1];
        }
        return -1;
    }
