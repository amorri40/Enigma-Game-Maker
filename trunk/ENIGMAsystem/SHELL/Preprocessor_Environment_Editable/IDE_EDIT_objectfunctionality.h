/********************************************************************************\
**                                                                              **
**  Copyright (C) 2008 Josh Ventura                                             **
**                                                                              **
**  This file is a part of the ENIGMA Development Environment.                  **
**                                                                              **
**                                                                              **
**  ENIGMA is free software: you can redistribute it and/or modify it under the **
**  terms of the GNU General Public License as published by the Free Software   **
**  Foundation, version 3 of the license or any later version.                  **
**                                                                              **
**  This application and its source code is distributed AS-IS, WITHOUT ANY      **
**  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS   **
**  FOR A PARTICULAR PURPOSE. See the GNU General Public License for more       **
**  details.                                                                    **
**                                                                              **
**  You should have recieved a copy of the GNU General Public License along     **
**  with this code. If not, see <http://www.gnu.org/licenses/>                  **
**                                                                              **
**  ENIGMA is an environment designed to create games and other programs with a **
**  high-level, fully compilable language. Developers of ENIGMA or anything     **
**  associated with ENIGMA are in no way responsible for its users or           **
**  applications created by its users, or damages caused by the environment     **
**  or programs made in the environment.                                        **
**                                                                              **
\********************************************************************************/

//This file was generated by the ENIGMA Development Environment.
//Editing it is a sign of a certain medical condition. We're not sure which one.

namespace enigma
{
  callable_script callable_scripts[] = {
  };
  
  void constructor(object_basic* instance_b)
  {
    //This is the universal create event code
    object_locals* instance = (object_locals*)instance_b;
    
    instance->xstart = instance->x;
    instance->ystart = instance->y;
    instance->xprevious = instance->x;
    instance->yprevious = instance->y;

    instance->gravity=0;
    instance->gravity_direction=270;
    instance->friction=0;
    
    
    if(instance->sprite_index!=-1)
    {
      instance->sprite_xoffset = sprite_get_xoffset(instance->sprite_index);
      instance->sprite_yoffset = sprite_get_yoffset(instance->sprite_index);
      
      instance->bbox_left    =   sprite_get_bbox_left(instance->sprite_index)   - instance->sprite_xoffset;
      instance->bbox_right   =  sprite_get_bbox_right(instance->sprite_index)   - instance->sprite_xoffset;
      instance->bbox_top     =   sprite_get_bbox_top (instance->sprite_index)   - instance->sprite_yoffset;
      instance->bbox_bottom  =   sprite_get_bbox_bottom(instance->sprite_index) - instance->sprite_xoffset;
      //instance->sprite_height =  sprite_get_height(instance->sprite_index); //TODO: IMPLEMENT THESE AS AN IMPLICIT ACCESSOR
      //instance->sprite_width  =  sprite_get_width(instance->sprite_index);  //TODO: IMPLEMENT THESE AS AN IMPLICIT ACCESSOR
      instance->image_number  =  sprite_get_number(instance->sprite_index); //TODO: IMPLEMENT THESE AS AN IMPLICIT ACCESSOR
    }
    
    instance->image_alpha = 1.0;
    instance->image_angle = 0;
    instance->image_blend = 0xFFFFFF;
    instance->image_index = 0;
    instance->image_single = -1;
    instance->image_speed  = 1;
    instance->image_xscale = 1;
    instance->image_yscale = 1;
    
instancecount++;
    instance_count++;
  }
}
