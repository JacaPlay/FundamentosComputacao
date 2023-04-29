// Código fonte do Vertex Shader (em GLSL)
#version 400

layout (location = 0) in vec3 position;

//Adiciona esse novo por conta do Atributo Cor
layout (location = 1) in vec3 vertex_color;

//Pra poder enviar os parâmetros novos, criamos uma variável "out"
out vec4 finalColor;

// Pra matriz funcionar
uniform mat4 projection;

void main()
{
	//...pode ter mais linhas de código aqui!
	//gl_Position = vec4(position.x, position.y, position.z, 1.0);
	
	// Pra matriz
	gl_Position = projection * vec4(position, 1.0);

	//Adiciona aqui pra funcionar
	finalColor = vec4(vertex_color.r, vertex_color.g, vertex_color.b, 1.0);
}