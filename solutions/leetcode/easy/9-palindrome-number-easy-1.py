class Solution:
    def isPalindrome(self, x: int) -> bool:
        flipped = ""
        temp = str(x)
        for s in temp:
            if s == "-":
                return False
            flipped = s + flipped

        return int(flipped)==x