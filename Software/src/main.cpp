#include <Arduino.h>
#include "system.h"
#include "odometry.h"

void setup()
{
  

    init_system();
    robot(get_side(), 1);
    while(1);
}


void loop()
{  
    
}
