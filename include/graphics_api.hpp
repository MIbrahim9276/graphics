#pragma once

namespace Graphics {
    // Boilerplate (Don't mind it)
    struct Texture {};
    struct Shader {};
    struct Buffer {};
    struct VertexArray {};

    class GraphicsApi {
        virtual void init();
        virtual Texture createTexture(char* path);
        virtual Shader createShader(char* vertexSource, char* fragmentSource);
        virtual Buffer createBuffer(void* data);
        virtual VertexArray createVertexArray();
        virtual void Draw(VertexArray vertexArray, Shader shader, Texture texture);
    };
}