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

#include "../Universal_System/collisions_object.h"

// Script identifiers
const int move_lhr = 0;
const int move_mouse1 = 1;
const int move_towards_mouse = 2;
const int slide_towards_mouse = 3;

#define move_lhr(arguments...) _SCR_move_lhr(arguments)
#define move_mouse1(arguments...) _SCR_move_mouse1(arguments)
#define move_towards_mouse(arguments...) _SCR_move_towards_mouse(arguments)
#define slide_towards_mouse(arguments...) _SCR_slide_towards_mouse(arguments)


variant _SCR_move_lhr(variant argument0=0, variant argument1=0, variant argument2=0, variant argument3=0, variant argument4=0);
variant _SCR_move_mouse1();
variant _SCR_move_towards_mouse();
variant _SCR_slide_towards_mouse(variant argument0=0, variant argument1=0, variant argument2=0, variant argument3=0, variant argument4=0);

namespace enigma
{
  struct object_locals: event_parent
  {
    #include "../Preprocessor_Environment_Editable/IDE_EDIT_inherited_locals.h"

    object_locals() {}
    object_locals(unsigned x, int y): event_parent(x,y) {}
  };
  
  struct OBJ_obj_wall: object_locals
  {
    //Locals to instances of this object
    
    //Scripts called by this object
    
    
    // Self-tracking
      enigma::instance_list_iterator ENOBJ_ITER_me;
      enigma::inst_iter *ENOBJ_ITER_myobj2;
      enigma::inst_iter *ENOBJ_ITER_myevent_step;
      enigma::inst_iter *ENOBJ_ITER_myevent_draw;

    void unlink()
    {
      instance_iter_queue_for_destroy(ENOBJ_ITER_me->second); // Queue for delete while we're still valid
      enigma::unlink_main(ENOBJ_ITER_me); // Remove this instance from the non-redundant, tree-structured list.
      unlink_object_id_iter(ENOBJ_ITER_myobj2, 2);
      enigma::event_step->unlink(ENOBJ_ITER_myevent_step);
      enigma::event_draw->unlink(ENOBJ_ITER_myevent_draw);
    }
    
    OBJ_obj_wall(int enigma_genericconstructor_newinst_x = 0, int enigma_genericconstructor_newinst_y = 0, const int id = (enigma::maxid++)): object_locals(id, 2)
    {
      sprite_index = 0;
      visible = 1;
      solid = 1;
      ENOBJ_ITER_me = enigma::link_instance(this);
      ENOBJ_ITER_myobj2 = enigma::link_obj_instance(this, 2);
      ENOBJ_ITER_myevent_step = enigma::event_step->add_inst(this);
      ENOBJ_ITER_myevent_draw = enigma::event_draw->add_inst(this);
      x = enigma_genericconstructor_newinst_x, y = enigma_genericconstructor_newinst_y;
      enigma::constructor(this);
      myevent_create();
    }
    
    ~OBJ_obj_wall()
    {
      delete ENOBJ_ITER_myobj2;
      delete ENOBJ_ITER_myevent_step;
      delete ENOBJ_ITER_myevent_draw;
    }
  };
  
  struct OBJ_obj_bot: object_locals
  {
    //Locals to instances of this object
    var turned;
    
    //Scripts called by this object
    
    variant _SCR_move_lhr(variant argument0 = 0, variant argument1 = 0, variant argument2 = 0, variant argument3 = 0, variant argument4 = 0);
        variant myevent_create();
        variant myevent_alarm_0();
    
    
    // Grouped event bases
      void myevent_alarm()
      {
        myevent_alarm_0();
      }
    
    // Self-tracking
      enigma::instance_list_iterator ENOBJ_ITER_me;
      enigma::inst_iter *ENOBJ_ITER_myobj3;
      enigma::inst_iter *ENOBJ_ITER_myevent_create;
      enigma::inst_iter *ENOBJ_ITER_myevent_step;
      enigma::inst_iter *ENOBJ_ITER_myevent_draw;
      enigma::inst_iter *ENOBJ_ITER_myevent_alarm;

