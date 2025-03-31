salario = float(input())
if salario <= 400:
  orcentagem = "15 %"
  salario2 = salario + (salario / 100 * 15)
elif salario <= 800:
  salario2 = salario + (salario / 100 * 12)
  orcentagem = "12 %"
elif salario <= 1200:
  salario2 = salario + (salario / 100 * 10)
  orcentagem = "10 %"
elif salario <= 2000:
  salario2 = salario + (salario / 100 * 7)
  orcentagem = "7 %"
elif salario > 2000:
  salario2 = salario + (salario / 100 * 4)
  orcentagem = "4 %"
print(f"Novo salario: {salario2:.2f}\nReajuste ganho: {salario2 - salario:.2f}\nEm percentual: {orcentagem}")