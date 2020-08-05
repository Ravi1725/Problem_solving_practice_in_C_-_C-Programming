
//using vector standard STL
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0; i<nums.size(); i++)
        {
            for (int j = i+1; j<nums.size(); j++)
            {
                int n =nums[j]+nums[i];
                if(n==target)
                {
                    vector<int> num1={i,j};
                    return num1;

                 }
                    
              }

        }
        throw runtime_error("No two sum solution");
    }
};


//using map standard STL
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result(2);
        map<int, int> m;
        for (int i = 0; i < numbers.size(); ++i) {
            m.insert(pair<int, int> (numbers[i], i));
        }
        for (int i = 0; i < numbers.size(); ++i) {
            int compliment = target - numbers[i];
            map<int, int>::iterator answer = m.find(compliment);
             if (answer != m.end() && m.at(compliment) !=i) {
                result[0] = i;
                result[1] = m.at(compliment);
                return result;
            }
        }
        return result;
    }
};
