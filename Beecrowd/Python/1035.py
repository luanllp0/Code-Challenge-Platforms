A, B, C, D = map(int, input().split())
if B > C and D > A and C + D > A + B and C > 0 and D > 0 and A % 2 == 00:
    print(f"Valores aceitos")
else:
    print(f"Valores nao aceitos")