    void unlink()
    {
      instance_iter_queue_for_destroy(ENOBJ_ITER_me->second); // Queue for delete while we're still valid
      enigma::unlink_main(ENOBJ_ITER_me); // Remove this instance from the non-redundant, tree-structured list.
      unlink_object_id_iter(ENOBJ_ITER_myobj3, 3);
      enigma::event_create->unlink(ENOBJ_ITER_myevent_create);
      enigma::event_step->unlink(ENOBJ_ITER_myevent_step);
      enigma::event_draw->unlink(ENOBJ_ITER_myevent_draw);
      enigma::event_alarm->unlink(ENOBJ_ITER_myevent_alarm);
    }
    
    OBJ_obj_bot(int enigma_genericconstructor_newinst_x = 0, int enigma_genericconstructor_newinst_y = 0, const int id = (enigma::maxid++)): object_locals(id, 3)
    {
      sprite_index = 2;
      visible = 1;
      solid = 0;
      ENOBJ_ITER_me = enigma::link_instance(this);
      ENOBJ_ITER_myobj3 = enigma::link_obj_instance(this, 3);
      ENOBJ_ITER_myevent_create = enigma::event_create->add_inst(this);
      ENOBJ_ITER_myevent_step = enigma::event_step->add_inst(this);
      ENOBJ_ITER_myevent_draw = enigma::event_draw->add_inst(this);
      ENOBJ_ITER_myevent_alarm = enigma::event_alarm->add_inst(this);
      x = enigma_genericconstructor_newinst_x, y = enigma_genericconstructor_newinst_y;
      enigma::constructor(this);
      myevent_create();
    }
    
    ~OBJ_obj_bot()
    {
      delete ENOBJ_ITER_myobj3;
      delete ENOBJ_ITER_myevent_create;
      delete ENOBJ_ITER_myevent_step;
      delete ENOBJ_ITER_myevent_draw;
      delete ENOBJ_ITER_myevent_alarm;
    }
  };
  
  struct OBJ_obj_exit: object_locals
  {
    //Locals to instances of this object
    
    //Scripts called by this object
    
        variant myevent_collision_6();
        variant myevent_collision_3();
    
    
    // Grouped event bases
      void myevent_collision()
      {
        if (instance_number(6)) myevent_collision_6();
        if (instance_number(3)) myevent_collision_3();
      }
    
    // Self-tracking
      enigma::instance_list_iterator ENOBJ_ITER_me;
      enigma::inst_iter *ENOBJ_ITER_myobj4;
      enigma::inst_iter *ENOBJ_ITER_myevent_step;
      enigma::inst_iter *ENOBJ_ITER_myevent_draw;
      enigma::inst_iter *ENOBJ_ITER_myevent_collision;

    void unlink()
    {
      instance_iter_queue_for_destroy(ENOBJ_ITER_me->second); // Queue for delete while we're still valid
      enigma::unlink_main(ENOBJ_ITER_me); // Remove this instance from the non-redundant, tree-structured list.
      unlink_object_id_iter(ENOBJ_ITER_myobj4, 4);
      enigma::event_step->unlink(ENOBJ_ITER_myevent_step);
      enigma::event_draw->unlink(ENOBJ_ITER_myevent_draw);
      enigma::event_collision->unlink(ENOBJ_ITER_myevent_collision);
    }
    
