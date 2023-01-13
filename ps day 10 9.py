def solve(n, operations):
    inp = [int(a) for a in input().split()]
    tot = 0
    for i in range(inp[1]):
        inp1 = [int(a) for a in input().split()]
        tot += (inp1[1]-inp1[0]+1)*inp1[2]
        print(int(tot/inp[0]))
