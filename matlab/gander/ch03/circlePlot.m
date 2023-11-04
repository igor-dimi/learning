clear, clf
r = input("radius?\n");
cx = input("x coordinate of the center?\n");
cy = input("y coordinate of the center?\n");
C = [cx, cy];
t = linspace(0, 2*pi, 200);
axis([-abs(cx) - 2*r, abs(cx) + 2*r, -abs(cy) - 2*r, abs(cy) + 2*r])
axis equal
hold
plot(cx + r*cos(t), cy + r*sin(t))
plot(cx, cy, 'x')