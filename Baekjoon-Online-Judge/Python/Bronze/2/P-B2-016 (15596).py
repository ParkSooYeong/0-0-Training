'''
def func():
    n = int(input())

    a = []

    for i in range(n + 1):
        a.append(i)

    return sum(a)
'''

def solve(a):
    ans = 0
    
    for i in a:
        ans += i
    
    return ans
