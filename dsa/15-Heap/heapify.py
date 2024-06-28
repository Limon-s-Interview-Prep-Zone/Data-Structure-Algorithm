from typing import List
import heapq


class Heap:
    def __init__(self) -> None:
        self.heap = []

    def heapifyLib(self, nums):
        heapq.heapify(nums)

    def heapify(self, nums: List[int]):
        # move the oth element to the last
        nums.append(nums[0])
        nums[0] = 0

        curr = (len(nums) - 1) >> 1

        while curr > 0:
            i = curr
            while 2 * i < len(nums):
                if (
                    2 * i + 1 < len(nums)
                    and nums[2 * i + 1] < nums[i]
                    and nums[2 * i + 1] < nums[2 * i]
                ):
                    temp = nums[i]
                    nums[i] = nums[2 * i + 1]
                    nums[2 * i + 1] = temp
                    i = 2 * i + 1

                elif nums[2 * i] < nums[i]:
                    temp = nums[i]
                    nums[i] = nums[2 * i]
                    nums[2 * i] = temp
                    i = 2 * i
                else:
                    break
            curr -= 1

    def display(self, heap):
        print(heap)


def main():
    nums = [60, 50, 80, 40, 30, 10, 70, 20, 90]
    arr = [60, 50, 80, 40, 30, 10, 70, 20, 90]
    """Output: [0, 10, 30, 20, 50, 80, 70, 40, 90, 60]"""
    s = Heap()
    s.heapify(nums)
    s.display(nums)
    s.heapifyLib(arr)
    s.display(arr)


if __name__ == "__main__":
    main()

# TC: O(N)
# Sorting: O(nLog n)
# Searching: O(n)