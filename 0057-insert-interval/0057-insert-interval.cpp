class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        bool flag=false;
        for(int i=0;i<intervals.size();i++){
            if(flag==false && intervals[i][0]>newInterval[0]){
                res.push_back(newInterval);
                flag=true;

            }
            res.push_back(intervals[i]);

        }
        if (flag == false) {
            res.push_back(newInterval);
        }
        int start1=res[0][0];
        int end1=res[0][1];
        vector<vector<int>> newres;


        for(int i=1;i<res.size();i++){
            if(res[i][0]<=end1){
                start1=start1;
                end1=max(end1,res[i][1]);
                continue;
            }
            newres.push_back({start1,end1});
            start1=res[i][0];
            end1=res[i][1];
            


        }
        newres.push_back({start1, end1});
        return newres;







    }
};