t=int(input())
if (t>=1 and t<=1000):
	a=input().split(" ")
	b=input().split(" ")
	s = [int(x) for x in a]
	dataStruc = {'1':[],'2':[],'3':[]}
	i=0
	for i in range(t-1):
		if (s[i]>100000):
			exit(1)
		else:
			if b[i]=='1':
				dataStruc['1'].append(int(a[i]))
			elif b[i]=='2':
				dataStruc['2'].append(int(a[i]))
			elif b[i]=='3':
				dataStruc['3'].append(int(a[i]))
			else:
				print("enter valid coin")
				exit(1)	
	if len(dataStruc["1"])==0 and len(dataStruc["2"])==0:
		print(min(dataStruc["3"]))
	elif len(dataStruc["3"])==0:
		print(min(dataStruc["1"]) + min(dataStruc["2"]))
	else:
		if (min(dataStruc["1"]) + min(dataStruc["2"])) < min(dataStruc["3"]):
			print(min(dataStruc["1"]) + min(dataStruc["2"]))
		else:
			print(min(dataStruc["3"]))