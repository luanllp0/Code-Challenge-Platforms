NC = int(input())
for i in range(NC):
    n, k = map(int, input().split())
    vet = [i for i in range(1, n+1)]

    index = 0  
    while len(vet) > 1:
        index = (index + k - 1) % len(vet)  
        vet.pop(index) 
    
    print("Case %d: %d" % (i+1, vet[0]))  