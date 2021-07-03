class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        // Your code here
        if(high==low) return arr[low];
        if(high<low) return arr[0];
        if(high>low){
            int middle = low+(high-low)/2;
            
            if(arr[middle]<arr[middle-1] && arr[middle+1]>arr[middle]) return arr[middle];
            
            if(arr[middle]>arr[middle-1])
            {
                return min(minNumber(arr, middle+1, high), minNumber(arr, low, middle-1));
            }
            else{
                return arr[middle];
            }
        }
    }
};
