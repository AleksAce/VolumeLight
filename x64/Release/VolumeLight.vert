#version 330
layout (location = 0) in vec3 vPosition;
layout (location = 1) in vec2 vertUV;
layout (location = 2) in vec3 vertNormals;




void main()
{
	gl_Position= vec4(vPosition,1.0);

}