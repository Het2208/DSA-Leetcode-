int* findDisappearedNumbers(int* arr, int n, int* returnSize)
{
    int* result = (int*)malloc(n * sizeof(int));
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        int idx = abs(arr[i]) - 1;
        if (arr[idx] > 0)
            arr[idx] = -arr[idx];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            result[k++] = i + 1;
    }

    *returnSize = k;
    return result;
}
