#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void f(int i, vector<int> &nums, vector<int> &temp, vector<vector<int>> &ans, bool pre)
{
  if (i == nums.size())
  {
    ans.push_back(temp);
  }
  else
  {
    f(i + 1, nums, temp, ans, false); // Exclude the current element
    if (i > 0 && nums[i] == nums[i - 1] && (!pre))
    {
      return; // Avoid duplicates
    }
    temp.push_back(nums[i]);         // Include the current element
    f(i + 1, nums, temp, ans, true); // Recursive call for the next element
    temp.pop_back();                 // Backtrack
  }
}

int main()
{
  vector<vector<int>> ans;
  vector<int> nums{1, 2, 2};
  sort(nums.begin(), nums.end());
  vector<int> temp;

  f(0, nums, temp, ans, false);

  // Print the results
  for (const auto &subset : ans)
  {
    cout << "[";
    for (int num : subset)
    {
      cout << num << " ";
    }
    cout << "]\n";
  }

  return 0;
}
