bin = 0
x = 0
while True:
    piscada = str(input())
    if piscada == "--*":
        bin += 1
    elif piscada == "-*-":
        bin += 2
    elif piscada == "-**":
        bin += 3
    elif piscada == "*--":
        bin += 4
    elif piscada == "*-*":
        bin += 5
    elif piscada == "**-":
        bin += 6
    elif piscada == "***":
        bin += 7
    elif piscada == "caw caw":
        print(bin)
        x += 1
        bin = 0
    if x == 3:
        break