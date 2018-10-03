import math
num=input("Enter the number:")
if num>=0:
	print("Square Root of {0} is {1}.".format(num,math.sqrt(num)))
else:
    print("Square Root of {0} is {1}i.".format(num,math.sqrt(-num)))	