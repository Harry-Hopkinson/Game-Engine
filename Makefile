files = ${wildcard src/*.cpp} ${wildcard src/*.hpp}
include = -I./SDL2/include -I.
libraries = -L./SDL2/lib

run:
	g++ ${files} ${include} ${libraries} -Wall -lmingw32 -lSDL2main -lSDL2 -o bin/main
	./bin/main.exe