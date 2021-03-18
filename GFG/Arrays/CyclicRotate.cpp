
void rotate(int arr[], int n)
{
    int temp;
    int i = n-1;
    for(i; i>0; i--){
        if(i-1!=0){
            temp = arr[i-1];
            arr[i-1] = arr[i];
            arr[i] = temp;
        } else {
            temp = arr[1];
            arr[1] = arr[0];
            arr[0] = temp;
        }
    }
}