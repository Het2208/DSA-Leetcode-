int pivotIndex(int arr[], int n)
{
    int leftsum = 0;
    int rightsum = 0;
    int value = 0;
    for (int i = 0; i < n; i++){
        rightsum += arr[i];
    }
    for (int i = 0; i < n; i++) {
        value = arr[i];
        rightsum -= value;
        if (leftsum == rightsum) return i;
        leftsum += value;
    }
    return -1;
}
