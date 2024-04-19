def min(a, b) :
    if a < b :
        return a
    return b

def max(a, b) :
    if a > b :
        return a
    return b

def gcd(a, b) :
    if min(a, b) == 0 :
        return max(a, b)
    return gcd(max(a, b) - min(a, b), min(a, b))

def gcd2(a, b) :
    if b == 0 :
        return a
    return gcd(b, a % b)

def gcd_it(a, b) :
    while a != 0 and b != 0 :
        if a > b : a = a % b 
        else : b = b % a
    # a == 0 or b == 0
    if a == 0 : return b
    return a
# new definition
3 + 3