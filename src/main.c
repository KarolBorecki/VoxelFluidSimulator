#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

const uint16_t WIDTH = 800;
const uint16_t HEIGHT = 600;

int main () {
    glfwInit();

    // konfiguracja - wersja OpenGL 4.6, profil CORE
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow *window = glfwCreateWindow(HEIGHT, WIDTH, "window", nullptr, nullptr);
    if (window == nullptr) {
        std::cerr << "Error creating window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    gladLoadGL();
    glViewport(0, 0, HEIGHT, WIDTH);
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f); // Ustawiamy kolor na jaki ma być czyszczony bufor koloru
    glClear(GL_COLOR_BUFFER_BIT); // Czyścimy bufor koloru
    glfwSwapBuffers(window); // Zamieniamy bufory

    while(!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}