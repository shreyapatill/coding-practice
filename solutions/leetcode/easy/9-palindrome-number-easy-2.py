class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0 or (x % 10 == 0 and x != 0):
            return False

        flipped = 0
        
        while x > flipped:
            flipped = flipped * 10 + x % 10
            x //= 10
    
        return flipped == x or flipped // 10 == x