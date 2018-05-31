vector<vector<int> > Solution::prettyPrint(int A) {
    vector< vector<int> > ret(2*A-1,vector<int>(2*A-1));
    int k = 0 , l = 2*A-2;
    int val = A;
    for(int i = 2*A-2 ; i >= 0 ; --i){
        //fill first row
        for(int j = l ; j >= 2*A - 2 -l ; --j){
            ret[k][j] = val;
        }
        //then fill last column
        for(int row = l ; row >= 2*A - 2 -l ; --row){
            ret[row][l] = val;
        }
        //then fill last row
        for(int x = k ; x <= 2*A -2 - k ; ++x){
            ret[2*A-2-k][x] = val;
        }
        //then fill first column.
        for(int x = l ; x >= 2*A-2-l ; --x)
            ret[x][k] = val;
        --val;
        ++k;
        --l;
    }

    return ret;
}
