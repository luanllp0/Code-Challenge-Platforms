a = 1
x = int(input())
B = 0
coelhos = 0
ratos = 0
sapos = 0
while a <= x:
    b, c = map(str, input().split())
    b = int(b)
    B = B + b
    if c == "C":
        coelhos = coelhos + b
    elif c == "R":
        ratos = ratos + b
    elif c == "S":
        sapos = sapos +  b
    a += 1
per_c = 100 * coelhos / B
per_r = 100 * ratos / B
per_s = 100 * sapos / B
print(f"Total: {B} cobaias\nTotal de coelhos: {coelhos}\nTotal de ratos: {ratos}\nTotal de sapos: {sapos}\nPercentual de coelhos: {per_c:.2f} %\nPercentual de ratos: {per_r:.2f} %\nPercentual de sapos: {per_s:.2f} %")
