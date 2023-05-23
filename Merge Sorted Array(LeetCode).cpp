class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int *firstArray = new int[m];
    int *secondArray = new int[n];
    for (int i = 0; i < m; ++i)
    {
        firstArray[i] = nums1[i];
    }
    for (int i = 0; i < n; ++i)
    {
        secondArray[i] = nums2[i];
    }
    int index1 = 0, index2 = 0, mainIndex = 0;
    while (index1 < m && index2 < n)
    {
        if (firstArray[index1] < secondArray[index2])
        {
            nums1[mainIndex++] = firstArray[index1++];
        }
        else
        {
            nums1[mainIndex++] = secondArray[index2++];
        }
    }
    while (index1 < m)
    {
        nums1[mainIndex++] = firstArray[index1++];
    }
    while (index2 < n)
    {
        nums1[mainIndex++] = secondArray[index2++];
    }
    }
};
