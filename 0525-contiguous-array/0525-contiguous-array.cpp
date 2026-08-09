class Solution {
public:
    int findMaxLength(vector<int>& a) {
        int n=a.size();
        int zero=0;
        int one=0;
        unordered_map<int,int>f;
        int res=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                zero++;
            }
            else{
                one++;
            }
            int diff=zero-one;
            if(diff==0){
                res=max(res,i+1);
                continue;

            }
            if(f.find(diff)==f.end()){
                f[diff]=i;
            }
            else{
                int index=f[diff];
                int len=i-index;
                res=max(len,res);
            }
        }
        return res;

        
    }
};