def primeInRange(start,end):
	print("The Prime numbers in the range({0},{1}) are ".format(start,end))
	for n in range(start,end):
		flag=0
		for i in range(2,n/2+1):
			if n%i==0:
				flag=1
				break		
		if flag==0 and n!=1:
			print(n)			
start=input("Enter the starting number:")
end=input("Enter the ending number:")
primeInRange(start,end)