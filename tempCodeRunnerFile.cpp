    int global_sum = INT32_MIN;
    
    for(int k = 1 ; k < size ; k++) {
        int window_sum = 0;
        for(int i = 0 ; i < k ; i++) {
            window_sum += arr[i];
        } 
        int max_sum = window_sum;
        for(int i = k ; i<size; i++) {
            window_sum += arr[i]-arr[i-k];
            max_sum = max(max_sum,window_sum);
        }
        global_sum = max(global_sum,max_sum);
    } 
    return global_sum;