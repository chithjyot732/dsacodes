int missingNumber(vector<int>& array, int n) {
        int sum=0;
        int expected=n*(n+1)/2;
        for(int i=0;i<array.size();i++)
        {
            sum+=array[i];
        }
        int ans=expected-sum;
        return ans;
    }
