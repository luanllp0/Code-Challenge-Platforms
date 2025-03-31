n = int(input())
ano = n // 365
mes = (n % 365) // 30
dia = (n % 365) % 30
print(f"{ano} ano(s)\n{mes} mes(es)\n{dia} dia(s)")