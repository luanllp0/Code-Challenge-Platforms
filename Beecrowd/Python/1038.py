A, B = map(int, input().split())
if A == 1:
    A = float(4.0)
elif A == 2:
    A = float(4.50)
elif A == 3:
    A = float(5.0)
elif A == 4: 
    A = float(2.0)
elif A == 5:
    A = float(1.5)
print(f"Total: R${A*B: .2f}")