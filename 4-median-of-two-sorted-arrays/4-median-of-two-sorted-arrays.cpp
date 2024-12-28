class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int sizeN1 = nums1.size();
        int sizeN2 = nums2.size();
        int s = sizeN1 + sizeN2;
        vector<int> arr;
        int i = 0, j = 0;
        while (i < sizeN1 && j < sizeN2)
        {
            if (nums1[i] < nums2[j])
            {
                arr.push_back(nums1[i]);
                i++;
            }
            else
            {
                arr.push_back(nums2[j]);
                j++;
            }
        }
        while (i < sizeN1)
        {
            arr.push_back(nums1[i]);
            i++;
        }
        while (j < sizeN2)
        {
            arr.push_back(nums2[j]);
            j++;
        }
        if (s % 2 == 0)
        {
            return (arr[s / 2 - 1] + arr[s / 2]) / 2.0;
        }
        return arr[s / 2];
    }
};