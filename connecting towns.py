def connectingTowns(n, routes):
    # Write your code here
    c=1
    for i in routes:
        c=c*i
    return c%1234567   
