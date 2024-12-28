#pragma once

/* libbase library by michschn@gmail.com
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

// This is your main class that users will import into their application
class Libbase
{
public:
  /**
   * Constructor
   */
  Libbase();

  /**
   * Example method
   */
  void begin();

  /**
   * Example method
   */
  void process();

private:
  /**
   * Example private method
   */
  void doit();
};