    OBJ_obj_exit(int enigma_genericconstructor_newinst_x = 0, int enigma_genericconstructor_newinst_y = 0, const int id = (enigma::maxid++)): object_locals(id, 4)
    {
      sprite_index = 3;
      visible = 1;
      solid = 0;
      ENOBJ_ITER_me = enigma::link_instance(this);
      ENOBJ_ITER_myobj4 = enigma::link_obj_instance(this, 4);
      ENOBJ_ITER_myevent_step = enigma::event_step->add_inst(this);
      ENOBJ_ITER_myevent_draw = enigma::event_draw->add_inst(this);
      ENOBJ_ITER_myevent_collision = enigma::event_collision->add_inst(this);
      x = enigma_genericconstructor_newinst_x, y = enigma_genericconstructor_newinst_y;
      enigma::constructor(this);
      myevent_create();
    }
    
    ~OBJ_obj_exit()
    {
      delete ENOBJ_ITER_myobj4;
      delete ENOBJ_ITER_myevent_step;
      delete ENOBJ_ITER_myevent_draw;
      delete ENOBJ_ITER_myevent_collision;
    }
  };
  
  struct OBJ_obj_food: object_locals
  {
    //Locals to instances of this object
    
    //Scripts called by this object
    
        variant myevent_collision_3();
        variant myevent_collision_6();
    
    
    // Grouped event bases
      void myevent_collision()
      {
        if (instance_number(3)) myevent_collision_3();
        if (instance_number(6)) myevent_collision_6();
      }
    
    // Self-tracking
      enigma::instance_list_iterator ENOBJ_ITER_me;
      enigma::inst_iter *ENOBJ_ITER_myobj5;
      enigma::inst_iter *ENOBJ_ITER_myevent_step;
      enigma::inst_iter *ENOBJ_ITER_myevent_draw;
      enigma::inst_iter *ENOBJ_ITER_myevent_collision;

    void unlink()
    {
      instance_iter_queue_for_destroy(ENOBJ_ITER_me->second); // Queue for delete while we're still valid
      enigma::unlink_main(ENOBJ_ITER_me); // Remove this instance from the non-redundant, tree-structured list.
      unlink_object_id_iter(ENOBJ_ITER_myobj5, 5);
      enigma::event_step->unlink(ENOBJ_ITER_myevent_step);
      enigma::event_draw->unlink(ENOBJ_ITER_myevent_draw);
      enigma::event_collision->unlink(ENOBJ_ITER_myevent_collision);
    }
    
    OBJ_obj_food(int enigma_genericconstructor_newinst_x = 0, int enigma_genericconstructor_newinst_y = 0, const int id = (enigma::maxid++)): object_locals(id, 5)
    {
      sprite_index = 4;
      visible = 1;
      solid = 0;
      ENOBJ_ITER_me = enigma::link_instance(this);
      ENOBJ_ITER_myobj5 = enigma::link_obj_instance(this, 5);
      ENOBJ_ITER_myevent_step = enigma::event_step->add_inst(this);
      ENOBJ_ITER_myevent_draw = enigma::event_draw->add_inst(this);
      ENOBJ_ITER_myevent_collision = enigma::event_collision->add_inst(this);
      x = enigma_genericconstructor_newinst_x, y = enigma_genericconstructor_newinst_y;
      enigma::constructor(this);
      myevent_create();
    }
    
    ~OBJ_obj_food()
    {
      delete ENOBJ_ITER_myobj5;
      delete ENOBJ_ITER_myevent_step;
      delete ENOBJ_ITER_myevent_draw;
      delete ENOBJ_ITER_myevent_collision;
    }
  };
  
  struct OBJ_obj_player: object_locals
  {
    //Locals to instances of this object
    var dir;
    var xx;
    var yy;
    
    //Scripts called by this object
    
    variant _SCR_move_towards_mouse();
    variant _SCR_slide_towards_mouse(variant argument0 = 0, variant argument1 = 0, variant argument2 = 0, variant argument3 = 0, variant argument4 = 0);
        variant myevent_step();
    
    // Self-tracking
      enigma::instance_list_iterator ENOBJ_ITER_me;
      enigma::inst_iter *ENOBJ_ITER_myobj6;
      enigma::inst_iter *ENOBJ_ITER_myevent_step;
      enigma::inst_iter *ENOBJ_ITER_myevent_draw;

