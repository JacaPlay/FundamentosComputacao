//C�digo fonte do Fragment Shader (em GLSL):
#version 400

uniform vec4 inputColor;
out vec4 color;

void main()
{
	color = inputColor;
}