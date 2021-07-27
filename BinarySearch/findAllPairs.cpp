
int getPairsCount(int arr[], int n, int sum){
   unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    int c = 0;
    for (int i = 0; i < n; i++) {
        c += m[sum - arr[i]];
        if (sum - arr[i] == arr[i])
            c--;
    }
    return c / 2;
}
