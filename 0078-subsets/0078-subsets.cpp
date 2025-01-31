class Solution
{
public:
  void solve(vector<int> &nums, int id, vector<int> &v, vector<vector<int>> &ans)
  {
    if (id == nums.size())
    {
      ans.push_back(v);
      return;
    }

    solve(nums, id + 1, v, ans);
    v.push_back(nums[id]);
    solve(nums, id + 1, v, ans);
    v.pop_back();
  }
  vector<vector<int>> subsets(vector<int> &nums)
  {
    int n = nums.size();
    vector<vector<int>> ans;
    vector<int> v;
    solve(nums, 0, v, ans);
    return ans;
  }
};