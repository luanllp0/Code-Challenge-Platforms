alcool = 0
gasolina = 0
diesel = 0
while True:
    n = int(input(""))
    if n == 1:
        alcool += 1
    elif n == 2: 
        gasolina += 1
    elif n == 3:
        diesel += 1
    elif n == 4:
        break
print(f"MUITO OBRIGADO\nAlcool: {alcool}\nGasolina: {gasolina}\nDiesel: {diesel}")
    