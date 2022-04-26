'''
H,M = map(int, input().split())

H >=0 and H <=23
M >=0 and M <=59


if M<45 and H>=1:
    print(int(H-1), int(15+M))
    # new Min = 60-(45-M)
elif M<45 and H<1:
    print(23,int(75-M))
else:
    print(int(H), int(M-45))

왜 틀린지 모르겠음
'''

H, M = map(int, input().split())

if(M >= 45):
    print(H, M-45)
elif (M < 45 and H > 0):
    print(H-1, M+15)
else:
    print(23, M+15)

