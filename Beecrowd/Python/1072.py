n = int(input())
a = 0
b = 0
while n > 0:
    x = int(input())
    if x >= 10 and x <= 20:
        a += 1
    else:
        b += 1
    n -= 1
print(f"{a} in\n{b} out")