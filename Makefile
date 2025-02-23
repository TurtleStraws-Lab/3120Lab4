all: TOH

TOH: TOH.cpp
	g++ -o TOH TOH.cpp

clean:
	rm -f TOH

