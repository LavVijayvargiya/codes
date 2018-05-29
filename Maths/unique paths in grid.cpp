int Solution::uniquePaths(int A, int B) {
	//the logic is that you have to traverse total
	// m-1 + n-1 steps, so choose out of these steps
	//when you want to take down or right.
	// C(m+n-2,n-1)
    long long ans = 1;
    for (int i = B; i < (A + B - 1); i++) {
        ans *= i;
        ans /= (i - B + 1);
    }
    return (int)ans;
}
