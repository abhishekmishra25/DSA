def cinvert(n):
    k = [int(x) for x in str(n)]
    for i in range(len(k)-1):
        if k[i] == 0:
            k[i] = 5
    s = [str(i) for i in k]
    res = int("".join(s))
    return res


n = 1004
print(cinvert(n))
