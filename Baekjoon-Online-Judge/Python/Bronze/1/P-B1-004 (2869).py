A, B, V = map(int, input().split())

days = (V - A + (A - B) - 1) // (A - B) + 1

print(days)

# 하루에 올라가는 높이 = A - B
# 마지막 날에는 미끄러지지 않음, 매일 순수히 V - A만 올라가면 마지막 날에 정상 도착 가능
# 즉, V - A를 A - B로 나눈 값은 마지막 날 직전까지 걸린 일수
# 하지만 나누어 떨어지지 않으면 하루가 더 필요하므로 +1 올림이 필요함

'''
meter = 0
count = 0

while True:
    count += 1

    meter += A

    if meter >= V:
        break

    meter -= B

    if meter >= V:
        break

print(count)
'''
