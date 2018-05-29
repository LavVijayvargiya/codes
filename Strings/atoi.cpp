int Solution::atoi(const string A) {
    if(A.size()==0){
        return 0;
    }
    string s = "";
    for(int i = 0 ; i < A.size() ; ++i){
        if(i==0 && (A[i] == '+' || A[i] == '-')){
            s += A[i];
        }
        else if(A[i]>57 || A[i]<48 || A[i] == ' ')
            break;
        else{
            s += A[i];
        }
    }
    //cout<<s<<endl;
    int ret = 0 ;
    if(s[0]=='-' || s[0]=='+'){
        int sign = 1;
        if(s[0]=='-')
            sign = -1;
        
        for(int i = 1; i < s.size() ; ++i){
            
            if (ret >  INT_MAX / 10 || (ret == INT_MAX / 10 && s[i] - '0' > 7)) {
                    if (sign == 1) return INT_MAX;
                    else return INT_MIN;
            }
            ret = 10*ret + (s[i]-'0');
            //cout<<ret<<endl;
        }
        return ret*sign;
    }
    
    else{
        for(int i = 0 ; i < s.size() ; ++i){
            if (ret >  INT_MAX / 10 || (ret == INT_MAX / 10 && s[i] - '0' > 7)) {
                     return INT_MAX;
                    
            }
            
            ret = 10*ret + (s[i]-'0');
        }
        return ret;
    }
}
