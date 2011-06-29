#define ENIGMA_WS_COCOA 1
//#include "../unimplemented.h"

//1945 

void action_change_object(int changeInto, int performEvents) {
enigma::object_planar* const inst = ((enigma::object_planar*)enigma::instance_event_iterator->inst);
//instance_create(inst->x,inst->y,changeInto);
//instance_destroy();
} //warning don't use in a with statement! (massive memory leak)

///////// Asteroids
void draw_set_halign(int halign) {}
void keyboard_wait() {}
void io_clear() {}
void action_set_friction(double newfriction) {
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->friction=newfriction;
}

void action_sprite_transform(double hscale, double vscale, double rotation, int mirror) {
	//image_xscale=hscale; image_yscale=vscale; image_angle=rotation; imageyscale=-1;
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->image_xscale=hscale;
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->image_yscale=vscale;
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->image_angle=rotation;
	//need to do mirror
	
}


void action_move_random(double snapHor,double snapVer) {} 

void action_sprite_color(double color, double  opacity) {
	//image_blend=color; image_alpha = opacity;
	//((enigma::object_graphics*)enigma::instance_event_iterator->inst)->image_blend=color;
	//((enigma::object_graphics*)enigma::instance_event_iterator->inst)->image_alpha=opacity;	
}

///
///// explosion.gmd
///
void show_info() {}
void action_show_info() {show_info();}

/////////////
/// Mistify
/////////////
void action_bounce(int precisely, int against) {}
double get_integer(string str, var def){
return real(def);
}
string get_string(string str, var def) {
return toString(def);
}

/////////////
/// keypress
/////////////
int show_message_ext(string str, string but1, string but2, string but3) {
show_message(str);
}

////////////
/// lazerWalls.gm6
////////////
void event_perform(int type, int numb) {}

///////////
/// Activity_engine
///////////
void action_set_gravity(double direction,double newgravity) { 
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->gravity_direction=direction;
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->gravity=newgravity;
}

void action_potential_step(double x,double y,double speed,int avoid) {
//move_towards_point(x,y,speed);
}

#define itype enigma::object_planar* const
#define ithis ((enigma::object_planar*)enigma::instance_event_iterator->inst)
// Move Contact Solid action. Concept, might not work as intended for <1 values
inline void action_move_contact(double d, double m, int o) {
	itype me = ithis;
	double pr = 1; // precision
	double dx = lengthdir_x(pr, d);
	double dy = lengthdir_y(pr, d);
	for (int i = m; i > 0; i -= (m != -1 ? 1 : 0))
	{
		if (!(o > 0 ? place_free(me->x+dx, me->y+dy) : place_empty(me->x+dx, me->y+dy))) return;
		me->x += dx;
		me->y += dy;
	}
}

/////
/// LDC.gmd
/////
void ini_open(string name) {}//Opens the INI file with the given name. The ini file must be stored in the same folder as the game!
void ini_close() {}//Closes the currently open INI file.
string ini_read_string(string section, string key, string defaultval) {}//Reads the string value of the indicated key in the indicated section. When the key or section does not exist the default value is returned.
double ini_read_real(string section, string key, variant defaultval) {}//Reads the real value of the indicated key in the indicated section. When the key or section does not exist the default value is returned.
void ini_write_string(string section, string key, string value) {}//Writes the string value for the indicated key in the indicated section.
void ini_write_real(string section, string key, variant value) {}//Writes the real value for the indicated key in the indicated section.
bool ini_key_exists(string section, string key) {return false;}//Returns whether the indicated key exists in the indicated section.
bool ini_section_exists(string section) { return false;}//Returns whether the indicated section exists.
void ini_key_delete(string section, string key) {}//Deletes the indicated key from the indicated section.
void ini_section_delete(string section) {}//Deletes the indicated section.

/* physics engine */
void sprite_set_offset(int ind, int xoff, int yoff) {}
string get_open_filename(string filter, string fname){
return "/Users/alasdairmorrison/Documents/Game Maker/64D general/64D Last 0to10/physics/physics_1.txt";
}