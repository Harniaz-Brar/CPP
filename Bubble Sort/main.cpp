void bubbleSort(vector<int>& arr, int n)
{
    for(int i = 0; i<n; i++) {
    // for round 1 to n-1
        for(int j=0; j<n-i; j++) {
            // process elements till n-i index
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}