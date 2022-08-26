class Solution {
public:
void completeString(vector<string> &add,string complete,int n, int m){
    if(n==0 and n==m){
        add.push_back(complete);
    }
    else{
        if(m>0){
            completeString(add,complete+')',n,m-1);
        }
        if(n>0){
            completeString(add,complete+'(', n-1,m+1);
        }
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        completeString(ans,"",n,0);
        return ans;
    }
};
