import os
path = "/home/jonyroy/Desktop/MyCodeLibrary/LIGHTOJ"


def returnInteger(str):
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
    return s 


li=os.listdir(path)
uva='Lightoj-'
for x in xrange(len(li)):
    
    if li[x].endswith(".cpp") :
    	s=returnInteger(li[x])
    	if len(s)>1:
    	   s1=path+'/'+li[x]
    	   s2=path+'/'+uva+s+'.cpp'
    	   os.rename(s1,s2)
    	   
    elif li[x].endswith(".c") :
        s=returnInteger(li[x])
        if len(s)>1:
           s1=path+'/'+li[x]
           s2=path+'/'+uva+s+'.c'
           os.rename(s1,s2)
for x in xrange(len(li)):
	if li[x].endswith('.o') :
		s1=path+'/'+li[x]
		os.remove(s1)
     