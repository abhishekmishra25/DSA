import math


def fiind(s):
    k = []
    for i in range(256):
        k.append(-1)
    res = math.inf
    for i in range(len(s)-1):
        if(k[s[i]] == -1):
            k[s[i]] = i
        else:
            res = min(res, k[s[i]])
    return res


s = "abhishek"
print(fiind(s))
