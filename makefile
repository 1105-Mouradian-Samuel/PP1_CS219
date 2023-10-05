PP1: driver.o
	g++ -o PP1 driver.o

driver.o: driver.cpp
	g++ -c driver.cpp

clean:
	rm *.o PP1