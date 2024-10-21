make:
	g++ -o ./a.out ./src/main.cpp ./src/glad.c ./src/EBO.cpp ./src/Camera.cpp ./src/shaderClass.cpp ./src/stb/stb.cpp ./src/Texture.cpp ./src/VAO.cpp ./src/VBO.cpp -ldl -lglfw -I ./include

debug:
	g++ -g -O0 -o ./a.out ./src/main.cpp ./src/glad.c ./src/EBO.cpp ./src/Camera.cpp  ./src/shaderClass.cpp ./src/stb/stb.cpp ./src/Texture.cpp ./src/VAO.cpp ./src/VBO.cpp -ldl -lglfw -I ./include