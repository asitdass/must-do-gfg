class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long ans= INT_MIN;
        long long currSum=0;
        for(int i=0;i<n;i++){
            currSum=currSum+arr[i];
            ans=max(ans,currSum);
            if(currSum<0){
            currSum=0;
        }
        }
        
        
        return ans;// Your code here
        
    }
};
