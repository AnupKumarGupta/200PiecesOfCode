//https://www.interviewbit.com/problems/add-one-to-number/

vector<int> Solution::plusOne(vector<int> &A) {
    
    vector<int> ans;  
     
    // vect.push_back(10);
    int carry = 1,sum=0;
    
    for(int i=A.size()-1 ; i>=0 ; i--){
        
        sum = A[i] + carry;
        // cout<<A[i]<<" "<<sum<<" ";
        // if (sum ==0) break;
        if( sum > 9){
            ans.push_back(sum%10);
            carry = 1;
        } else {
            ans.push_back(sum);
            carry = 0;
        }
        // ans.push_back();
    }
    if( sum > 9){
        ans.push_back(1);
    }
    
    
    while(ans[ans.size()-1]==0){
        ans.pop_back();
    }
    // cout<<ans[0];
    std::reverse(ans.begin(), ans.end());
    return ans;
}
