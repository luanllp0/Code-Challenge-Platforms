N = float(input())
print(f"NOTAS:")
print(f"{int(N//100)} nota(s) de R$ 100.00")
N %= 100
print(f"{int(N//50)} nota(s) de R$ 50.00")
N %= 50
print(f"{int(N//20)} nota(s) de R$ 20.00")
N %= 20
print(f"{int(N//10)} nota(s) de R$ 10.00")
N %= 10
print(f"{int(N//5)} nota(s) de R$ 5.00")
N %= 5
print(f"{int(N//2)} nota(s) de R$ 2.00")
N %= 2
print(f"MOEDAS:")
print(f"{int(N//1)} moeda(s) de R$ 1.00")
N %= 1
print(f"{int(N//0.50)} moeda(s) de R$ 0.50")
N %= 0.50
print(f"{int(N//0.25)} moeda(s) de R$ 0.25")
N %= 0.25
print(f"{int(N//0.10)} moeda(s) de R$ 0.10")
N %= 0.10
print(f"{int(N//0.05)} moeda(s) de R$ 0.05")
N %= 0.05
print(f"{N*100:.0f} moeda(s) de R$ 0.01")
