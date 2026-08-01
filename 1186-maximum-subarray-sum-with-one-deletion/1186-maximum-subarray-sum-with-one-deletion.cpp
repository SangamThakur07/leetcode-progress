class Solution {
public:
    int maximumSum(vector<int>& a) {
        int nodelete=a[0];
        int onedelete=INT_MIN;
        int result=a[0];
        for(int i=1;i<a.size();i++){
            int prevonedelete=onedelete;
            int prevnodelete=nodelete;
            nodelete=max(a[i]+nodelete,a[i]);
            int v2;
            if(prevonedelete==INT_MIN){
                v2=a[i];
            }else{
                v2=prevonedelete+a[i];
            }
            onedelete=max(v2,prevnodelete);
            result=max(result,max(onedelete,nodelete));

        }
        return result;
        
    }
};