% solves the linear equation a * x + b = 0 for x

a = input('a=?');
b = input('b=?');
if a ~= 0
    x = -b/a
elseif b == 0
    disp('any x is solution')
else
    disp('no solution')
end