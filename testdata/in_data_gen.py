#author: yusuf shakeel
#date: 09-july-2014 wednesday

filename = "in10.dat"
noOfByte = 10
myfile = open(filename,'w')
for i in range(noOfByte):
	myfile.write("0")
myfile.close()
