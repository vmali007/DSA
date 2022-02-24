def searchInsert(nums, target):
    l,r = 0,len(nums)

    while(l<r):
        mid = (r + l)//2
        if nums[mid] < target:
            l = mid + 1
        else:
            r = mid
    return l

print((searchInsert([1,3,5,7,9],4)))

