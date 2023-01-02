def Series( x , n ):
    sum = 1
    term = 1
    y = 2
     
    # Sum of n-1 terms starting from 2nd term
    for i in range(1,n):
        fct = 1
        for j in range(1,y+1):
            fct = fct * j
         
        term = term * (-1)
        m = term * math.pow(x, y) / fct
        sum = sum + m
        y += 2
     
    return sum
 
# Driver Code
x = 9
n = 10
print('%.4f'% Series(x, n))
 
