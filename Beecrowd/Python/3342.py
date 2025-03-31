x = int(input())
if x % 2 == 0:
    brancas = (x*x)//2
    pretas = (x*x)//2
else:
    brancas = (x*x)//2 +1
    pretas = (x*x)//2
print(f"{brancas} casas brancas e {pretas} casas pretas")