while True:
    soma = 0
    x = int(input())
    if x == 0:
        break
    elif x % 2 == 0:
        for i in range (x, x+9, 2):
            soma = soma + i 
    else:
        for j in range (x+1, x+10, 2):
            soma = soma + j
    print(soma)