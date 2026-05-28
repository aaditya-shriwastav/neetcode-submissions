class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s)!=len(t)):
            return False

      
        mp1={}
        mp2={}
        for i in s:
            if i in mp1:
                mp1[i]+=1
            else:
                mp1[i]=1
        
        for i in t:
            if i in mp2:
                mp2[i]+=1
            else:
                mp2[i]=1
        
        if(mp1==mp2):
            return True

        return False

        
        






        