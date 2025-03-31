x = int(input())
soma = x
cont = 1
while True:
    z = int(input())
    if z > x:
        break
while soma < z:
    x = x+1
    soma = soma +x
    cont += 1
print(cont)