a = int(input())
while a > 0:
    x = int(input())
    y = x - 1
    z = 0
    while y > 0:
        if x % y == 0:
            z = z + y
        y -= 1
    if z == x:
        print(f"{x} eh perfeito")
    else:
        print(f"{x} nao eh perfeito")
    a -= 1