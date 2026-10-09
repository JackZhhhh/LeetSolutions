class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        hash_map = {}
        for char in magazine:
            hash_map[char] = 1 + hash_map.get(char, 0)
        for char in ransomNote:
            if char not in hash_map or hash_map[char] == 0:
                return False
            hash_map[char] -= 1
        return True
        