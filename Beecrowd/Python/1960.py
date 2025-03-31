lista = []
x = ""
a = int(input())
b = a // 100
if b == 1:
    lista.append("C")
elif b == 2:
    lista.append("CC")
elif b == 3:
    lista.append("CCC")
elif b == 4:
    lista.append("CD")
elif b == 5:
    lista.append("D")
elif b == 6:
    lista.append("DC")
elif b == 7:
    lista.append("DCC")
elif b == 8:
    lista.append("DCCC")
elif b == 9:
    lista.append("CM")
a = a % 100

c = a // 10
if c == 1:
    lista.append("X")
elif c == 2:
    lista.append("XX")
elif c == 3:
    lista.append("XXX")
elif c == 4:
    lista.append("XL")
elif c == 5:
    lista.append("L")
elif c == 6:
    lista.append("LX")
elif c == 7:
    lista.append("LXX")
elif c == 8:
    lista.append("LXXX")
elif c == 9:
    lista.append("XC")
a = a % 10

if a == 1:
    lista.append("I")
elif a == 2:
    lista.append("II")
elif a == 3:
    lista.append("III")
elif a == 4:
    lista.append("IV")
elif a == 5:
    lista.append("V")
elif a == 6:
    lista.append("VI")
elif a == 7:
    lista.append("VII")
elif a == 8:
    lista.append("VIII")
elif a == 9:
    lista.append("IX")

for i in lista:
    x += i

print(x)
