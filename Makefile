files = ${wildcard src/*.cpp} ${wildcard src/*.hpp}
include = -I./SDL2/include -I. -I./SDL2_Mixer/include
libraries = -L./SDL2/lib -L./SDL2_Mixer/lib
version = -std=c++20

run:
	g++ ${version} ${files} ${include} ${libraries} -lmingw32 -lSDL2main -lSDL2 -lSDL2_mixer -lSDL2_mixer -o bin/main
	./bin/main.exe