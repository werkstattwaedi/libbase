/* libbase library by michschn@gmail.com
 */

#include "libbase.h"

/**
 * Constructor.
 */
Libbase::Libbase()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void Libbase::begin()
{
    // initialize hardware
    Serial.println("called begin");
}

/**
 * Example method.
 */
void Libbase::process()
{
    // do something useful
    Serial.println("called process");
    doit();
}

/**
* Example private method
*/
void Libbase::doit()
{
    Serial.println("called doit");
}
