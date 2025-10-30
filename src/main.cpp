#include <glfw_initialization.h>

using namespace std;
using namespace gsl;
int32_t main(int32_t argc, zstring *argv) {
  const veng::GlfwInitialization _glfw;

  gsl::not_null window = glfwCreateWindow(800, 600, "Vulkan Engine!", nullptr, nullptr);
  gsl::final_action _cleanup_window([window]() { glfwDestroyWindow(window);});

  while (!glfwWindowShouldClose(window)) {
    glfwPollEvents();
  }

	return EXIT_SUCCESS;
}
