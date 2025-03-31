lista = []
a = int(input())
while a > 0:
    if a >= 16:
        b = a % 16
        a = a // 16
    elif a < 16:
        b = a
        a = 0
    if b == 10:
        b = "A"
    elif b == 11:
        b = "B"
    elif b == 12:
        b = "C"
    elif b == 13:
        b = "D"
    elif b == 14:
        b = "E"
    elif b == 15:
        b = "F"
    else:
        b = str(b)       
    lista.append(b)
lista.reverse()
c = ""
for i in lista:
    c += i
print(c)