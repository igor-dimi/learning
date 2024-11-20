import Array
import List

fac n = product [1..n]
choose n k = fac n / (fac (n - k) * fac k)
pi = 3.1415926
n !^! k = choose n k -- defining own operators
square x = x * x
sum_of_squares  list = sum (map square list)
abcFormula a b c = [ (-b + sqrt(square b - 4.0 * a * c)) / (2.0 * a), 
                     (-b + sqrt(square b - 4.0 * a * c)) / (2.0 * a)]
e = exp 1.0
abcFormula' a b c = [ (-b + d) / n, 
                      (-b - d) / n] 
                    where d = sqrt (square b - 4.0 * a * c)
                          n = 2.0 * a -- having where improves readability, but also efficiency

-- guarded expressions in function definitions
myAbs x | x < 0 = -x
        | x >= 0 = x

mySignNum x | x > 0 = 1
            | x < 0 = -1
            | otherwise = 0

-- 4.3 definition by pattern matching
f [1, x, y] = x + y

mySum [] = 0
mySum [x] = x
mySum [x, y] = x + y
mySum [x, y, z] = x + y + z


-- following pattern matching only works in Gofer, but not in Hugs / Haskell
-- even' (2*n) = True
-- even' (2*n+1) = False

-- 4.4 Definition by recursion or induction(patterns)
facRec n | n == 0 = 1
         | n > 0 = n * fac (n - 1)

facPat 0 = 1
facPat (n+1) = (n+1) * fac n

x !+! 0 = 1
x !+! (n+1) = x * x!+!n

mySum' list | list==[] = 0
            | otherwise = head list + mySum' (tail list)

mySum'' [] = 0
mySum'' (hd:tl) = hd + mySum'' tl

length' [] = 0
length' (_:tl) = 1 + length' tl

{- this is another comment -}