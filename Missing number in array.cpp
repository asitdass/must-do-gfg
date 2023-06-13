class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int sum1= n*(n+1)/2;
        int sum2= 0;
        for(int i=0;i<n-1;i++){
            sum2 += array[i];
        }
        return sum1-sum2;
        // Your code goes here
    }
};
