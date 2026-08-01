class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        int maxbestending=a[0];
        int res1=a[0];
        for(int i=1;i<a.size();i++){
            maxbestending=max(a[i],a[i]+maxbestending);
            res1=max(res1,maxbestending);
        }
        if (res1 < 0)
            return res1;
        int array_sum=0;
        for(int i=0;i<a.size();i++){
            array_sum+=a[i];
        }
        int minbestending=a[0];
        int res2=a[0];
        for(int i=1;i<a.size();i++){
            minbestending=min(a[i],a[i]+minbestending);
            res2=min(res2,minbestending);
        }
        int res2updated=array_sum-res2;
        return max(res1,res2updated);
        
    }
};