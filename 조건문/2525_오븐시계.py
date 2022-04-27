A, B = map(int, input().split())    # 시 분 입력
C = int(input())                    # 오븐작동 시간 분단위로 입력

sum = A*60 + B
sum = sum + C

if sum >= 1440: # 1440분 = 24시간
    sum -= 1440
print(sum//60, sum%60)

