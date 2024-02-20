#include <iostream>

#include <glad/glad.h> //glad needs to be included before glfw
#include <GLFW/glfw3.h>

// Declare a function to be called when the window is resized
void frameBufferSizeCallback(GLFWwindow* window, int width, int height)
{
	std::cout << "Window resized to " << width << "x" << height << std::endl;
}

// Declare a function to be called when the key is pressed
void keyCallBack(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	std::cout << "Key pressed: " << key << std::endl;
	//std::cout << "Scancode: " << scancode << std::endl;
	std::cout << "Action: " << action << std::endl;
	std::cout << "Mods: " << mods << std::endl;
}

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

	// Set the frame buffer size callback
	glfwSetFramebufferSizeCallback(window, frameBufferSizeCallback);

	// Set the key callback
	glfwSetKeyCallback(window, keyCallBack);

// Load the OpenGL function pointers
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		return -1;
	}
	// Execute window loop
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents(); //Receive events
	}
	
	// Terminate the GLFW environment
	glfwTerminate();
	return 0;
}