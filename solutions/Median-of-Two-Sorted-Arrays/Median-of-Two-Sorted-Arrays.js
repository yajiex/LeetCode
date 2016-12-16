/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function (nums1, nums2) {
  const N1 = nums1.length;
  const N2 = nums2.length;
  if (N1 < N2) {
    return findMedianSortedArrays(nums2, nums1);  // Make sure A2 is the shorter one.
  }

  if (N2 === 0) {
    return (nums1[Math.floor((N1 - 1) / 2)] + nums1[Math.floor(N1 / 2)]) / 2;  // If A2 is empty
  }

  let lo = 0;
  let hi = N2 * 2;
  while (lo <= hi) {
    const mid2 = Math.floor((lo + hi) / 2);   // Try Cut 2
    const mid1 = N1 + N2 - mid2;  // Calculate Cut 1 accordingly

    const L1 = (mid1 === 0) ? Number.NEGATIVE_INFINITY : nums1[Math.floor((mid1 - 1) / 2)];	// Get L1, R1, L2, R2 respectively
    const L2 = (mid2 === 0) ? Number.NEGATIVE_INFINITY : nums2[Math.floor((mid2 - 1) / 2)];
    const R1 = (mid1 === N1 * 2) ? Number.POSITIVE_INFINITY : nums1[Math.floor(mid1 / 2)];
    const R2 = (mid2 === N2 * 2) ? Number.POSITIVE_INFINITY : nums2[Math.floor(mid2 / 2)];

    if (L1 > R2) {
      lo = mid2 + 1;	// A1's lower half is too big; need to move C1 left (C2 right)
    }
    else if (L2 > R1) {
      hi = mid2 - 1;	// A2's lower half too big; need to move C2 left.
    }
    else {
      return (Math.max(L1, L2) + Math.min(R1, R2)) / 2;  // Otherwise, that's the right cut.
    }
  }
  return -1;
};