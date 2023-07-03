 int equilibriumPoint(long long a[], int n) {
        int start = 0;
        int end = n-1;
        long long startSum= 0;
        long long endSum= 0;
        int ans= -1;
        if(n==1) return 1;
        else{
            while(start<=end){
                if(startSum==0 && endSum==0){
                startSum+=a[start++];
                endSum+=a[end--];
                }
                else if(startSum>endSum){
                    endSum+=a[end--];
                }
                else if(endSum>startSum){
                    startSum+=a[start++];
                }
                else if(endSum==startSum){
                    if(start==end){
                        ans = start+1;
                        return ans;
                    }
                    else{
                        startSum+=a[start++];
                        endSum+=a[end--];
                    }
                }
            }
        }
        return ans;
    
        // Your code here
    }
