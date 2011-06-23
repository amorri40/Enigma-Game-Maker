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

using namespace std;

#include "OpenGLHeaders.h"
#include "GSprmtvs.h"
#include <string>
#include "../../Universal_System/var4.h"
#include "../../Universal_System/roomsystem.h"
#include <math.h>
#include "../../Universal_System/backgroundstruct.h"

namespace enigma{extern unsigned bound_texture;}

/*void gluPerspective(GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar)
{
   GLdouble xmin, xmax, ymin, ymax;

   ymax = zNear * tan(fovy * M_PI / 360.0);
   ymin = -ymax;
   xmin = ymin * aspect;
   xmax = ymax * aspect;


   glFrustum(xmin, xmax, ymin, ymax, zNear, zFar);
}//I need to include GL/glu.h*/
//I need it for gluLookAt()


int d3d_start() //d3d set mode?
{
    glEnable(GL_DEPTH_TEST);
    gluPerspective(110, view_wview[view_current]/view_hview[view_current], 5, 6);
    //tgmg start
    glEnable(GL_ALPHA_TEST);
    glAlphaFunc(GL_GREATER, 0);
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //d3dreset
    
    //tgmg end
    return 0;
}

int d3d_end()
{
    glDisable(GL_DEPTH_TEST);
    glOrtho(-1,room_width,-1,room_height,0,1);

    return 0;
}

int d3d_primitive_begin(int kind)
{
    glBegin(kind);
    return 0;
}

int d3d_vertex(double x, double y, double z)
{
    glVertex3d(x,y,z);
    return 0;
}

int d3d_primitive_end()
{
    glEnd();
    return 0;
}

void d3d_set_hidden(bool enable) {
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_ALPHA_TEST);
    glAlphaFunc(GL_GREATER, 0);
    
}

void d3d_set_lighting(bool enable) {
    glDisable(GL_LIGHTING);
    
}

void d3d_set_culling(bool cull) {
    glDisable(GL_CULL_FACE);
}

void d3d_set_shading(bool smooth) {
    glShadeModel(GL_FLAT);
}

void d3d_set_fog(bool enable, int color, double start, double end) {
    glFogi(GL_FOG_MODE, 2048);
    glFogi(GL_FOG_MODE, 9729);
    GLfloat v[] = {
        1, 1, 1, 0
    };
    
    glFogfv(GL_FOG_COLOR, v);
    glFogf(GL_FOG_DENSITY, 0.015);
    glHint(GL_FOG_HINT, GL_DONT_CARE);
    glFogf(GL_FOG_START, 1);
    glFogf(GL_FOG_END, 1024);
    glEnable(GL_FOG);
}

int d3d_set_projection(double xfrom,double yfrom,double zfrom,double xto,
                       double yto,double zto,double xup,double yup,double zup)
{
    //gluLookAt(xfrom, yfrom, zfrom, xto, yto, zto, xup, yup, zup); put back in
    //TGMG start
    glMatrixMode(GL_MODELVIEW);
    
    float m[] = {0.58123815, -0.26795655, -0.76834983, 0,      // X Column
        
        -0.81373346, -0.19139752, -0.54882127, 0,      // Y Column
        
        0, 0.94422781, -0.32929277, 0,      // Z Column
        
        3.7199287, -7.7579794, 172.11035, 1 };    // Translation
    
    glLoadMatrixf(m);
    
    //TGMG end
    return 0;
}

void texture_set_interpolation(bool linear) {
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    //glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,GL_LINEAR_MIPMAP_LINEAR );
    
} //Indicates whether to use linear interpolation (true) or pick the nearest pixel (false). Linear interpolation gives smoother textures but can also be a bit blurry and sometimes costs extra time. This setting also influence the drawing of sprites and background. Default is false. (This can also be changed in the global game settings.)
void texture_set_repeat(int repeat) {
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    
   /* glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);*/
} 


int background_get_texture(int back) {
    enigma::background *bck2d = enigma::backgroundstructarray[back];
    if (!bck2d)
        return -1;
   // D3Dtbx=bck2d->texbordx; //how to do this in a better way
   // D3Dtby=bck2d->texbordy;
    return bck2d->texture;
}

float D3Dtbx, D3Dtby;

