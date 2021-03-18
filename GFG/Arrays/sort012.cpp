class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int zeros=0, ones=0, twos=0;
        for(int i=0; i<n; i++){
            if(a[i]==0) zeros++;
            else if(a[i]==1) ones++;
            else twos++;
        }
        int i=0; 
        while(zeros-->0){
            a[i++] = 0;
        }
        while(ones-->0){
            a[i++] = 1;    
        }
        while(twos-->=0){
            a[i++] = 2;
        }
    }
    
};
