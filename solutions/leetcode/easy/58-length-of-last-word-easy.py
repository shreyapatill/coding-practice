class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        array = s.split()
        return len(array[len(array)-1])