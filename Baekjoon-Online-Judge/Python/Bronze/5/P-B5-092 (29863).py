sleep = int(input())
wakeup = int(input())

if sleep >= 20:
    print(24 - sleep + wakeup)
elif sleep <= 3:
    print((sleep - wakeup) * (-1))
