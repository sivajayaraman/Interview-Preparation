import math
a=input("Enter Side A:")
b=input("Enter Side B:")
c=input("Enter Side C:")
s=(a+b+c)/2
area=s*(s-a)*(s-b)*(s-c)
print("Area of triangle is {0} sq units.".format(math.sqrt(area)))