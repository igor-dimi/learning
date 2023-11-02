% solves the linear equation a * x + b = 0 for x
function x = linearfunction(a, b)
    if a ~= 0
        x = -b/a;
    elseif b == 0
        error('any x is solution')
    else
        error('no solution')
    end
end