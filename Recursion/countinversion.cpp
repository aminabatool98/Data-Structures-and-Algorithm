#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int Merge_Algo(vector<int>& arr, int low, int mid, int high) {

        vector<int> temp;

        int left = low;
        int right = mid + 1;

        int countInversion = 0;

        while (left <= mid && right <= high) {

            if (arr[left] <= arr[right]) {

                temp.push_back(arr[left]);
                left++;

            }
            else {

                temp.push_back(arr[right]);
                right++;

                // Count inversions
                countInversion += (mid - left + 1);
            }
        }

        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }

        return countInversion;
    }


    int MergeSort(vector<int>& arr, int low, int high) {

        if (low == high) {
            return 0;
        }

        int mid = (low + high) / 2;

        int left = MergeSort(arr, low, mid);

        int right = MergeSort(arr, mid + 1, high);

        int cross = Merge_Algo(arr, low, mid, high);

        return left + right + cross;
    }


    int countInversions(vector<int>& arr) {

        int n = arr.size();

        return MergeSort(arr, 0, n - 1);
    }
};