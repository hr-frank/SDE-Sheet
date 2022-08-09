

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
        long long res = INT_MIN;
        long long sum =0;
        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
            res = max(res, sum);
            
            if(sum <0) sum =0;
        }
     
        
      return res;  
    }
};


