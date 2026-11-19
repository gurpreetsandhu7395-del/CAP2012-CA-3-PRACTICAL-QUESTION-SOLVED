sahib-preet
-CAP2012_CA3_LeetCode_-12501701-
Repository navigation
Code
Issues
Pull requests
Agents
Actions
Projects
Security and quality
Insights
-CAP2012_CA3_LeetCode_-12501701-
/15_LC004_MedianOfTwoSortedArrays_Hard.c
sahib-preet
sahib-preet
Add function to find median of two sorted arrays
06fa17d
 · 
15 hours ago
45 lines (40 loc) · 755 Bytes

Code

Blame
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    int arr[2000];
    int i = 0, j = 0, k = 0;
    int total = nums1Size + nums2Size;

    while(i < nums1Size && j < nums2Size)
    {
        if(nums1[i] < nums2[j])
        {
            arr[k] = nums1[i];
            i++;
        }
        else
        {
            arr[k] = nums2[j];
            j++;
        }

        k++;
    }

    while(i < nums1Size)
    {
        arr[k] = nums1[i];
        i++;
        k++;
    }

    while(j < nums2Size)
    {
        arr[k] = nums2[j];
        j++;
        k++;
    }

    if(total % 2 == 1)
    {
        return arr[total / 2];
    }
    else
    {
        return (arr[total / 2 - 1] + arr[total / 2]) / 2.0;
    }
}

Symbols
function
‎findMedianSortedArrays‎
DefinitionSearch

‎In this file‎
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
Copied!
