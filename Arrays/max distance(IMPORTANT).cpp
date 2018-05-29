int Solution::maximumGap(const vector<int> &A) {
    if(A.size()==1)
        return 0;
    int n = A.size() ;
    int MIN[n];
    int MAX[n];
    int ans = -1;
    MIN[0] = A[0];
    MAX[n-1] = A[n-1];
    for(int i = 1 ; i < n ; ++i){
        MIN[i] = min(MIN[i-1],A[i]);
    }
    for(int i = n-2 ; i>=0 ; --i){
        MAX[i] = max(MAX[i+1],A[i]);
    }
    int i = 0 , j = 0;
    while(i<n && j<n){
        if(MIN[i]<=MAX[j]){
            ans = max(ans , j-i);
            j++; //this is because it is possible to get a next index such that max[j] is stil 
                 //more than min[i]. so why settle right now.
        }
        else{
            i++;
        }
    }
    return ans;
}
