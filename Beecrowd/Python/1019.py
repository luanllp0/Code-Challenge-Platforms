n = int(input())
min = n // 60
seg = n % 60
horas = min // 60
min = min % 60
print(f"{horas}:{min}:{seg}")