    void unlink()
    {
      instance_iter_queue_for_destroy(ENOBJ_ITER_me->second); // Queue for delete while we're still valid
      enigma::unlink_main(ENOBJ_ITER_me); // Remove this instance from the non-redundant, tree-structured list.
      unlink_object_id_iter(ENOBJ_ITER_myobj6, 6);
      enigma::event_step->unlink(ENOBJ_ITER_myevent_step);
      enigma::event_draw->unlink(ENOBJ_ITER_myevent_draw);
    }
    
    OBJ_obj_player(int enigma_genericconstructor_newinst_x = 0, int enigma_genericconstructor_newinst_y = 0, const int id = (enigma::maxid++)): object_locals(id, 6)
    {
      sprite_index = 2;
      visible = 1;
      solid = 0;
      ENOBJ_ITER_me = enigma::link_instance(this);
      ENOBJ_ITER_myobj6 = enigma::link_obj_instance(this, 6);
      ENOBJ_ITER_myevent_step = enigma::event_step->add_inst(this);
      ENOBJ_ITER_myevent_draw = enigma::event_draw->add_inst(this);
      x = enigma_genericconstructor_newinst_x, y = enigma_genericconstructor_newinst_y;
      enigma::constructor(this);
      myevent_create();
    }
    
    ~OBJ_obj_player()
    {
      delete ENOBJ_ITER_myobj6;
      delete ENOBJ_ITER_myevent_step;
      delete ENOBJ_ITER_myevent_draw;
    }
  };
  
  struct OBJ_obj_feeder: object_locals
  {
    //Locals to instances of this object
    var xx;
    var yy;
    
    //Scripts called by this object
    
        variant myevent_create();
    
    // Self-tracking
      enigma::instance_list_iterator ENOBJ_ITER_me;
      enigma::inst_iter *ENOBJ_ITER_myobj9;
      enigma::inst_iter *ENOBJ_ITER_myevent_create;
      enigma::inst_iter *ENOBJ_ITER_myevent_step;
      enigma::inst_iter *ENOBJ_ITER_myevent_draw;

    void unlink()
    {
      instance_iter_queue_for_destroy(ENOBJ_ITER_me->second); // Queue for delete while we're still valid
      enigma::unlink_main(ENOBJ_ITER_me); // Remove this instance from the non-redundant, tree-structured list.
      unlink_object_id_iter(ENOBJ_ITER_myobj9, 9);
      enigma::event_create->unlink(ENOBJ_ITER_myevent_create);
      enigma::event_step->unlink(ENOBJ_ITER_myevent_step);
      enigma::event_draw->unlink(ENOBJ_ITER_myevent_draw);
    }
    
    OBJ_obj_feeder(int enigma_genericconstructor_newinst_x = 0, int enigma_genericconstructor_newinst_y = 0, const int id = (enigma::maxid++)): object_locals(id, 9)
    {
      sprite_index = 4;
      visible = 0;
      solid = 0;
      ENOBJ_ITER_me = enigma::link_instance(this);
      ENOBJ_ITER_myobj9 = enigma::link_obj_instance(this, 9);
      ENOBJ_ITER_myevent_create = enigma::event_create->add_inst(this);
      ENOBJ_ITER_myevent_step = enigma::event_step->add_inst(this);
      ENOBJ_ITER_myevent_draw = enigma::event_draw->add_inst(this);
      x = enigma_genericconstructor_newinst_x, y = enigma_genericconstructor_newinst_y;
      enigma::constructor(this);
      myevent_create();
    }
    
    ~OBJ_obj_feeder()
    {
      delete ENOBJ_ITER_myobj9;
      delete ENOBJ_ITER_myevent_create;
      delete ENOBJ_ITER_myevent_step;
      delete ENOBJ_ITER_myevent_draw;
    }
  };
}
