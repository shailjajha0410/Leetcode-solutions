class Solution:
    def maxArea(self, height):
        left, right = 0, len(height) - 1
        maxWater = 0

        while left < right:
            area = (right - left) * min(height[left], height[right])
            maxWater = max(maxWater, area)

            if height[left] < height[right]:
                left += 1
            else:
                right -= 1

        return maxWater
