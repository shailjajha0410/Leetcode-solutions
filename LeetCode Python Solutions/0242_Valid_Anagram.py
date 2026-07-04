class Solution(object):
    def isAnagram(self, s, t):
        if len(s) != len(t):
            return False

        # Set (unique letters)
        setS = set(s)

        # for each unique letter
        for char in setS:
            # if unique char count is not equal
            if s.count(char) != t.count(char):
                return False
        return True
