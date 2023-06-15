vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        bool isfound=false;
        vector<int>ans;
        int currsum=arr[0],left=0,right=0;
        
        if(s==0)
        {
            ans.push_back(-1);
            return ans;
        }
        while(right<n)
        {
            if(currsum<s)
            {
                right++;
                if(right<n)
                currsum+=arr[right];
            }
            if(currsum>s)
            {
                currsum-=arr[left];
                left++;
            }
            if(currsum==s)
            {
                isfound=true;
                break;
            }
        }
        if(isfound)
        {
            ans.push_back(left+1);
            ans.push_back(right+1);
            return ans;
        }
        else
        {
            ans.push_back(-1);
            return ans;
        }
    }
