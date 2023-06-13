
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    unordered_map<int,int>temp;
	    for(int i=0;i<n;i++){
	        temp[arr[i]]++;
	    }
	    int count =0;
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            int sum = arr[i]+arr[j];
	            if(temp[sum]){
	                count ++;
	            }
	        }
	        
	        
	    }
	    
	    return count;// Your code goes here
	}
};
