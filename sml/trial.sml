val x = 1;
fun fact (0 : int) : int = 1
  | fact (n : int) : int = n * fact (n - 1)