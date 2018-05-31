int util(const vector<int> &arr , int low , int high){
    if(high<low)
        return 0;
    if(high==low)
        return low;
    int mid = (low+high)/2;
    if( mid > low && arr[mid] < arr[mid-1])
        return mid;
    if( mid < high && arr[mid+1] < arr[mid])
        return mid+1;
    else if( arr[high] > arr[mid])
        return util(arr,low,mid-1);
    return util(arr,mid+1,high);
}

int binary(const vector<int> &A , int low , int high , int B){
    if(low<=high){
        int mid = (low+high)/2;
        if(A[mid]==B)
            return mid;
        else if(A[mid] > B){
            return binary(A,low , mid-1 , B); 
        }
        else{
            return binary(A,mid+1 , high , B);
        }
    }
    return -1;
}

int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int min_index = util(A,0,A.size()-1);
    //cout<<min_index<<endl;
    if(B==A[min_index])
        return min_index;
    
    else if(B > A[min_index] && B <= A[A.size()-1]){
        return binary(A,min_index+1,A.size()-1,B);
    }
    else if(B > A[min_index] && B > A[A.size()-1]){
        return binary(A,0,min_index-1,B);
    }
}
