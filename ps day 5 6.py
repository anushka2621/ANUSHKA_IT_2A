x=eval(input('Enter list: '))
l=list(x)
n=len(l)
if n%2==0:
    for i in range(0,n,2): 
        l[i],l[i+1]=l[i+1],l[i] 
else:
    for i in range(0,n-1,2):
        print(i)
        l[i],l[i+1]=l[i+1],l[i]
print('Final list: ',l)
