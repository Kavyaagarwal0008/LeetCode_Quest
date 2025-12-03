#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);
        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
        }
        for (int i = 0; i < n; i++) {
            ans[i + n] = nums[i];
        }

        return ans;
    }
};
int main() {
    Solution obj;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> result = obj.getConcatenation(nums);

    cout << "Concatenated array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
