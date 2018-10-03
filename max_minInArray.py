arr=[]
n=input("Enter the size of Array:")
print("Enter array elements:")
for i in range(0,n):
	arr.append(input())
maxi=arr[0]
mini=arr[0]
for i in range(1,n):
	if arr[i]>maxi:
		maxi=arr[i]
	if arr[i]<mini:
	    mini=arr[i]	
print("The Maximum Element in the Array is {0}.".format(maxi))
print("The Minimum Element in the Array is {0}.".format(mini))