class SparseVector:
    def __init__(self, nums: List[int]):
        self.nonzeros = {}
        for i in range(len(nums)):
            if nums[i] != 0:
                self.nonzeros[i] = nums[i]

    # Return the dotProduct of two sparse vectors
    def dotProduct(self, vec: 'SparseVector') -> int:
        answer = 0
        for index, value in self.nonzeros.items():
            if index in vec.nonzeros:
                	answer += value*vec.nonzeros[index]
        return answer

# Your SparseVector object will be instantiated and called as such:
# v1 = SparseVector(nums1)
# v2 = SparseVector(nums2)
# ans = v1.dotProduct(v2)