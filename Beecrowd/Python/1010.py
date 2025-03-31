cod1, num1, valor1 = map(float, (input().split()))
cod2, num2, valor2 = map(float, (input().split()))
valor = (num1 * valor1) + (num2 * valor2)
print(f"VALOR A PAGAR: R$ {valor:.2f}")