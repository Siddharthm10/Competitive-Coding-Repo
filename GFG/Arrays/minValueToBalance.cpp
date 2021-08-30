class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       int leftHalf = 0;
       int rightHalf = 0;
       int mid = 0;
       if(n%2==0) mid = n/2;
       else mid = n/2+1;
       
       for(int i=0; i<mid; i++){
            leftHalf+=a[i];
       }
       for(int j=mid; j<n; j++){
           rightHalf+=a[j];
       }
       return abs(leftHalf-rightHalf);
    }
};

