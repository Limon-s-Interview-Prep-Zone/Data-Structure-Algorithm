from typing import List
class BucketSort:
    def __init__(self) -> None:
        pass

    def bucketSort(self, nums:List[int])->None:
        counts = [0, 0, 0]

        for n in nums:
            counts[n] += 1

        i = 0
        for n in range(len(counts)):
            for j in range(counts[n]):
                nums[i] = n
                i += 1
        return nums
    
if __name__=="__main__":
    nums=[2,0,2,1,1,0]
    bs=BucketSort()
    bs.bucketSort(nums)
    print(nums)
# TC: O(n)+O(n)=O(2n)=O(N) SC:O(C)->O(1)