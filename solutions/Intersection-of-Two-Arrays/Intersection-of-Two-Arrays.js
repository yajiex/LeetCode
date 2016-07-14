/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function (nums1, nums2) {
    nums1.sort((a, b) => a - b);
    nums2.sort((a, b) => a - b);
    let i = 0;
    let j = 0;
    const length1 = nums1.length;
    const length2 = nums2.length;
    const ans = [];
    while (i < length1 && j < length2) {
        if (nums1[i] === nums2[j]) {
            ans.push(nums1[i]);
            i++;
            j++;
            while (i < length1 && nums1[i] === nums1[i - 1]) {
                i++;

            }
            while (j < length2 && nums2[j] === nums2[j - 1]) {
                j++;
            }
        } else if (nums1[i] < nums2[j]) {
            i++;
        } else {
            j++;
        }

    }
    return ans;
};