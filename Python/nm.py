def power(i):
    if i==0:
        return 0
    else:
        power(i-1)
        print(i)
i=int(input())
power(i)
