#include <precomp.h>
#include <GLFW/glfw3.h>
#include <glfw_initialization.h>
#include <glfw_monitor.h>
#include <glfw_window.h>

std::int32_t main(std::int32_t argc, gsl::zstring* argv) {
  const veng::GlfwInitialization _glfw;

  veng::Window window("Vulkan Engine", {800, 600});
  window.TryMoveToMonitor(0);  // if you want to change monitor

  while (!window.ShouldClose()) {
    glfwPollEvents();  // not window specific
  }

  return EXIT_SUCCESS;
}
