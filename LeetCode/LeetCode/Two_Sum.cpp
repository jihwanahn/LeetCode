class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> answer(2);

		unsigned int length = nums.size();
		for (int i = 0; i < length; i++)
		{
			unsigned int left = nums.at(i);
			for (int j = i + 1; j < length; j++)
			{
				if ((left + nums[j]) == target)
				{
					//answer.push_back(i);
					//answer.push_back(j);
					answer[0] = i;
					answer[1] = j;
				}
			}
		}
		return answer;
	}
};