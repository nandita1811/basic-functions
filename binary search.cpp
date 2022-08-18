//it is for a sorted array
int binarysearch(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
        {
            start = mid+1;
        }
        else 
        {
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
