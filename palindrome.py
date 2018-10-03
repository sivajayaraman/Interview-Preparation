string=raw_input("Enter the string to Check whether it is Palindrome:")
string=string.casefold()
rev_string=reversed(string)
print("The reversed string is "+rev_string)
if list(string)==list(rev_string):
	print("The String is a Palimdrome!")
else:
	print("The sting is not a Palindrome!")	