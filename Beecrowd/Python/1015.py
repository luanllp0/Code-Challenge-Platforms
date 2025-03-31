import math
X1, Y1 = map(float, input().split())
X2, Y2 = map(float, input().split())
dis = math.sqrt(((X2 - X1)**2) + ((Y2 - Y1)**2)) 
print(f"{dis:.4f}")
