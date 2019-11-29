#version 300 es
precision mediump float;			
uniform sampler2D Texture0;
// PSInput
in vec2 UV;
// PSOutput
out vec4 FragColor;
void main()
{
	FragColor = texture(Texture0, UV);
}
