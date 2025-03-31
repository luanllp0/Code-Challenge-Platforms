a, b, c = map(float, input().split())
if a > abs(b-c) and a < (b+c) or b > abs(a-c) and b < (a+c) or c > abs(a-b) and c < (a+b):
  print(f"Perimetro = {a+b+c:.1f}")
else:
  print(f"Area = {(a+b)*c/2:.1f}")