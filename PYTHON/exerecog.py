import os
path = "/home/jonyroy/Desktop/UVA"
for x in os.listdir(path):
	if os.path.isfile(x) and os.access(x,os.X_OK):
		print x 