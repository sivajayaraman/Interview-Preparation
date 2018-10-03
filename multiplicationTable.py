num=input("Enter the Required table:")
print("Enter the range:")
start=input()
end=input()
i=1
print("The required table is")
for i in range(start,end+1):
	print("{0} x {1} = {2}".format(i,num,i*num))