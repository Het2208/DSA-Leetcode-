int* sortArrayByParity(int* arr, int n, int* returnSize) {
    int left = 0, right = n - 1;
    *returnSize = n;

    while (left < right) {
        if (arr[left] % 2 == 0) {
            left++;
        }
        else if (arr[right] % 2 != 0) {
            right--;
        }
        else {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
    return arr;
}
