class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        ans=[-1]
        maxi=-1

        for i in range(len(arr)-1,0,-1):
            maxi=max(maxi,arr[i])
            ans.append(maxi)
        

        ans.reverse()
        return ans
 


        