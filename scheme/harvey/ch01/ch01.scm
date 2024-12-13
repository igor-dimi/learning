(require "../simply.rkt")

(define (factorial n)
    (if (= n 0)
    1
    (* n (factorial (- n 1)))))

