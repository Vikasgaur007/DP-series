class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> st;
        int ans=0;
        
        // [0,1,0,2,1,0,1,3,2,1,2,1]
        //  0 1 2 3 4 5 6 7 8 9 10 11
        // st=1   i
        // cur=2
        
        for(int i=0;i<height.size();i++){
            while(!st.empty() and height[i]>height[st.top()]){    
                int cur= st.top();
                st.pop();                
                if(st.empty())break;      
                int dif= i- st.top()-1;  
                ans+= (min(height[i],height[st.top()])-height[cur])*dif;  
            }
			st.push(i);      
        }
        
        return ans;
    }
};