ct = int(input())
while ct > 0:
    x = int(input())
    primo = True
    for i in range (x-1, 1, -1):
        if x % i == 0:
            primo = False
    if primo == True:
        print(f"{x} eh primo")
    else:
        print(f"{x} nao eh primo")
    ct -= 1