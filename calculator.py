print("Select Operation")
print("   1.Add")
print("   2.Subtract")
print("   3.Multiply")
print("   4.Divide")
print("   5.Square Root")
print("   6.Exit")
choice=0
import math
while  choice!=6:
	choice=input("Enter your choice :")
	if choice==1:
		num1=input("Enter the number 1:")
		num2=input("Enter the number 2:")
		print("Sum of the numbers :{0}".format(num1+num2))
	elif choice==2:
		num1=input("Enter the number 1:")
		num2=input("Enter the number 2:")
		if num1 > num2:
			print("The difference between numbers = {0}.".format(num1-num2))
		else:
			print("The difference between numbers = {0}.".format(num2-num1))
	elif choice==3:
		num1=input("Enter number 1:")
		num2=input("Enter number 2:")
		print("The product of the numbers is {0}.".format(num1*num2))             
	elif choice==4:
		num1=input("Enter divisor:")
		num2=input("Enter dividend:")
		print("The quotient is {0} ".format(num1/num2))
		print("The remainder is {0} ".format(num1%num2)) 
	elif choice==5:
		num=input("Enter the number:")
		if num>=0:
			print("Square Root of {0} is {1}.".format(num,math.sqrt(num)))
		else:
			print("Square Root of {0} is {1}i.".format(num,math.sqrt(-num))) 
	else:
		print("Good bye!")