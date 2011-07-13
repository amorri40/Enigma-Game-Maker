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

  var dummy_0; // Referenced by 1 accessors
  var  &varaccess_enigmaauto(int x)
  {
    object_basic *inst = fetch_instance_by_int(x);
    if (inst) switch (inst->object_index)
    {
      case global: return ((ENIGMA_global_structure*)ENIGMA_global_instance)->enigmaauto;
    }
    return dummy_0;
  }
} // namespace enigma
