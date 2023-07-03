void sort012(int a[], int n)
    {
        int zero=0;
        int ones=0;
        int twos=0;
        for(int i=0;i<n;i++ ){
            if(a[i]==0){
                zero++;
            }
            if(a[i]==1){
                ones++;
            }
            if(a[i]==2){
                twos++;
            }
        }
        for(int i=0;i<zero;i++){
            a[i]=0;
        }
         for(int i=zero;i<zero+ones;i++){
            a[i]=1;
        }
         for(int i=zero+ones;i<zero+ones+twos;i++){
            a[i]=2;
        }
        // code here 
    }
