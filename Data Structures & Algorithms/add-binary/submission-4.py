class Solution:
    def addBinary(self, a: str, b: str) -> str:
        a = a[::-1]
        b = b[::-1]
        ans = ""
        m = len(a)
        n = len(b)
        carry = 0
        for i in range(max(m, n) + 1):
            p = 0
            q = 0
            if i < m:
                p = int(a[i])
            if i < n:
                q = int(b[i])
            k = p + q + carry
            carry = k // 2
            k %= 2
            ans += str(k)
        ans = ans.rstrip('0')
        if ans == "":
            ans = '0'
        return ans[::-1]