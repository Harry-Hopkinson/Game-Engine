files = ${wildcard src/*.cpp} ${wildcard src/*.hpp}
include = -I./SDL2/include -I.
libraries = -L./SDL2/lib

run:
	g++ -o bin/main ${files} ${include} ${libraries} -lmingw32 -lSDL2main -lSDL2 -lwinmm
	./bin/main.exe