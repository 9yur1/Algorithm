x = int(input())
y = int(input())

-1000 <= x and x <= 1000
x != 0
-1000 <= y and y <= 1000
y != 0

if x>0 and y>0:
    print(1)
elif x>0 and y<0:
    print(4)
elif x<0 and y>0:
    print(2)
else:
    print(3)

