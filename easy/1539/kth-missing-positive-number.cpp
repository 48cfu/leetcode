class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<bool> data(1000, true);
        for (int i = 0; i < arr.size(); i++)
        {
            data[arr[i] - 1] = false;
        }
        for (int i = 0; i < 1000; i++)
        {
            if (data[i])
            {
                k--;
            }
            if (k == 0)
            {
                return i + 1;
            }
        }
        return 1000 + k;
    }
};