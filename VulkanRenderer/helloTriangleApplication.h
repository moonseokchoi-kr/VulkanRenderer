#pragma once
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <vulkan//vulkan.h>


#include <iostream>
#include <stdexcept>
#include <cstdlib>
class HelloTriangleApplication
{
public:
	void run()
	{
		initVulkan();
		mainLoop();
		cleanup();
	}
private:
	void initWindow();
	void initVulkan();
	void mainLoop();
	void cleanup();


private:
	const uint32_t WIDTH = 800;
	const uint32_t HEIGHT = 600;
	GLFWwindow* window;
};