void d3d_draw_block(int x1, int y1, int z1, int x2, int y2, int z2, int texid, int hrepeat, int vrepeat) {
    
    if (enigma::bound_texture != texid)
    {
        glBindTexture(GL_TEXTURE_2D,texid);
        enigma::bound_texture = texid;
    }
  //  const float tbx=bck2d->texbordx,tby=bck2d->texbordy;
    
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    float m[] = { 2, 0, 0, 0,
        0, 2.6666667, 0, 0,
        0, 0, 1.0000312, 1,
        -0, 0, -1.0000312, 0};
    glLoadMatrixf(m);
    glMatrixMode(GL_MODELVIEW);
   float mm[] = {0.58123815, -0.26795655, -0.76834983, 0,
    -0.81373346, -0.19139752, -0.54882127, 0,
    0, 0.94422781, -0.32929277, 0,
        3.7199287, -7.7579794, 172.11035, 1};
    glLoadMatrixf(mm);
    
    glEnable(GL_TEXTURE_2D); //texture set
    glBindTexture(GL_TEXTURE_2D, 1);
    
    texture_set_repeat(true);
    texture_set_interpolation(true);
    
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
   /* glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,
                    GL_LINEAR_MIPMAP_NEAREST );*/
    
    glBegin(GL_TRIANGLE_FAN);
    glColor4ub(255, 255, 255, 255); //current color (draw_set_color)
    glNormal3f(0, 0, -1);
    glTexCoord2f(0, 0);
    glVertex3f(0, 0, 0);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(0, 0, -1);
    glTexCoord2f(0, 1);
    glVertex3f(0, 16, 0);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(0, 0, -1);
    glTexCoord2f(1, 1);
    glVertex3f(16, 16, 0);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(0, 0, -1);
    glTexCoord2f(1, 0);
    glVertex3f(16, 0, 0);
    
    glEnd(); // 3D_primitive end
    
    glBindTexture(GL_TEXTURE_2D, 0);
    glEnable(GL_TEXTURE_2D); //texture set
    //glBindTexture(GL_TEXTURE_2D, 1);
    
    texture_set_repeat(true);
    texture_set_interpolation(true);
    
    glBegin(GL_TRIANGLE_FAN);
    
    glColor4ub(25, 255, 255, 255);
    glNormal3f(0, 0, 1);
    glTexCoord2f(0, 0);
    glVertex3f(0, 0, 16);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(0, 0, 1);
    glTexCoord2f(1, 0);
    glVertex3f(16, 0, 16);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(0, 0, 1);
    glTexCoord2f(1, 1);
    glVertex3f(16, 16, 16);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(0, 0, 1);
    glTexCoord2f(0, 1);
    glVertex3f(0, 16, 16);
    glEnd();
    
    glBindTexture(GL_TEXTURE_2D, 0); //texture set
    glEnable(GL_TEXTURE_2D); //texture set
    glBindTexture(GL_TEXTURE_2D, 1); //texture set
    
    texture_set_repeat(true);
    texture_set_interpolation(true);
    
    glBegin(GL_TRIANGLE_FAN);
    glColor4ub(255, 255, 255, 255);
    glNormal3f(0, 1, 0);
    glTexCoord2f(0, 0);
    glVertex3f(0, 16, 0);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(0, 1, 0);
    glTexCoord2f(0, 0.5f);
    glVertex3f(0, 16, 16);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(0, 1, 0);
    glTexCoord2f(0.5f, 0.5f);
    glVertex3f(16, 16, 16);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(0, 1, 0);
    glTexCoord2f(0.5f, 0);
    glVertex3f(16, 16, 0);
    glEnd();
    
    
    glBindTexture(GL_TEXTURE_2D, 0); //texture set
    glEnable(GL_TEXTURE_2D); //texture set
    glBindTexture(GL_TEXTURE_2D, 1); //texture set
    
    texture_set_repeat(true);
    texture_set_interpolation(true);
    
    glBegin(GL_TRIANGLE_FAN);
    glColor4ub(255, 255, 255, 255);
    glNormal3f(1, 0, 0);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(16, 16, 0);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(1, 0, 0);
    glTexCoord2f(0.0f, 0.25f);
    glVertex3f(16, 16, 16);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(1, 0, 0);
    glTexCoord2f(0.25f, 0.25f);
    glVertex3f(16, 0, 16);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(1, 0, 0);
    glTexCoord2f(0.25f, 0.0f);
    glVertex3f(16, 0, 0);
    glEnd();
    
    
    glBindTexture(GL_TEXTURE_2D, 0); //texture set
    glEnable(GL_TEXTURE_2D); //texture set
    glBindTexture(GL_TEXTURE_2D, 1); //texture set
    
    texture_set_repeat(true);
    texture_set_interpolation(true);
    
    glBegin(GL_TRIANGLE_FAN);
    glColor4ub(255, 255, 255, 255);
    glNormal3f(0, -1, 0);
    glTexCoord2f(0, 0);
    glVertex3f(16, 0, 0);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(0, -1, 0);
    glTexCoord2f(0, 1);
    glVertex3f(16, 0, 16);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(0, -1, 0);
    glTexCoord2f(1, 1);
    glVertex3f(0, 0, 16);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(0, -1, 0);
    glTexCoord2f(1, 0);
    glVertex3f(0, 0, 0);
    glEnd();
    
    
    glBindTexture(GL_TEXTURE_2D, 0); //texture set
    glEnable(GL_TEXTURE_2D); //texture set
    glBindTexture(GL_TEXTURE_2D, 1); //texture set
    
    texture_set_repeat(true);
    texture_set_interpolation(true);
    
    glBegin(GL_TRIANGLE_FAN);
    glColor4ub(255, 255, 255, 255);
    glNormal3f(-1, 0, 0);
    glTexCoord2f(0, 0);
    glVertex3f(0, 0, 0);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(-1, 0, 0);
    glTexCoord2f(0, 1);
    glVertex3f(0, 0, 16);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(-1, 0, 0);
    glTexCoord2f(1, 1);
    glVertex3f(0, 16, 16);
    
    glColor4ub(255, 255, 255, 255);
    glNormal3f(-1, 0, 0);
    glTexCoord2f(1, 0);
    glVertex3f(0, 16, 0);
    glEnd();
    glBindTexture(GL_TEXTURE_2D, 0);
    glShadeModel( GL_SMOOTH );
    //glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    //glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE); //undo's set repeat?
    
    //finish frame
    glDisable(GL_SCISSOR_TEST);
    // flip sdl
   // glFlush();
   // CGLFlushDrawable(0x0186B600);
    //start frame
    //glEnable(GL_SCISSOR_TEST);
    //set render target (something to do with surfaces?
    //glBindFramebufferEXT(GL_FRAMEBUFFER, 0);
    //glViewport(0, 0, 640, 480);
    //glScissor(0, 0, 640, 480);
    
}



