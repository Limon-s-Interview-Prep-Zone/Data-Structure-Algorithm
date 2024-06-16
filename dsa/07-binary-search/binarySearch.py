from typing import List


class Solution:
    def __init__(self) -> None:
        pass

    def binarySearch(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1
        while l <= r:
            mid = l + ((r - l) >> 1)
            if nums[mid] > target:
                r = mid - 1
            elif nums[mid] < target:
                l = mid + 1
            else:
                return mid
        return -1

    def binarySearchRecursive(self, nums: List[int], target) -> int:
        return self.helperFc(nums, target, 0, len(nums) - 1)

    def helperFc(self, nums: List[int], target: int, l: int, r: int) -> int:
        if l > r:
            return -1

        mid = l + ((r - l) >> 1)

        if nums[mid] > target:
            return self.helperFc(nums, target, l, mid - 1)
        elif nums[mid] < target:
            return self.helperFc(nums, target, mid + 1, r)
        else:
            return mid


if __name__ == "__main__":
    ll = Solution()
    print(ll.binarySearch([3, 4, 5, 6, 7, 8, 9], 7))
    print(ll.binarySearchRecursive([3, 4, 5, 6, 7, 8, 9], 7))
