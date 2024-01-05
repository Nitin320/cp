nums.sort()
        s = set()
        for i in range(len(nums)-3):
            for j in range(i+1,len(nums)-2):
                l = j+1
                r = len(nums)-1
                while l<r:
                    if nums[i] + nums[j] + nums[l] + nums[r]<target:
                        l+=1
                    elif nums[i] + nums[j] + nums[l] + nums[r]>target:
                        r-=1
                    else:
                        s.add((nums[i],nums[j],nums[l],nums[r]))
                        l+=1
                        r-=1
        return list(s)