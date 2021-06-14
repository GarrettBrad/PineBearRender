#include "Application.h"

#include <gl/glew.h>
#include <glfw/glfw3.h>

PINE_NAMESPACE

struct appData
{
	GLFWwindow* Wnd;
	int width, height;
};

static appData s_Data;

Application::Application()
{
	// TEST CODE
	glfwInit();

	s_Data.width = 500;
	s_Data.height = 500;

	s_Data.Wnd = glfwCreateWindow(s_Data.width, s_Data.height, "TestWindow", NULL, NULL);
	
	glfwMakeContextCurrent(s_Data.Wnd);
}

Application::~Application()
{
}


void Application::Run()
{
	while (!glfwWindowShouldClose(s_Data.Wnd)) {
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(s_Data.Wnd);

		glfwPollEvents();
	}
}

PINE_NAMESPACE_END