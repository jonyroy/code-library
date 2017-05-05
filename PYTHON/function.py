def fibonnacci(n):
    list=[0,1]
    for x in range(2,n):
        list.append(list[x-1]+list[x-2])
    return list

def PrimeNumber():
    li=[0]*101
    for i in xrange(3,10,2):
        if li[i]==0:
           j=i*i
           while j<=100:
             li[j]=1
             j+=i
    list=[]
    for x in xrange(3,100,2):
        if li[x]==0:
           list.append(x)
    #print list
    return list
#n=input()
def BubbleSort(arr):
	n=len(arr)
	print n
	for i in xrange(n):
		for j in xrange(n-i-1):
			if arr[j]>arr[j+1]:
				arr[j],arr[j+1]=arr[j+1],arr[j]
				print arr
	return arr

arr=BubbleSort([8,9,7,0,10])
print arr
#fn=fibonnacci(10)
#print fn 
#pn=PrimeNumber()
#print pn
