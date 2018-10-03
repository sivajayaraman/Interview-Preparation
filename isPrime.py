def isPrime(n):
	flag=0
	for i in range(2,n/2+1):
		if n%i==0:
			flag=1
			break
	if flag==0 and n!=1:
		print("The number {0} is Prime.".format(n))
	else:
		print("The Number {0} is not Prime".format(n))			
num=input("Enter the number to check whether it is Prime or not:")
isPrime(num)