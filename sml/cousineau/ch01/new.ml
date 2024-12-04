(* 1.4.2 Function Expressions *)

let sq = (fun x -> x*.x);;

(* 1.4.3 Higher Order Function Expressions *)

let h = (fun f -> (fun x -> f(x) /. x));;
let k = h(sin);;
let h = fun f x -> f(x) /. x;;

(* 1.4 Exercises *)

(* 1.2 derivative *)
let der = fun (f, dx) x -> (f(x +. dx) -. f(x))/. dx

(* 1.3 smoothing function *)
let smth = fun (f, dx) x -> (f(x -. dx) +. f(x) +. f(x +. dx)) /. 3.

(* 1.4.4 Recursive Functions *)

let rec fac(n) = 
    if n = 0 then 1 
    else n * fac(n - 1);;

let rec pow(a, n) =
    if n = 0 then 1.
    else a *. pow(a, n - 1);;

let rec pow2(a, n) = 
    if n = 0 then 1.
    else
        if n mod 2 = 0 then pow2(a, n/2) ** 2.
        else a *. pow(a, n/2) ** 2.;;

let rec gcd(x, y) = 
    if y = 0 then x
    else gcd(y, x mod y);;

(* 1.4.5 Mutually recursive Functions *)

let rec even n = if n = 0 then true else odd (n - 1)
    and odd n = if n = 0 then false else even (n - 1);;

(* 1.4.6 Functions defined by case  - Pattern Matching*)

let neg = function true -> false
            | false -> true;;

(* let xor = function (false, false) -> false
                 | (false, true) -> true
                 | (true, false) -> true
                 | (true, true) -> false;; *)

let xor = function (false, x) -> x
                 | (true, x) -> neg x

let rec fact = function 0 -> 1
                      | n -> n * fact(n - 1);;

let rec fib = function
    0 -> 1 |
    1 -> 1 |
    n -> fib(n - 1) + fib(n - 2);;

let conj = function
    (true, true) -> true |
     _ -> false;;