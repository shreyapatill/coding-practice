romans = {
    "I": 1,
    "V": 5,
    "X": 10,
    "L": 50,
    "C": 100,
    "D": 500,
    "M": 1000,
}

class Solution:
    def romanToInt(self, s: str) -> int:

        converted_int = 0
        i = 0

        while i < len(s):
            if i+1 < len(s) and romans[s[i+1]] > romans[(s[i])]:
                converted_int -= romans[s[i]]
                i += 1
            converted_int += romans[s[i]]
            i += 1
        return converted_int
