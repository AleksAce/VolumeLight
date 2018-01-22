#pragma once
#include <stdint.h>

#include "Common.h"
//IMPORTANT: This is the interface that the game supplies to the OS

//INPUT
struct Vertex
{
	std::vector<glm::vec3> position;
	std::vector<glm::vec2> UV;
	std::vector<glm::vec3> Normals;
};
struct VertexIndex
{
	std::vector<int> vertexindices;
	std::vector<int> uvindices;
	std::vector<int> normalindices;
};
struct Model
{
	Vertex vert;
	VertexIndex index;
	glm::vec3 WorldPos;
	int Width;
	int Heigth;

	GLuint Texture;

};
struct button_state
{
	bool isDown;
};
struct controller_input
{
	bool Connected;
	glm::vec2 MousePos;

	union
	{
		button_state Buttons[12];
		struct
		{
			button_state CLICK_LEFT;
			button_state CLICK_RIGHT;
			button_state CLICK_MIDDLE;

			button_state UP;
			button_state DOWN;
			button_state LEFT;
			button_state RIGHT;

			button_state CAMERA_FORWARD;
			button_state CAMERA_BACKWARD;
			button_state CAMERA_STRAFE_LEFT;
			button_state CAMERA_STRAFE_RIGHT;

			button_state APP_QUIT;
		};
	};
};
struct game_input
{
	controller_input Controllers[3];
};

//TIMING
#define MONITOR_REFRESH 60
struct ace_timer
{
	long global_oldtime;
	long global_newtime;
	long oldtime;
	long newtime;
	long MSElapsed;

	int FPS = 0;
	//must #define MONITOR_REFRESH
	const double DesiredMiliseconds = 1000.0 / MONITOR_REFRESH;
};
//MEMORY

//GAME STATE
struct game_state
{
	Model Model1;
	Model Plane;
	Model VolumeLightQuad;
};