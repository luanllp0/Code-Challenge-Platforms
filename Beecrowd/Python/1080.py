x = 1
b = 0
c = 0
while x < 101:
    a = int(input())
    if a > b:
        b = a
        c = x
    x += 1
print(f"{b}\n{c}")
