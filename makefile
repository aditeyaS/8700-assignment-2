# Aditeya Srivastava (aditeys@clemson.edu)
# https://github.com/aditeyaS/8700-assignment-2

rotator:
	g++ Animal.cpp Zoo.cpp main.cpp -o zoo

clean:
	rm zoo *.pdf *.pgm *.ppm *.tar.gz

tarball:
	tar -czvf assignment2.tar.gz *.cpp *.h makefile inputfile