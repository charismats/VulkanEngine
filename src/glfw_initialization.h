#pragma once
#include <GLFW/glfw3.h>
#include <cstdlib>
namespace veng {
struct GlfwInitialization {
 public:
  GlfwInitialization();
  ~GlfwInitialization();

  GlfwInitialization(const GlfwInitialization&) = delete;
  GlfwInitialization& operator=(const GlfwInitialization&) = delete;
};

}  // namespace veng
