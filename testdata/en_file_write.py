#author: yusuf shakeel
#date: 09-july-2014 wednesday

from random import randint
myfile = open('in250000int.dat','w')
myfile.write("250000 3\n")
for i in range(250000):
	myfile.write(str(randint(0,1000000000)))
	myfile.write("\n")
myfile.close()
