int ceilSearch(int arr[], int low, int high, int x)
{

    if (sizeof(arr) / sizeof(arr[0]) == 0) {
        return -1;
    }
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}