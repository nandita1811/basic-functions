void bubbleSort(vector<int>& arr, int n)
{   
    for(int i =1;i<n;i++)
    {
        bool swapped = false;// to check if the array is already sorted. for best case time complexity
        for(int j =0;j<n-i;j++)
        {//process element till n-i th index
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            swapped = true;
        }
        }
        if(swapped==false)
            break;
    }
    
}
