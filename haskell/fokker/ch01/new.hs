import Distribution.Simple.Utils (xargs)
import Array
import List


f n = n * n
fac n = product [1..n]
choose n k = fac n / (fac k * fac (n - k))
palipalindrome xs = xs == reverse xs

-- map f list = 
--     case list of
--         [] -> []
--         x : xs -> f x : map f x

fac2 n 
    | n == 0 = 1
    | n > 0  = fac (n - 1) * n

