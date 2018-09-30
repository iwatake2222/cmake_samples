#include <stdio.h>
#include <GLFW/glfw3.h>

int main()
{
	GLFWwindow* window;
	
	glfwInit();
	window = glfwCreateWindow(640, 480, "Test", NULL, NULL);

	while (!glfwWindowShouldClose(window)) {
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}
