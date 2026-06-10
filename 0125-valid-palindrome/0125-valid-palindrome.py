class Solution:
    def isPalindrome(self, s: str) -> bool:
        if s==" ":
            return True
        clean = "".join(char.lower() for char in s if char.isalnum())
        n = len(clean)
        i, j = 0, n-1

        while i<=j:
            if clean[i] != clean[j]:
               return False
            i+=1
            j-=1
        
        return True