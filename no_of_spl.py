n=raw_input()

c=0

for i in n:
    if not i.isalnum():
        c+=1
print c
