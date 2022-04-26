x = int(input())
y = int(input())

fst = x*(y%10)
snd = (x*((y//10)-(y//100)*10))
trd = (x*(y//100))
fth = fst + snd*10 + trd*100

print(fst)
print(snd)
print(trd)
print(fth)