//https://www.interviewbit.com/problems/min-steps-in-infinite-grid/
int Solution::coverPoints(vector<int> &A, vector<int> &B) {
   
   int dist=0;
   
    for (int i=0; i<A.size()-1; i++) {
        // cout<<"here";
        int x = abs(A[i+1] - A[i]);
        int y = abs(B[i+1] - B[i]);
        // cout<<x<<" "<<y<<" "<<max(x,y)<<endl; 
        dist += max(x,y);
        
    }
        
    return dist;    
}

