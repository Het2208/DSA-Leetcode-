int majorityElement(int arr[], int n){
    int majority = arr[0];
    int votes = 1;

    for(int i = 1; i < n; i++){
        if(votes == 0){
            majority = arr[i];
            votes = 1;
        }
        else if(arr[i] == majority){
            votes++;
        }
        else{
            votes--;
        }
    }
    return majority;
}
