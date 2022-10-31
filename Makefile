files = ${wildcard src/*.cpp} ${wildcard src/*.hpp}
include = -I./SDL2/include -I. -I./SDL2_TTF/include
libraries = -L./SDL2/lib -L./SDL2_TTF/lib
linker = -lmingw32 -lSDL2main -lSDL2 -lwinmm -lSDL2_ttf 

run:
	g++ -o bin/main ${files} ${include} ${libraries} ${linker}
	./bin/main.exe