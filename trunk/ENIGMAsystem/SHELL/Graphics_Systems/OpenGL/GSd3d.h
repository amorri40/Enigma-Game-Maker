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

int d3d_start();
int d3d_end();
int d3d_primitive_begin(int kind);
int d3d_vertex(double x, double y, double z);
int d3d_primitive_end();
int d3d_set_projection(double xfrom,double yfrom,double zfrom,double xto,
                       double yto,double zto,double xup,double yup,double zup);
void texture_set_interpolation(bool linear);
void texture_set_repeat(int repeat);
void d3d_draw_block(int x1, int y1, int z1, int x2, int y2, int z2, int texid, int hrepeat, int vrepeat) ;
void d3d_set_fog(bool enable, int color, double start, double end);
void d3d_set_shading(bool smooth);
void d3d_set_culling(bool cull);
void d3d_set_lighting(bool enable);
void d3d_set_hidden(bool enable);

int background_get_texture(int back);


