#include <iostream>

#include <glad/glad.h> //glad needs to be included before glfw
#include <GLFW/glfw3.h>


// Create a window
int main() {
	// Initialize the GLFW basic environment
	glfwInit();
	// Set the GLFW Major version to 3.4
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	// Set the GLFW Minor version to 3.6
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	// Set the GLFW profile to core
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Create a window object
	GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
	// Set the window to the current context
	glfwMakeContextCurrent(window);

	// Execute window loop
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents(); //Receive events
	}
	// Terminate the GLFW environment
	glfwTerminate();
	return 0;
}