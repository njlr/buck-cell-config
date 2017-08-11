#include <string>
#include <mathutils/about.hpp>

#ifdef IS_INSIDE_CELL
const bool isInsideCell = true;
#else
const bool isInsideCell = false;
#endif

#ifdef IS_OUTSIDE_CELL
const bool isOutsideCell = true;
#else
const bool isOutsideCell = false;
#endif

std::string about() {
  return std::string("mathutils. ") + "inside cell? " + std::to_string(isInsideCell) +
    " outside cell? " + std::to_string(isOutsideCell);
}
