def strangeGrid(r, c):
    nums = input()
nums = nums.split()
row = int(nums[0]) - 1
col = int(nums[1]) - 1

tens = int(row / 2) * 10
ones = row % 2 + col * 2

total = tens + ones
print(total)
