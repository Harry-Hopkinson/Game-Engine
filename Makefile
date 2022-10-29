files = ${wildcard src/*.cpp} ${wildcard src/*.hpp}
include = -I./SDL2/include -I.
libraries = -L./SDL2/lib
version = -std=c++20

run:
	g++ ${version} ${files} ${include} ${libraries} -lmingw32 -lSDL2main -lSDL2 -o bin/main
	./bin/main.exe