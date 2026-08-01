class Solution {
public:
    int maxAbsoluteSum(vector<int>& a) {
        int maxbestending=a[0];
        int minbestending=a[0];
        int maxans=a[0];
        int minans=a[0];
        for(int i=1;i<a.size();i++){
            maxbestending=max(a[i],maxbestending+a[i]);
            maxans=max(maxans,maxbestending);
        }
        for(int i=1;i<a.size();i++){
            minbestending=min(a[i],minbestending+a[i]);
            minans=min(minans,minbestending);

        }
        minans=abs(minans);
        return max(minans,maxans);

        
    }
};