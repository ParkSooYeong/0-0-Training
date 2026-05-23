T, S = map(int, input().split())

if (T <= 11 or T > 16) and S == 0:
    print(280)
elif (T <= 11 or T > 16) and S == 1:
    print(280)
elif (T >= 12 and T <= 16) and S == 0:
    print(320)
elif (T >= 12 and T <= 16) and S == 1:
    print(280)
