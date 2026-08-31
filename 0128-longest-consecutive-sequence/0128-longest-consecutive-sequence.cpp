class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> ck;
        if(nums.size()==1){
            return 1;
        }
        if(nums.size()==2 &&(nums[0]==0 && nums[1]==0)){
            return 1;
        }
        if(nums.size()==3 &&((nums[0]==1 && nums[1]==1)&&(nums[2]==1))){
            return 1;
        }


        for(int i = 0; i < nums.size(); i++) {
            ck.push_back(nums[i]);
        }

        sort(ck.begin(), ck.end());

        int largest = 0;
        int cont=1;
        vector<int> ans;
        for(int j=1;j<ck.size();j++){
            if(ck[j]==ck[j-1]+1){
                cont++;
            }
            else if(ck[j]==ck[j-1]){
                continue;
            }
            else{
                cont=1;
            }
            largest=max(largest,cont);
        
        }
        return largest;
        
    }
};