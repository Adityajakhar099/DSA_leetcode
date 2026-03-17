class Solution {
public:
    bool check(vector<int>& nums) {
       int smallest = *min_element(nums.begin(), nums.end());
        int n = nums.size();

        for(int x = 0; x < n; x++){
            if(nums[x] == smallest){

                bool sorted = true;

                for(int i = 0; i < n - 1; i++){
                    if(nums[(x + i) % n] > nums[(x + i + 1) % n]){
                        sorted = false;
                        break;
                    }
                }

                if(sorted) return true;
            }
        }

        return false;
    }
};