%computes triangle numbers
function t = triangles(n)
    for i = 1:n; t(i) = i * (i + 1)/2; end