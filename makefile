make:
    g++ -o ./a.out ./src/hello_triangle.cpp ./src/glad.c -ldl -lglfw -I ./include

clean:
    rm ./a.out