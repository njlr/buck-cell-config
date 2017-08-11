#include <string>
#include <mathutils/about.hpp>

#ifdef IS_INSIDE_CELL
const bool isInsideCell = true;
#else
const bool isInsideCell = false;
#endif

std::string about() {
  return "mathutils. inside cell? " + std::to_string(isInsideCell);
}
