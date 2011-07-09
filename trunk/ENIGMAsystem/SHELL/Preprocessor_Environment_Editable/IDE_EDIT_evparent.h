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
  struct event_parent: object_collisions
  {
    virtual void    myevent_alarm() { } // No default Alarm ... code.
    virtual variant myevent_animationend() { return 0; } // No default Animation End code.
    virtual variant myevent_boundary() { return 0; } // No default Intersect Boundary code.
    virtual void    myevent_collision() { } // No default obj_83 code.
    virtual variant myevent_create() { return 0; } // No default Create code.
    virtual variant myevent_draw()
    {
  if (visible && sprite_index != -1) draw_sprite_ext(sprite_index,image_index,x,y,image_xscale,image_yscale,image_angle,image_blend,image_alpha);image_index = fmod(image_index + image_speed, sprite_get_number(sprite_index));
    return 0;
    }
    virtual variant myevent_globalleftbutton() { return 0; } // No default Global Left Button code.
    virtual variant myevent_globalleftrelease() { return 0; } // No default Global Left Release code.
    virtual variant myevent_globalmiddlebutton() { return 0; } // No default Global Middle Button code.
    virtual variant myevent_globalrightbutton() { return 0; } // No default Global Right Button code.
    virtual void    myevent_keyboard() { } // No default Keyboard <key40> code.
    virtual void    myevent_keyrelease() { } // No default Release <key13> code.
    virtual variant myevent_outsideroom() { return 0; } // No default Outside Room code.
    virtual variant myevent_step()
    {
  enigma::propagate_locals(this);
    return 0;
    }
    //virtual void unlink() {} // This is already declared at the super level.
    event_parent() {}
    event_parent(unsigned x, int y): object_collisions(x,y) {}
  };
}
