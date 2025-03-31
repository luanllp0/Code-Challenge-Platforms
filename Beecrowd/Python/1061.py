x, diainicial = map(str, input().split())
diainicial = int(diainicial)
hora1, a, minuto1, b, segundo1 = map(str, input().split())
hora1 = int(hora1)
minuto1 = int(minuto1)
segundo1 = int(segundo1)
y, diafinal = map(str, input().split())
diafinal = int(diafinal)
hora2, c, minuto2, d, segundo2 = map(str, input().split())
hora2 = int(hora2)
minuto2 = int(minuto2)
segundo2 = int(segundo2)
##
diafinal = (diafinal-diainicial)
horafinal = (hora2 - hora1)
minutofinal = (minuto2 - minuto1)
segundofinal = (segundo2 - segundo1)
if segundofinal < 0:
    segundofinal= 60 - abs(segundofinal)
    minutofinal -= 1
if minutofinal < 0:
    minutofinal = 60 - abs(minutofinal)
    horafinal -= 1
if horafinal < 0:
    horafinal = 24 - abs(horafinal)
    diafinal -= 1
print(f"{diafinal} dia(s)\n{horafinal} hora(s)\n{minutofinal} minuto(s)\n{segundofinal} segundo(s)")