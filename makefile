main: Funkcijos.o
	c++ darbasv1.2.cpp Funkcijos.o -o ats -O2 

funkcijos:
	c++ -o3 -c Funkcijos.cpp

clean:
	rm *.o 