% solves the quadratic equation x^2 + px + q = 0
function [x1, x2] = quadraticEq(p, q)
    if p*p - 4*q < 0
        error('no solution')
    end
    x1 = (-p - (p*p - 4*q)^0.5)/2
    x2 = (-p + (p*p - 4*q)^0.5)/2