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

// Depending on how many times your game accesses variables via OBJECT.varname, this file may be empty.

namespace enigma
{
  object_locals ldummy;
  object_locals *glaccess(int x)
  {
    object_locals* ri = (object_locals*)fetch_instance_by_int(x);
    return ri ? ri : &ldummy;
  }

  var dummy_0; // Referenced by 29 accessors
  var  &varaccess_fa_center(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->fa_center;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->fa_center;
    }
    return dummy_0;
  }
  var  &varaccess_i(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->i;
    }
    return dummy_0;
  }
  var  &varaccess_joint_dist(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->joint_dist;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->joint_dist;
    }
    return dummy_0;
  }
  var  &varaccess_joint_max(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->joint_max;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->joint_max;
    }
    return dummy_0;
  }
  var  &varaccess_joint_min(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->joint_min;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->joint_min;
    }
    return dummy_0;
  }
  var  &varaccess_joint_numb(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->joint_numb;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->joint_numb;
    }
    return dummy_0;
  }
  var  &varaccess_joint_point(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->joint_point;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->joint_point;
    }
    return dummy_0;
  }
  var  &varaccess_object(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->object;
    }
    return dummy_0;
  }
  var  &varaccess_object_number(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->object_number;
    }
    return dummy_0;
  }
  var  &varaccess_point_collision(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->point_collision;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->point_collision;
    }
    return dummy_0;
  }
  var  &varaccess_point_friction(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->point_friction;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->point_friction;
    }
    return dummy_0;
  }
  var  &varaccess_point_numb(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->point_numb;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->point_numb;
    }
    return dummy_0;
  }
  var  &varaccess_point_radius(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->point_radius;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->point_radius;
    }
    return dummy_0;
  }
  var  &varaccess_point_stationary(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->point_stationary;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->point_stationary;
    }
    return dummy_0;
  }
  var  &varaccess_point_x(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->point_x;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->point_x;
    }
    return dummy_0;
  }
  var  &varaccess_point_x_prev(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->point_x_prev;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->point_x_prev;
    }
    return dummy_0;
  }
  var  &varaccess_point_y(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->point_y;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->point_y;
    }
    return dummy_0;
  }
  var  &varaccess_point_y_prev(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->point_y_prev;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->point_y_prev;
    }
    return dummy_0;
  }
  var  &varaccess_sprite(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->sprite;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->sprite;
    }
    return dummy_0;
  }
  var  &varaccess_sprite_height(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->sprite_height;
    }
    return dummy_0;
  }
  var  &varaccess_sprite_image(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->sprite_image;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->sprite_image;
    }
    return dummy_0;
  }
  var  &varaccess_sprite_numb(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->sprite_numb;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->sprite_numb;
    }
    return dummy_0;
  }
  var  &varaccess_sprite_offset(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->sprite_offset;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->sprite_offset;
    }
    return dummy_0;
  }
  var  &varaccess_sprite_point(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->sprite_point;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->sprite_point;
    }
    return dummy_0;
  }
  var  &varaccess_sprite_solid(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->sprite_solid;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->sprite_solid;
    }
    return dummy_0;
  }
  var  &varaccess_sprite_transparent(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->sprite_transparent;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->sprite_transparent;
    }
    return dummy_0;
  }
  var  &varaccess_sprite_width(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->sprite_width;
    }
    return dummy_0;
  }
  var  &varaccess_strength(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->strength;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->strength;
    }
    return dummy_0;
  }
  var  &varaccess_tempdist(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case obj_object: return ((OBJ_obj_object*)inst)->tempdist;
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->tempdist;
    }
    return dummy_0;
  }
} // namespace enigma
