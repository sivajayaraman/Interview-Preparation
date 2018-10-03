print("Enter the numbers to compute HCF")
num1=input()
num2=input()
mini=0
hcf=1
i=1
if num1>num2:
	mini=num2
else:
    mini=num1
while i<=mini:
	if num1%i==0 and num2%i==0:
		hcf=i
	i=i+1	
print("The HCF of {0} and {1} is {2}.".format(num1,num2,mini))		