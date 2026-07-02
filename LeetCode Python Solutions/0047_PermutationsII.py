class Solution:
    def permuteUnique(self, nums):
        result = []

        def backtrack(path, nums):
            if not nums:
                result.append(path)
                return

            for i in range(len(nums)):
                if i > 0 and nums[i] == nums[i - 1]:
                    continue

                backtrack(
                    path + [nums[i]],
                    nums[:i] + nums[i + 1:]
                )

        backtrack([], sorted(nums))
        return result
