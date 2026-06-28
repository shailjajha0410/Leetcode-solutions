class Solution:
    def addBinary(self, a: str, b: str) -> str:
        i = len(a) - 1
        j = len(b) - 1
        carry = 0
        res = []

        while i >= 0 or j >= 0 or carry:
            total = carry

            if i >= 0:
                total += a[i] == '1'
                i -= 1

            if j >= 0:
                total += b[j] == '1'
                j -= 1

            res.append('1' if total & 1 else '0')
            carry = total >> 1

        return ''.join(reversed(res))
