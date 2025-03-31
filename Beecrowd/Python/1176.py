cont = int(input())
for i in range (0, cont):
    a =int(input())
    lis = [0, 1]
    for j in range (0, a):
        x = lis[-1] + lis[-2]
        lis.append(x)
    print(f"Fib({a}) = {lis[-2]}")