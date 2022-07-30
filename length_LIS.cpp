class Solution {
public:
    int m=1;
    int lis(vector<int> &a, vector<int> &dp, int j){
        if(j>=a.size()) return 0;
        
//         [10,9,2,5,3,7,101,18]
//          1 1 1 2 2  5 11 11 1 
        
        for(int k=j-1;k>=0;k--){
            if(a[j]>a[k]) dp[j]=max(dp[j],1+dp[k]);
        }
        m=max(m,dp[j]);
        lis(a,dp,j+1);
        return 0;
    }
    int lengthOfLIS(vector<int>& v) {
        int n=v.size();
        vector<int> dp(n+1,1);
        lis(v,dp,1);

        return m;
        
    }
};