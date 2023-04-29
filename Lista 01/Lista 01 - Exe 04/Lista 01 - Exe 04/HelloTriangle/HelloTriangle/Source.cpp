
// 4. Analise o codigo fonte do projeto Hello Triangle. Localize e relacione os conceitos de shaders, VBOs e VAO apresentados ate entao. Nao precisa entregar nada neste exercicio.

	
// Conceitos de Shaders

const GLchar* vertexShaderSource = "#version 400\n"
"layout (location = 0) in vec3 position;\n"
"void main()\n"
"{\n"

"gl_Position = vec4(position.x, position.y, position.z, 1.0);\n"
"}\0";

const GLchar* fragmentShaderSource = "#version 400\n"
"uniform vec4 inputColor;\n"
"out vec4 color;\n"
"void main()\n"
"{\n"
"color = inputColor;\n"
"}\n\0";

// VAO e VBO

GLfloat vertices[] = {

	//    x     y     z
		-0.5, -0.8,  0.0, // v0
		 0.5, -0.8,  0.0, // v1
		 0.0,  0.0,  0.0, // v2

		 // Segundo Triângulo

			 -0.5,  0.8,  0.0, // v3
			  0.5,  0.8,  0.0, // v4
			  0.0,  0.0,  0.0, // v5       
};

GLuint VBO, VAO;


glGenBuffers(1, &VBO);

glBindBuffer(GL_ARRAY_BUFFER, VBO);

glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);


glGenVertexArrays(1, &VAO);
 
glBindVertexArray(VAO);

glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
glEnableVertexAttribArray(0);

