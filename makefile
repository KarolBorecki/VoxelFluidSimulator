make:
	g++ -o ./a.out ./src/main.cpp ./src/glad.c -ldl -lglfw -I ./include

debug:
	g++ -g -O0 -o ./a.out ./src/main.cpp ./src/glad.c -ldl -lglfw -I ./include