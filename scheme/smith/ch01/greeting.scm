(define (greeting)
    (define name)
    (display "Your (first) name please: ")
    (set! name (read))
    (display "Hello ")
    (display name)
    (display "!"))

(define (factorial max)
    (if (zero? max)
        1
        (* max
            (factorial (- max 1)))))