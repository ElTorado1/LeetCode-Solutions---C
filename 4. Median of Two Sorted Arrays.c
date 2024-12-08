double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int *sorted = (int *)malloc((nums1Size + nums2Size) * sizeof(int)); // I have created an array.
     int idx1 = 0, idx2 = 0, idxSorted = 0;
    while(idx1 < nums1Size && idx2 < nums2Size){ // while one of them doesn't reach the end, continue.
        if (nums1[idx1] <= nums2[idx2]) {
            sorted[idxSorted++] = nums1[idx1++];  
        } else {
            sorted[idxSorted++] = nums2[idx2++];
        }
    } // sort it
    // add remaining elements from nums1
    while (idx1 < nums1Size) {
        sorted[idxSorted++] = nums1[idx1++];
    }

    // add remaining elements from nums2
    while (idx2 < nums2Size) {
        sorted[idxSorted++] = nums2[idx2++];
    }
    int totalSize = nums1Size + nums2Size;
    double median;
    if (totalSize % 2 == 0) {
        median = (sorted[totalSize / 2 - 1] + sorted[totalSize / 2]) / 2.0;
    } else {
        median = sorted[totalSize / 2];
    }
    free(sorted);
    return median;
}
