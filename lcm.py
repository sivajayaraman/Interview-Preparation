print("Enter the numbers to compute LCM")
num1=input()
num2=input()
maxi=0
lcm=1
i=1
if num1>num2:
	maxi=num1
else:
    maxi=num2
while  1:
	if maxi%num1==0 and maxi%num2==0:
		lcm=maxi
		break
	maxi=maxi+1	
print("The LCM of {0} and {1} is {2}.".format(num1,num2,maxi))		