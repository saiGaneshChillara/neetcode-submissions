class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0, high = matrix.size() - 1;
        int m = matrix.size(), n = matrix[0].size();

        while (low <= high) {
            int mid = (low + high) / 2;

            if (target >= matrix[mid][0] && target <= matrix[mid][n - 1]) {
                return searchVector(matrix[mid], target);
            } else if (target < matrix[mid][0]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return false;
    }

    bool searchVector(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == target) {
                return true;
            } else if (target < arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return false;
    }
};
