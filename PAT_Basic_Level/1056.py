"""
给定N个非0的个位数字，用其中任意2个数字都可以组合成1个2位的数字。要求所有可能组合出来的2位数字的和。例如给定2、5、8，
则可以组合出：25、28、52、58、82、85，它们的和为330。

输入格式：

输入在一行中先给出N（1<N<10），随后是N个不同的非0个位数字。数字间以空格分隔。

输出格式：

输出所有可能组合出来的2位数字的和。

输入样例：
3 2 8 5
输出样例：
330
"""


def numsum(nl):
    s = 0
    for n in nl:
        s += n
    return s
inlist = map(int, input().split())
n = next(inlist)
nums = []
for i in inlist:
    nums.append(i)
nl = []
for i in range(len(nums)):
    for j in range(len(nums)):
        if j != i:
            nl.append(nums[i]*10+nums[j])
print(numsum(nl))
