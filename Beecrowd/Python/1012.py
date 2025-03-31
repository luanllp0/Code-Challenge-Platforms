A, B, C = map(float, input().split())
pi = 3.14159
AT = (A * C)/2
AC = pi*(C**2)
ATR = ((A+B)*C)/2
AQ = B**2
AR = A*B
print(F"TRIANGULO: {AT:.3f}\nCIRCULO: {AC:.3f}\nTRAPEZIO: {ATR:.3f}\nQUADRADO: {AQ:.3f}\nRETANGULO: {AR:.3f}")