str = 'Ba874nglad587esh022144(88)'
s=''
t=False
for x in xrange(len(str)):
	
	while str[x].isdigit():
		s+=str[x]
		x=x+1
		#print x
		t=True
	if t==True:
		break
if t == True :
    print s
