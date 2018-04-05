# This project is about finding whether the given string containing o and 1 inly is uniform or not by finding the same character at place 
# not greater than 2 from thee starting point

t=int(input())# no. of test case
for _ in range(t):# input the string according to no. of test case
    s=input()
    
    
    s = s + s[0]
    count=0# initialise the count to be equal 0
    
    for i in range(len(s)-1):# index starts from 0 thats why subtract 1
        x=s[i]
        j=i+1
        y=s[j]
        if x != y:
            count=count+1
        
    if count<=2:# since for uniform same no.should repeat at max pos 2
        print("uniform")
    else:
        print("non-uniform") 


'''
output
2
10000001
non-uniform (since 1 repeat again at position 8) 
00000000 
uniform (since 0 repeat at position 0 only)
'''

