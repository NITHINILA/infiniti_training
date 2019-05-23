n=input()

a=1
b=1
print a,
for i in range(1,n):
    c=b
    print b,
    b=a+b
    a=c
