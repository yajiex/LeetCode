/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function (nums) {
    return nums.reduce(function (prev, cur) {
        return prev ^ cur;
    });
};