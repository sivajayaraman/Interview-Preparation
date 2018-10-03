import random
start=input("Enter the Starting number:")
end=input("Enter the ending number:")
if start>end:
	temp=end
	end=start
	start=temp
print("A random number between {0} and {1} is {2}.".format(start,end,random.randint(start,end)))