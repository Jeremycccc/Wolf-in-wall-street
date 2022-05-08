FLAGS = -pedantic-errors -std=c+=11

GetInfo.o: GetInfo.cpp GetInfo.h playerInfo.h
	g++ -c GetInfo.cpp

Goodbye.o: Goodbye.cpp Goodbye.h playerInfo.h
	g++ -c Goodbye.cpp

Introduction.o: Introduction.cpp Introduction.h playerInfo.h
	g++ -c Introduction.cpp

LoadGameStatus.o: LoadGameStatus.cpp LoadGameStatus.h playerInfo.h
	g++ -c LoadGameStatus.cpp

NewsRoom.o: NewsRoom.cpp NewsRoom.h playerInfo.h
	g++ -c NewsRoom.cpp

SaveGameStatus.o: SaveGameStatus.cpp SaveGameStatus.h playerInfo.h
	g++ -c SaveGameStatus.cpp

StockMarket.o: StockMarket.cpp StockMarket.h playerInfo.h
	g++ -c StockMarket.cpp

Welcome_back.o: Welcome_back.cpp Welcome_back.h playerInfo.h
	g++ -c Welcome_back.cpp

main.o: main.cpp GetInfo.h Goodbye.h Introduction.h LoadGameStatus.h NewsRoom.h SaveGameStatus.h StockMarket.h Welcome_back.h playerInfo.h
	g++ -c main.cpp -pthread

main:  main.o GetInfo.o Goodbye.o Introduction.o LoadGameStatus.o NewsRoom.o SaveGameStatus.o StockMarket.o Welcome_back.o
	g++ $^ -o $@ -pthread

clean: 
	rm *.o

.PHONY: clean
