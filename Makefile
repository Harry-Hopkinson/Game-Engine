files = ${wildcard src/*.cpp} ${wildcard src/*.hpp}
include = -I./SDL2/include -I. -I./SDL2_TTF/include
libraries = -L./SDL2/lib -L./SDL2_TTF/lib
linker = -lmingw32 -lSDL2main -lSDL2 -lwinmm
version = -std=c++20

run:
	g++ -o bin/main ${version} ${files} ${include} ${libraries} ${linker}
	cd bin && main.exe