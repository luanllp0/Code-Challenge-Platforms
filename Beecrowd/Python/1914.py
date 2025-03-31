cont=int(input())
for i in range (0, cont):
    nome1, num1, nome2, num2 = map(str, input().split())
    n, m = map(int, input().split())
    soma = n + m
    if soma % 2 == 0:
        if num1 == "PAR":
            print(nome1)
        else:
            print(nome2)
    elif soma % 2 != 0:
        if num1 == "IMPAR":
            print(nome1)
        else:
            print(nome2)