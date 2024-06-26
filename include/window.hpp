#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Graphics {
    class Window {
        public:
            int width;
            int height;
            char* windowName;

            GLFWwindow* window;

            Window(int w, int h, char* name);
            ~Window();

            bool shouldClose();
            void update();
            void initWindow();
            void clear(float red, float green, float blue);
    };

}
    