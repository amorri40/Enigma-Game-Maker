/*
 Unimplemented.h Used for debugging purposes only
 To use, simply write: #include "../unimplemented.h" In enigma definitions (whitespace)
 Useful for testing games with features disabled, testing enimga parser, implementing prototype functions 
 */



//Need macro for debug which writes function name to terminal and whether it returns a value (easy way to see used functions for a game)




/*
Fonts and Text functions
*/
//void draw_set_halign(int halign) {}
void draw_set_valign(int valign) {}
int string_width_ext(string str, string sep, int w) {}//Width of the string in the current font as it would be drawn using the draw_text_ext() function. Can be used for precisely positioning graphics.
int string_height_ext(string str, string sep, int w) {}//
void draw_text_ext(int x, int y, string str, string sep, int w) {}
//void draw_text_color(int x, int y, string str, int c1, int c2, int c3, int c4, double alpha) {}
void draw_text_ext_color(int x, int y, string str, string sep, int w, int c1, int c2, int c3, int c4, int alpha) {

} //Similar to draw_text_ext() but with colored vertices.

/*
Input
*/




//void io_handle() {}

void keyboard_clear(int key) {}
void mouse_clear(int button) {}
void keyboard_set_map(int key1, int key2) {}//Maps the key with keycode key1 to key2.
int keyboard_get_map(int key) {} //Returns the current mapping for key.
void keyboard_unset_map() {} //Resets all keys to map to themselves.

/*
Timelines
*/
int timeline_add() {return 0;}//Adds a new time line. It returns the index of the time line.
void timeline_delete(int ind) {}//Deletes the time line with the given index. Make sure no instances uses the time line in any room.
void timeline_moment_add(int ind, int step, string codestr){}// Adds a code action to the time line at moment step. codestr contains the code for the actions. If the step does not exist it is created. So you can add multiple code actions for the same moment.
void timeline_moment_clear(int ind, int step) {}//

/*
Scripts
*/
bool script_exists(int ind) {return false;}
string script_get_name(int ind) {return "UNIMPLEMENTED";}
string script_get_text(int ind) {return "UNIMPLEMENTED";}

/*
Fonts
*/
int font_add(string name, int size, bool bold, bool italic, int first, int last) { return 0;}
void font_replace(int ind, string name, int size, bool bold, bool italic, int first, int last) {}
void font_replace_sprite(int ind, int spr, int first, int prop, int sep) {}
void font_delete(int ind) {}

bool font_exists(int ind) {}
string font_get_name(int ind) {}
string font_get_fontname(int ind) {}
bool font_get_bold(int ind) {}
bool font_get_italic(int ind) {}
int font_get_first(int ind) {}
int font_get_last(int ind) {}


/*
Moving around functions
*/
void move_wrap(int hor, int vert, int margin) {}

void move_random(int hsnap, int vsnap) {}

void move_contact_solid(double dir, double maxdist) {}//Moves the instance in the direction until a contact position with a solid object is reached. If there is no collision at the current position, the instance is placed just before a collision occurs. If there already is a collision the instance is not moved. You can specify the maximal distance to move (use a negative number for an arbitrary distance).
void move_contact_all(double dir, double maxdist) {}//Same as the previous function but this time you stop at a contact with any object, not just solid objects.
void move_outside_solid(double dir, double maxdist) {}//Moves the instance in the direction until it no longer lies within a solid object. If there is no collision at the current position the instance is not moved. You can specify the maximal distance to move (use a negative number for an arbitrary distance).
void move_outside_all(double dir, double maxdist) {}//Same as the previous function but this time you move until outside any object, not just solid objects.
//double distance_to_point(int x, int y) {return 0;}//Returns the distance of the bounding box of the current instance to (x,y).
//double distance_to_object(int obj) { return 0;}//Returns the distance of the instance to the nearest instance of object obj.
void move_snap(int hsnap, int vsnap) {}
//void move_towards_point(int x, int y, double sp) {}
void move_bounce_solid(bool adv) {}
void move_bounce_all(bool adv) {}



/*
Pop Up messages and questions
*/
//string get_string(string str, var def) {}

//int show_message_ext(string str, string but1, string but2, string but3) {}//Displays a dialog box with the string as a message and up to three buttons. But1, but2 and but3 contain the button text. An empty string means that the button is not shown. In the texts you can use the & symbol to indicate that the next character should be used as the keyboard shortcut for this button. The function returns the number of the button pressed (0 if the user presses the Esc key).
bool show_question(string str) {}// Displays a question; returns true when the user selects yes and false otherwise.
//double get_integer(string str, var def){}// Asks the player in a dialog box for a number. str is the message. def is the default number shown.
void message_background(int back){}// Sets the background image for the pop-up box for any of the functions above. back must be one of the backgrounds defined in the game. If back is partially transparent so is the message image (only for Windows 2000 or later).
void message_alpha(double alpha){}// Sets the alpha translucence for the pop-up box for any of the functions above. alpha must lie between 0 (completely translucent) and 1 (not translucent) (only for Windows 2000 or later).
void message_button(int spr){}// Sets the sprite used for the buttons in the pop-up box. spr must be a sprite consisting of three images, the first indicates the button when it is not pressed and the mouse is far away, the second indicates the button when the mouse is above it but not pressed and the third is the button when it is pressed.
void message_text_font(string name, int size, double color, int style){}// Sets the font for the text in the pop-up box. (This is a normal Windows font, not one of the font resources you can out in your game!) style indicates the font style (0=normal, 1=bold, 2=italic, and 3=bold-italic).
void message_button_font(string name, int size, double color, int style){}// Sets the font for the buttons in the pop-up box. style indicates the font style (0=normal, 1=bold, 2=italic, and 3=bold-italic).
void message_input_font(string name, int size, double color, int style){}// Sets the font for the input field in the pop-up box. style indicates the font style (0=normal, 1=bold, 2=italic, and 3=bold-italic).
void message_mouse_color(double col){}// Sets the color of the font for the buttons in the pop-up box when the mouse is above it.
void message_input_color(double col){}// Sets the color for the background of the input filed in the pop-up box.
void message_caption(bool show, string str){}// Sets the caption for the pop-up box. show indicates whether a border must b e shown (1) or not (0) and str indicates the caption when the border is shown.
void message_position(int x, int y){}// Sets the position of the pop-up box on the screen. Use -1, -1 to center the box.
void message_size(int w, int h){}// Fixes the size of the pop-up box on the screen. If you choose -1 for the width the width of the image is used. If you choose -1 for the height the height is calculated based on the number of lines in the message.
var show_menu(string str, var def){ return 0;}// Shows a popup menu. str indicates the menu text. This consists of the different menu items with a vertical bar between them. For example, str = 'menu0|menu1|menu2'. When the first item is selected a 0 is returned, etc. When the player selects no item, the default value def is returned.
var show_menu_pos(int x, int y, string str, var def){return 0;}// Shows a popup menu as in the previous function but at position x,y on the screen.
double get_color(double defcol){return 0;}// Asks the player for a color. defcol is the default color. If the user presses Cancel the value -1 is returned.
//string get_open_filename(string filter, string fname){}// Asks the player for a filename to open with the given filter. The filter has the form 'name1|mask1|name2|mask2|...'. A mask contains the different options with a semicolon between them. * means any string. For example: 'bitmaps|*.bmp;*.wmf'. If the user presses Cancel an empy string is returned.
string get_save_filename(string filter, string fname){return "";}// Asks for a filename to save with the given filter. If the user presses Cancel an empy string is returned.
string get_directory(string dname){return "";}// Asks for a directory. dname is the default name. If the user presses Cancel an empy string is returned.
string get_directory_alt(string capt, string root){return "";}// An alternative way to ask for a directory. capt is the caption to be show. root is the root of the directory tree to be shown. Use the empty string to show the whole tree. If the user presses Cancel an empy string is returned.


/*
 Display functions
 */
int display_get_width() {}
int display_get_height() {}
int display_get_colordepth() {}
int display_get_frequency() {}
bool display_set_size(int w, int h)  {}
bool display_set_colordepth(int coldepth) {}
bool display_set_frequency(int frequency) {}
bool display_set_all(int w, int h, int frequency, int coldepth) {}
bool display_test_all(int w, int h, int frequency, int coldepth)  {}
void display_reset() {}



/*
Registry
*/
void registry_write_string(string name, string str) {}//Creates an entry in the registry with the given name and string value.
void registry_write_real(string name, double x) {}//Creates an entry in the registry with the given name and real value.
string registry_read_string(string name) {}//Returns the string that the given name holds. (The name must exist. Otherwise an empty string is returned.)
double registry_read_real(string name) {}//Returns the real value that the given name holds. (The name must exist. Otherwise the number 0 is returned.)
bool registry_exists(string name) {}//Returns whether the given name exists.

void registry_write_string_ext(string key, string name, string str) {}
void registry_write_real_ext(string key, string name, double x) {}
string registry_read_string_ext(string key, string name) {}
double registry_read_real_ext(string key, string name) {}
bool registry_exists_ext(string key, string name) {}

void registry_set_root(var root) {}

/*
Rooms
*/
//void game_restart() {}
//void game_end() {}

/*
Splash screens
*/
//void show_info() {}
void load_info(string fname) {}

/*
Files
*/
string file_find_first(string mask, string attr) {}//Returns the name of the first file that satisfies the mask and the attributes. If no such file exists, the empty string is returned. The mask can contain a path and can contain wildchars, for example 'C:\temp\*.doc'. The attributes give the additional files you want to see. (So the normal files are always returned when they satisfy the mask.) You can add up the following constants to see the type of files you want:
string file_find_next() {}//Returns the name of the next file that satisfies the previously given mask and the attributes. If no such file exists, the empty string is returned.
void file_find_close() {}//Must be called after handling all files to free memory.
void file_attributes(string fname, string attr) {}//Returns whether the file has all the attributes given in attr. Use a combination of the constants indicated above.
//bool file_exists(string fname) {return false;} problemw ith file_exists is that it is compiled but the header isn't used on mac

/*
Executing programs
*/
void execute_program(string prog, string arg, bool wait) {}// Executes program prog with arguments arg. wait indicates whether to wait for finishing.
void execute_shell(string prog, string arg) {}//Executes the program (or file) in the shell.

/*
Generating events
*/
//void event_perform(int type, int numb) {}
void event_perform_object(int obj, int type, int numb) {}//This functions works the same as the function above except that this time you can specify events in another object. Note that the actions in these events are applied to the current instance, not to instances of the given object..
void event_user(int numb) {}//In the other events you can also define 16 user events. These are only performed if you call this function. numb must lie in the range 0 to 15.
void event_inherited() {}

/*
String handling
*/
string string_format(double val, int tot, int dec) {return "";}


/*
Miscellaneous variables and functions
*/
bool variable_global_exists(string name) {}//Returns whether a global variable with the given name (a string) exists.
bool variable_local_exists(string name) {}//Returns whether a local variable with the given name (a string) exists for the current instance.
variant variable_global_get(string name) {}//Returns the value of the global variable with the given name (a string).
variant variable_global_array_get(string name, int ind) {}//Returns the value of index ind of the global array variable with the given name (a string).
variant variable_global_array2_get(string  name, int ind1, int ind2) {}//Returns the value of index ind1,ind2 of the global 2-dimensional array variable with the given name (a string).
variant variable_local_get(string name) {}//Returns the value of the local variable with the given name (a string).
variant variable_local_array_get(string name, int ind) {}//Returns the value of index ind of the local array variable with the given name (a string).
variant variable_local_array2_get(string name, int ind1, int ind2) {}//Returns the value of index ind1,ind2 of the local 2-dimensional array variable with the given name (a string).
void variable_global_set(string name, int value) {}//Sets the global variable with the given name (a string) to the given value.
void variable_global_array_set(string name, int ind, variant value) {}//Sets the index ind in the global array variable with the given name (a string) to the given value.
void variable_global_array2_set(string name, int ind1, int ind2, variant value) {}//Sets the index ind1,ind2 in the global 2-dimensional array variable with the given name (a string) to the given value.
void variable_local_set(string name, variant value) {}//Sets the local variable with the given name (a string) to the given value.
void variable_local_array_set(string name, int ind, variant value) {}//Sets the index ind in the local array variable with the given name (a string) to the given value.
void variable_local_array2_set(string name, int ind1, int ind2, variant value) {}//

/*
Objects
*/
void object_event_clear(int ind, int evtype, int evnumb) {}//You can use this function to clear all the actions for a particular event.
int object_add() { return 0;}//Adds a new object. It returns the index of the object. You can now use this index in the routines above to set certain properties of the object and then you can use the index to create instances of the object.
void object_delete(int ind) {}//Deletes the object with the given index. Make sure no instances of the object exist in any of the rooms.
void object_event_add(int ind, int evtype, int evnumb, string codestr) {}//
bool object_exists(int ind) {return true;}//Returns whether an object with the given index exists.
string object_get_name(int ind) {return "";}//Returns the name of the object with the given index.
int object_get_sprite(int ind) {return 0;}//Returns the index of the default sprite of the object with the given index.
bool object_get_solid(int ind) {return false;}//Returns whether the object with the given index is default solid.
bool object_get_visible(int ind) {return false;}//Returns whether the object with the given index is default visible.
float object_get_depth(int ind) {return 0;}//Returns the depth of the object with the given index.
bool object_get_persistent(int ind) {return false;}//Returns whether the object with the given index is persistent.
int object_get_mask(int ind) {return 0;}//Returns the index of the mask of the object with the given index (-1 if is has no special mask).
int object_get_parent(int ind) {return 0;}//Returns index of the parent object of object ind (a negative value is returned if it has no parent).
bool object_is_ancestor(int ind1, int ind2) {return false;}//Returns whether object ind2 is an ancestor of object ind1.

void object_set_sprite(int ind, int spr) {}
void object_set_solid(int ind, bool solid)  {}
void object_set_visible(int ind, bool vis)  {}
void object_set_depth(int ind, double depth)  {}
void object_set_persistent(int ind, bool pers)  {}
void object_set_mask(int ind, int spr)   {}
void object_set_parent(int ind, int obj) {}

/*
Sprites
*/
int sprite_create_from_screen(int x, int y, int w, int h, bool precise, bool transparent, bool smooth, bool preload, int xorig, int yorig) {return 0;}
void sprite_delete(int ind) {}
void sprite_set_alpha_from_sprite(int ind, int spr) {}
//void sprite_set_offset(int ind, int xoff, int yoff) {}//Sets the offset of the sprite with the given index.
void sprite_set_bbox_mode(int ind, int mode) {}//Sets the bounding box mode of the sprite (0=automatic, 1=full image, 2=manual).
void sprite_set_bbox(int ind, int left, int top, int right, int bottom) {}//Sets the bounding box of the sprite with the given index. Works only when the bounding box mode is manual.
void sprite_set_precise(int ind, int mode) {}//Sets whether the sprite with the given index uses precise collision checking (true or false).
int sprite_create_from_surface(int sid, int x, int y, int w, int h, bool precise, bool transparent, bool smooth, bool preload, int xorig, int yorig) { return 0;}
void sprite_assign(int ind, int spr) {
    
}
void sprite_add_from_screen(int ind, int x, int y, int w, int h) {

}
int sprite_duplicate(int ind) {
    return 0;   
}

void sprite_merge(int ind1, int ind2) {
    
}

void sprite_replace(int ind, string fname, int imgnumb, bool precise, bool transparent, bool smooth, bool preload, int xorig, int yorig) {
    
}

void sprite_add_from_surface(int ind, int id, int x, int y, int w, int h) {
    
}

/*
Rooms
*/
bool room_exists(int ind) {return false;}
string room_get_name(int ind) {return "";}
void room_goto_previous() {}

void room_set_width(int ind, int w) {}
void room_set_height(int ind, int h) {}
void room_set_caption(int ind, var str) {}
void room_set_persistent(int ind, bool val) {}
void room_set_code(int ind, string str) {}
void room_set_background_color(int ind, int col, bool show) {}


void game_save(string str) {}//Saves the game to the file with name string.
void game_load(string str) {}//Loads the game from the file with name string.

/*
Real value functions
*/
int choose(var n, ...) {
    return 0;
    }

/*
Collision checking
*/
//bool collision_point(int x, int y, int obj, int prec, bool notme) { return false;}// This function tests whether at point (x,y) there is a collision with entities of object obj.
//bool collision_rectangle(int x1, int y1, int x2, int y2, int obj, int prec, bool notme) {return false;}// This function tests whether there is a collision between the (filled) rectangle with the indicated opposite corners and entities of object obj. For example, you can use this to test whether an area is free of obstacles.
bool collision_circle(int xc, int yc, int radius, int obj, int prec, bool notme) {return false;}//This function tests whether there is a collision between the (filled) circle centered at position (xc,yc) with the given radius and entities of object obj. For example, you can use this to test whether there is an object close to a particular location.
bool collision_ellipse(int x1, int y1, int x2, int y2, int obj, int prec, bool notme) {return false;}//This function tests whether there is a collision between the (filled) ellipse with the indicated opposite corners and entities of object obj.

/*
 D3D functions
 */

void d3d_set_perspective(bool enable) {}


void d3d_light_define_direction(int ind, int dx, int dy, int dz, int col) {}
void d3d_light_define_point(var ind, int x, int y, int z, int range, int col) {}
void d3d_light_enable(var ind, bool enable) {} //needs to be var since one game had "LIGHT00"



void d3d_set_projection_ortho(int x, int y, int w, int h, double angle) {}
void d3d_set_projection_perspective(double x, double y, double w, double h, double angle) {}
void d3d_set_projection_ext(double xfrom, double yfrom, double zfrom, double xto, double yto, double zto, double xup, double yup, double zup, double angle, double aspect, double znear, double zfar) {}
//void d3d_set_projection(double xfrom, double yfrom, double zfrom, double xto, double yto, double zto, double xup, double yup, double zup) {}


void d3d_draw_cylinder(int x1, int y1, int z1, int x2, int y2, int z2, int texid, int hrepeat, int vrepeat, int closed, int steps) {}
void d3d_draw_cone(int x1, int y1, int z1, int x2, int y2, int z2, int texid, int hrepeat, int vrepeat, int closed, int steps) {}
void d3d_draw_ellipsoid(int x1, int y1, int z1, int x2, int y2, int z2, int texid, int hrepeat, int vrepeat, int steps) {}
void d3d_draw_wall(int x1, int y1, int z1, int x2, int y2, int z2, int texid, int hrepeat, int vrepeat) {}
void d3d_draw_floor(int x1, int y1, int z1, int x2, int y2, int z2, int texid, int hrepeat, int vrepeat) {}

int d3d_model_create() {}
void d3d_model_destroy(int ind) {}
void d3d_model_clear(int ind) {}
void d3d_model_save(int ind, string fname) {}
void d3d_model_load(int ind, string fname) {}
void d3d_model_draw(int ind, int x, int y, int z, int texid) {}

void d3d_model_block(int ind, int x1, int y1, int z1, int x2, int y2, int z2, int hrepeat, int vrepeat) {} 
void d3d_model_cylinder(int ind, int x1, int y1, int z1, int x2, int y2, int z2, int hrepeat, int vrepeat, int closed, int steps) {} 
void d3d_model_cone(int ind, int x1, int y1, int z1, int x2, int y2, int z2, int hrepeat, int vrepeat, int closed, int steps) {} 
void d3d_model_ellipsoid(int ind, int x1, int y1, int z1, int x2, int y2, int z2, int hrepeat, int vrepeat, int steps) {} 
void d3d_model_wall(int ind, int x1, int y1, int z1, int x2, int y2, int z2, int hrepeat, int vrepeat) {} 
void d3d_model_floor(int ind, int x1, int y1, int z1, int x2, int y2, int z2, int hrepeat, int vrepeat) {} 

void d3d_vertex_color(int x, int y, int z, int col, int alpha) {} 

void d3d_model_primitive_begin(int ind, int kind) {}
void d3d_model_vertex(int ind, int x, int y, int z) {}
void d3d_model_vertex_color(int ind, int x, int y, int z, int col, int alpha) {}
void d3d_model_vertex_texture(int ind, int x, int y, int z, int xtex, int ytex) {}
void d3d_model_vertex_texture_color(int ind, int x, int y, int z, int xtex, int ytex, int col, int alpha) {}
void d3d_model_vertex_normal(int ind, int x, int y, int z, int nx, int ny, int nz) {}
void d3d_model_vertex_normal_color(int ind, int x, int y, int z, int nx, int ny, int nz, int col, int alpha) {}
void d3d_model_vertex_normal_texture(int ind, int x, int y, int z, int nx, int ny, int nz, int xtex, int ytex) {}
void d3d_model_vertex_normal_texture_color(int ind, int x, int y, int z, int nx, int ny, int nz, int xtex, int ytex, int col, int alpha) {}
void d3d_model_primitive_end(int ind) {}

void d3d_transform_set_identity() {}
void d3d_transform_set_translation(double xt, double yt, double zt) {}
void d3d_transform_set_scaling(double xs, double ys, double zs) {}
void d3d_transform_set_rotation_x(double angle) {}
void d3d_transform_set_rotation_y(double angle) {}
void d3d_transform_set_rotation_z(double angle) {}
void d3d_transform_set_rotation_axis(double xa, double ya, double za, double angle) {}
void d3d_transform_add_translation(double xt, double yt, double zt) {}
void d3d_transform_add_scaling(double xs, double ys, double zs) {}
void d3d_transform_add_rotation_x(double angle) {}
void d3d_transform_add_rotation_y(double angle) {}
void d3d_transform_add_rotation_z(double angle) {}
void d3d_transform_add_rotation_axis(double xa, double ya, double za, double angle) {}

void d3d_vertex_normal(double x, double y, double z, double nx, double ny, double nz) {}
void d3d_vertex_normal_color(double x, double y, double z, double nx, double ny, double nz, double col, double alpha) {}
void d3d_vertex_normal_texture(double x, double y, double z, double nx, double ny, double nz, double xtex, double ytex) {}
void d3d_vertex_normal_texture_color(double x, double y, double z, double nx, double ny, double nz, double xtex, double ytex, double col, double alpha) {}

void d3d_primitive_begin_texture(int kind, int texid) {}
void d3d_vertex_texture(double x, double y, double z, double xtex, double ytex) {}
void d3d_vertex_texture_color(double x, double y, double z, double xtex, double ytex, double col, double alpha) {}

/*
List functions
*/
int ds_list_create() {
    #warning "ds_list_create not implemented"
    return 0;} //Creates a new list. The function returns an integer as an id that must be used in all other functions to access the particular list.
void ds_list_destroy(int id) {} //Destroys the list with the given id, freeing the memory used. Don't forget to call this function when you are ready with the structure.
void ds_list_clear(int id) {} //Clears the list with the given id, removing all data from it but not destroying it.
void ds_list_copy(int id, int source) {} //Copies the list source into the list with the given id.
int ds_list_size(int id) {return 0;} //Returns the number of values stored in the list.
bool ds_list_empty(int id) {return false;} //Returns whether the list is empty. This is the same as testing whether the size is 0.
void ds_list_add(int id, variant val) {} //Adds the value at the end of the list.
void ds_list_insert(int id, int pos, variant val) {} //Inserts the value at position pos in the list. The first position is 0, the last position is the size of the list minus 1.
void ds_list_replace(int id, int pos, variant val) {} //Replaces the value at position pos in the list with the new value.
void ds_list_delete(int id, int pos) {} //Deletes the value at position pos in the list. (Position 0 is the first element.)
int ds_list_find_index(int id, variant val) {return 0;} //Find the position storing the indicated value. If the value is not in the list -1 is returned.
variant ds_list_find_value(int id, int pos) {return 0;} //Returns the value stored at the indicated position in the list.
void ds_list_sort(int id, bool ascend) {} //Sorts the values in the list. When ascend is true the values are sorted in ascending order, otherwise in descending order.
void ds_list_shuffle(int id) {} //Shuffles the values in the list such that they end up in a random order.
void ds_list_write(int id) {} //Turns the data structure into a string and returns this string. The string can then be used to e.g. save it to a file. This provides an easy mechanism for saving data structures.
void ds_list_read(int id, string str) {} //Reads the data structure from the given string (as created by the previous call).


/*
 Grid functions
 */
int ds_grid_create(int w, int h) {} // Creates a new grid with the indicated width and height. The function returns an integer as an id that must be used in all other functions to access the particular grid.
void ds_grid_destroy(int gid) {} // Destroys the grid with the given id, freeing the memory used. Don't forget to call this function when you are ready with the structure.
void ds_grid_copy(int gid, int source) {} // Copies the grid source into the grid with the given id.
void ds_grid_resize(int gid, int w, int h) {} // Resizes the grid to the new width and height. Existing cells keep their original value.
int ds_grid_width(int gid){} // Returns the width of the grid with the indicated id.
int ds_grid_height(int gid) {} // Returns the height of the grid with the indicated id.
void ds_grid_clear(int gid, int val) {} // Clears the grid with the given id, to the indicated value (can both be a number or a string).
var ds_grid_set(int gid, int x, int y, var val) {} // Sets the indicated cell in the grid with the given id, to the indicated value (can both be a number or a string).
void ds_grid_add(int gid, int x, int y, var val) {} // Add the value to the indicated cell in the grid with the given id. For strings this corresponds to concatenation.
void ds_grid_multiply(int gid, int x, int y, var val) {} // Multiplies the value to the indicated cell in the grid with the given id. Is only valid for numbers.
void ds_grid_set_region(int gid, int x1, int y1, int x2, int y2, var val) {} // Sets the all cells in the region in the grid with the given id, to the indicated value (can both be a number or a string).
void ds_grid_add_region(int gid, int x1, int y1, int x2, int y2, var val) {} // Add the value to the cell in the region in the grid with the given id. For strings this corresponds to concatenation.
void ds_grid_multiply_region(int gid, int x1, int y1, int x2, int y2, var val) {} // Multiplies the value to the cells in the region in the grid with the given id. Is only valid for numbers.
void ds_grid_set_disk(int gid, int xm, int ym, int r, var val) {} // Sets all cells in the disk with center (xm,ym) and radius r.
void ds_grid_add_disk(int gid, int xm, int ym, int r, var val) {} // Add the value to all cells in the disk with center (xm,ym) and radius r.
void ds_grid_multiply_disk(int gid, int xm, int ym, int r, var val) {} // Multiply the value to all cells in the disk with center (xm,ym) and radius r.
void ds_grid_set_grid_region(int gid, int source, int x1, int y1, int x2, int y2, int xpos, var ypos) {} // Copies the contents of the cells in the region in grid source to grid id. xpos and ypos indicate the place where the region must be placed in the grid. (Can also be used to copy values from one place in a grid to another.)
void ds_grid_add_grid_region(int gid, int source, int x1, int y1, int x2, int y2, int xpos, var ypos) {} // Adds the contents of the cells in the region in grid source to grid id. xpos and ypos indicate the place where the region must be added in the grid. (id and source can be the same.)
void ds_grid_multiply_grid_region(int gid, int source, int x1, int y1, int x2, int y2, int xpos, var ypos) {} // Multiplies the contents of the cells in the region in grid source to grid id. xpos and ypos indicate the place where the region must be multiplied in the grid. (id and source can be the same.) Only valid for numbers.
var ds_grid_get(int gid, int x, int y) { return 0;} // Returns the value of the indicated cell in the grid with the given id.
int ds_grid_get_sum(int gid, int x1, int y1, int x2, int y2) {} // Returns the sum of the values of the cells in the region in the grid with the given id. Does only work when the cells contain numbers.
int ds_grid_get_max(int gid, int x1, int y1, int x2, int y2) {} // Returns the maximum of the values of the cells in the region in the grid with the given id. Does only work when the cells contain numbers.
int ds_grid_get_min(int gid, int x1, int y1, int x2, int y2) {} // Returns the minimum of the values of the cells in the region in the grid with the given id. Does only work when the cells contain numbers.
int ds_grid_get_mean(int gid, int x1, int y1, int x2, int y2) {} // Returns the mean of the values of the cells in the region in the grid with the given id. Does only work when the cells contain numbers.
int ds_grid_get_disk_sum(int gid, int xm, int ym, int r) {} // Returns the sum of the values of the cells in the disk.
int ds_grid_get_disk_min(int gid, int xm, int ym, int r) {} // Returns the min of the values of the cells in the disk.
int ds_grid_get_disk_max(int gid, int xm, int ym, int r) {} // Returns the max of the values of the cells in the disk.
int ds_grid_get_disk_mean(int gid, int xm, int ym, int r) {} // Returns the mean of the values of the cells in the disk.
bool ds_grid_value_exists(int gid, int x1, int y1, int x2, int y2, int val) {} // Returns whether the value appears somewhere in the region.
int ds_grid_value_x(int gid, int x1, int y1, int x2, int y2, int val) {} // Returns the x-coordinate of the cell in which the value appears in the region.
int ds_grid_value_y(int gid, int x1, int y1, int x2, int y2, int val) {} // Returns the y-coordinate of the cell in which the value appears in the region.
bool ds_grid_value_disk_exists(int gid, int xm, int ym, int r, int val) {} // Returns whether the value appears somewhere in the disk.
int ds_grid_value_disk_x(int gid, int xm, int ym, int r, int val) {} // Returns the x-coordinate of the cell in which the value appears in the disk.
int ds_grid_value_disk_y(int gid, int xm, int ym, int r, int val) {} // Returns the y-coordinate of the cell in which the value appears in the disk.
void ds_grid_shuffle(int gid) {} // Shuffles the values in the grid such that they end up in a random order.
string ds_grid_write(int gid) {} // Turns the data structure into a string and returns this string. The string can then be used to e.g. save it to a file. This provides an easy mechanism for saving data structures.
void ds_grid_read(int gid, string str) {} // Reads the data structure from the given string (as created by the previous call).

/*
 Priority queue functions
 */
int ds_priority_create() {} // Creates a new priority queue. The function returns an integer as an id that must be used in all other functions to access the particular priority queue.
void ds_priority_destroy(int pid) {} // Destroys the priority queue with the given id, freeing the memory used. Don't forget to call this function when you are ready with the structure.
void ds_priority_clear(int pid) {} // Clears the priority queue with the given id, removing all data from it but not destroying it.
void ds_priority_copy(int pid, int source) {} // Copies the priority queue source into the priority queue with the given id.
int ds_priority_size(int pid) {} // Returns the number of values stored in the priority queue.
bool ds_priority_empty(int pid) {} // Returns whether the priority queue is empty. This is the same as testing whether the size is 0.
void ds_priority_add(int pid, int val, int prio) {} // Adds the value with the given priority to the priority queue.
void ds_priority_change_priority(int pid, int val, int prio) {} // Changes the priority of the given value in the priority queue.
int ds_priority_find_priority(int pid, int val) {} // Returns the priority of the given value in the priority queue.
void ds_priority_delete_value(int pid, int val) {} // Deletes the given value (with its priority) from the priority queue.
int ds_priority_delete_min(int pid) {} // Returns the value with the smallest priority and deletes it from the priority queue.
int ds_priority_find_min(int pid) {} // Returns the value with the smallest priority but does not delete it from the priority queue.
int ds_priority_delete_max(int pid) {} // Returns the value with the largest priority and deletes it from the priority queue.
int ds_priority_find_max(int pid) {} // Returns the value with the largest priority but does not delete it from the priority queue.
string ds_priority_write(int pid) {} // Turns the data structure into a string and returns this string. The string can then be used to e.g. save it to a file. This provides an easy mechanism for saving data structures.
void ds_priority_read(int pid, string str) {} // Reads the data structure from the given string (as created by the previous call).

/* Queue */
int ds_queue_create() {return 0;}
void ds_queue_destroy(int id) {}
void ds_queue_clear(int id) {}
void ds_queue_copy(int id, int source) {}
int ds_queue_size(int id) {return 0;}
bool ds_queue_empty(int id) {}
void ds_queue_enqueue(int id, int val) {}
int ds_queue_dequeue(int id) {return 0;}
int ds_queue_head(int id) {return 0;}
int ds_queue_tail(int id)  {return 0;}
string ds_queue_write(int id) {}
void ds_queue_read(int id, string str) {}

int ds_map_create(){return 0;}
void ds_map_destroy(int id) {}
void ds_map_clear(int id) {}
void ds_map_copy(int id, int source) {}
int ds_map_size(int id) {return 0;}
bool ds_map_empty(int id) {return true;}
void ds_map_add(int id, var key, var val) {}
void ds_map_replace(int id, var key, var val) {}
void ds_map_delete(int id, var key)  {}
bool ds_map_exists(int id, var key) {return false;}
var ds_map_find_value(int id, var key) {return 0;}
var ds_map_find_previous(int id, var key) {return 0;}
var ds_map_find_next(int id, var key) {return 0;}
var ds_map_find_first(int id) {return 0;}
var ds_map_find_last(int id){return 0;}
string ds_map_write(int id) {return "";}
void ds_map_read(int id, string str) {}


/*
 date functions
 */
int date_current_datetime() {} // Returns the date-time value that corresponds to the current moment.
int date_current_date() {} // Returns the date-time value that corresponds to the current date only (ignoring the time).
int date_current_time() {} // Returns the date-time value that corresponds to the current time only (ignoring the date).
int date_create_datetime(int year, int month, int day, int hour, int minute, int second) {} // Creates a date-time value corresponding to the indicated date and time.
int date_create_date(int year, int month, int day) {} // Creates a date-time value corresponding to the indicated date.
int date_create_time(int hour, int minute, int second) {} // Creates a date-time value corresponding to the indicated time.
int date_valid_datetime(int year, int month, int day, int hour, int minute, int second) {} // Returns whether the indicated date and time are valid.
int date_valid_date(int year, int month, int day) {} // Returns whether the indicated date is valid.
bool date_valid_time(int hour, int minute, int second) {} // Returns whether the indicated time is valid.
int date_inc_year(int date, int amount) {} // Returns a new date that is amount years after the indicated date. amount must be an integer number.
int date_inc_month(int date, int amount) {} // Returns a new date that is amount months after the indicated date. amount must be an integer number.
int date_inc_week(int date, int amount) {} // Returns a new date that is amount weeks after the indicated date. amount must be an integer number.
int date_inc_day(int date, int amount) {} // Returns a new date that is amount days after the indicated date. amount must be an integer number.
int date_inc_hour(int date, int amount) {} // Returns a new date that is amount hours after the indicated date. amount must be an integer number.
int date_inc_minute(int date, int amount) {} // Returns a new date that is amount minutes after the indicated date. amount must be an integer number.
int date_inc_second(int date, int amount) {} // Returns a new date that is amount seconds after the indicated date. amount must be an integer number.
int date_get_year(int date) {} // Returns the year corresponding to the date.
int date_get_month(int date) {} // Returns the month corresponding to the date.
int date_get_week(int date) {} // Returns the week of the year corresponding to the date.
int date_get_day(int date) {} // Returns the day of the month corresponding to the date.
int date_get_hour(int date) {} // Returns the hour corresponding to the date.
int date_get_minute(int date) {} // Returns the minute corresponding to the date.
int date_get_second(int date) {} // Returns the second corresponding to the date.
int date_get_weekday(int date) {} // Returns the day of the week corresponding to the date.
int date_get_day_of_year(int date) {} // Returns the day of the year corresponding to the date.
int date_get_hour_of_year(int date) {} // Returns the hour of the year corresponding to the date.
int date_get_minute_of_year(int date) {} // Returns the minute of the year corresponding to the date.
int date_get_second_of_year(int date) {} // Returns the second of the year corresponding to the date.
int date_year_span(int date1, int date2) {} // Returns the number of years between the two dates. It reports incomplete years as a fraction. 
int date_month_span(int date1, int date2) {} // Returns the number of months between the two dates. It reports incomplete months as a fraction. 
int date_week_span(int date1, int date2) {} // Returns the number of weeks between the two dates. It reports incomplete weeks as a fraction. 
int date_day_span(int date1, int date2) {} // Returns the number of days between the two dates. It reports incomplete days as a fraction. 
int date_hour_span(int date1, int date2) {} // Returns the number of hours between the two dates. It reports incomplete hours as a fraction. 
int date_minute_span(int date1, int date2) {} // Returns the number of minutes between the two dates. It reports incomplete minutes as a fraction. 
int date_second_span(int date1, int date2) {} // Returns the number of seconds between the two dates. It reports incomplete seconds as a fraction.
int date_compare_datetime(int date1, int date2) {} // Compares the two date-time values. Returns -1, 0, or 1 depending on whether the first is smaller, equal, or larger than the second value. 
int date_compare_date(int date1, int date2) {} // Compares the two date-time values only taking the date part into account. Returns -1, 0, or 1 depending on whether the first is smaller, equal, or larger than the second value. 
int date_compare_time(int date1, int date2) {} // Compares the two date-time values only taking the time part into account. Returns -1, 0, or 1 depending on whether the first is smaller, equal, or larger than the second value. 
int date_date_of(int date) {} // Returns the date part of the indicated date-time value, setting the time part to 0.
int date_time_of(int date) {} // Returns the time part of the indicated date-time value, setting the date part to 0.
int date_datetime_string(int date) {} // Returns a string indicating the given date and time in the default format for the system.
int date_date_string(int date) {} // Returns a string indicating the given date in the default format for the system.
int date_time_string(int date) {} // Returns a string indicating the given time in the default format for the system.
int date_days_in_month(int date) {} // Returns the number of days in the month indicated by the date-time value.
int date_days_in_year(int date) {} // Returns the number of days in the year indicated by the date-time value.
int date_leap_year(int date) {} // Returns whether the year indicated by the date-time value is a leap year.
int date_is_today(int date) {} // Returns whether the indicated date-time value is on today.

/*
 math
 */
double enigma_min(double x, double y) {return 0;}
double enigma_min(double x, double y, double z) { return enigma_min(x,enigma_min(y,z));}
double enigma_min(double x, double y, double z,double a) { return enigma_min(x,enigma_min(y,z,a));}
double enigma_max(double x, double y) {return 0;}
double enigma_max(double x, double y, double z) { return enigma_max(x,enigma_max(y,z));}
double enigma_max(double x, double y, double z,double a) { return enigma_max(x,enigma_max(y,z,a));}
double mean(double x, double y) { return x;}
double mean(double x, double y, double z) {return mean(x,mean(y,z));}
double mean(double x, double y, double z,double a) {return mean(x,mean(y,z,a));}

/*median by YellowAfterLife*/
double median(double x)           { return x; }
double median(double x,double y)  { return fmin(x,y); }
double median(double x,double y,double z) { return x > y ? x > z ? y > z ? y : z : x : y > z ? x > z ? x : z : y; }
double median(double w,double x,double y,double z) { return w > x ? w > y ? w > z ? median(x,y,z) : median(w,x,y) : y > z ? median(w,x,z) : median(w,x,y) : x > y ? x > z ? median(w,y,z) : median(w,x,y) : y > z ? median(w,x,z) : median(w,x,y); }


double enigma_floor(double i) {
    return floor(i);
}

/*
Using dlls
*/
#ifdef ENIGMA_WS_COCOA
int external_define(string dll, string name, int calltype, int restype, int argnumb, ...) { return 0;}
variant external_call(/*int eid, */variant args, ...) { return 0;}
void external_free(string dll) {}
var execute_string(variant args, ...) {} //can only have 1 argument, the string to execute!
void execute_file(string fname) {}
//void script_execute(variant args, ...) {}

//void script_execute(string script,string argument0,string argument1,string argument2,string argument3,string argument4) {}
//#define script_execute(script,argument0,argument1,argument2,argument3,argument4) script((argument0),(argument1),(argument2),(argument3),(argument4))
//#define script_execute(script) script_execute("script")


int window_handle() {return 0;}
void window_set_showborder(bool show){}
void window_default() {}
void window_set_stayontop(bool stay) {}
void screen_wait_vsync() {}
int window_get_region_width() { return 0;}
int window_get_region_height() { return 0;}
#endif

/*
Ini functions
*/
/*void ini_open(string name) {}//Opens the INI file with the given name. The ini file must be stored in the same folder as the game!
void ini_close() {}//Closes the currently open INI file.
string ini_read_string(string section, string key, string defaultval) {}//Reads the string value of the indicated key in the indicated section. When the key or section does not exist the default value is returned.
double ini_read_real(string section, string key, variant defaultval) {}//Reads the real value of the indicated key in the indicated section. When the key or section does not exist the default value is returned.
void ini_write_string(string section, string key, string value) {}//Writes the string value for the indicated key in the indicated section.
void ini_write_real(string section, string key, variant value) {}//Writes the real value for the indicated key in the indicated section.
bool ini_key_exists(string section, string key) {return false;}//Returns whether the indicated key exists in the indicated section.
bool ini_section_exists(string section) { return false;}//Returns whether the indicated section exists.
void ini_key_delete(string section, string key) {}//Deletes the indicated key from the indicated section.
void ini_section_delete(string section) {}//Deletes the indicated section.
*/
/*
Effects
*/
void effect_create_below(int kind, int x, int y, int size, double color) {}//Creates an effect of the given kind (see above) at the indicated position. size give the size as follows: 0 = small, 1 = medium, 2 = large. color indicates the color to be used. The effect is created below the instances, that is, at a depth of 100000.
void effect_create_above(int kind, int x, int y, int size, double color) {}//Similar to the previous function but this time the effect is created on top of the instances, that is, at a depth of -100000.
void effect_clear() {}// Clears all effects.

/*
Part systems
*/
int part_system_create() {return 0;}//Creates a new particle system. It returns the index of the system. This index must be used in all calls below to set the properties of the particle system.
void part_system_destroy(int ind) {}//Destroys the particle system ind. Call this if you don't need it anymore to save space.
bool part_system_exists(int ind) {return false;}//Returns whether the indicated particle system exists.
void part_system_clear(int ind) {}//Clears the particle system ind to its default settings, removing all particles and emitter and attractors in it.
void part_system_draw_order(int ind, bool oldtonew) {}//Sets the order in which the particle system draws the particles. When oldtonew is true the oldest particles are drawn first and the newer one lie on top of them (default). Otherwise the newest particles are drawn first. This can give rather different effects.
void part_system_depth(int ind, int depth) {}//Sets the depth of the particle system. This can be used to let the particles appear behind, in front of, or in between instances.
void part_system_position(int ind, int x, int y) {}//Sets the position where the particle system is drawn. This is normally not necessary but if you want to have particles at a position relative to a moving object, you can set the position e.g. to that object.

void part_system_automatic_update(int ind, bool automatic) {}//Indicates whether the particle system must be updated automatically (1) or not (0). Default is 1.
void part_system_automatic_draw(int ind, bool automatic) {}//Indicates whether the particle system must be drawn automatically (1) or not (0). Default is 1.
void part_system_update(int ind) {}//This functions updates the position of all particles in the system and lets the emitters create particles. You only have to call this when updating is not automatic. (Although sometimes it is also useful to call this function a couple of time to get the system going.)
void part_system_drawit(int ind) {}//This functions draws the particles in the system. You only have to call this when drawing is not automatic. It should be called in the draw event of some object.

void part_particles_create(int ind, int x, int y, int parttype, int number) {}//This functions creates number particles of the indicated type at postion (x,y) in the system.
void part_particles_create_color(int ind, int x, int y, int parttype, double color, int number) {}//This functions creates number particles of the indicated type at postion (x,y) in the system with the indicated color. This is only useful when the particle type defines a single color (or does not define a color at all).
void part_particles_clear(int ind) {}//This functions removes all particles in the system.
int part_particles_count(int ind) {return 0;}//This functions returns the number of particles in the system.


/*
Part types
*/
int part_type_create() {return 0;}//Creates a new particle type. It returns the index of the type. This index must be used in all calls below to set the properties of the particle type. So you will often store it in a global variable.
void part_type_destroy(int ind) {}//Destroys particle type ind. Call this if you don't need it anymore to save space.
bool part_type_exists(int ind) {}//Returns whether the indicated particle type exists.
void part_type_clear(int ind) {}//Clears the particle type ind to its default settings.

void part_type_shape(int ind, int shape) {}//Sets the shape of the particle type to any of the constants above (default is pt_shape_pixel).
void part_type_sprite(int ind, int sprite, bool animat, bool stretch, bool random) {}//Sets your own sprite for the particle type. With animate you indicate whether the sprite should be animated (1) or not (0). With stretch (1 or 0) you indicate whether the animation must be stretched over the lifetime of the particle. And with random (1 or 0) you can indicate whether a random subimage must be choosen as starting image.
void part_type_size(int ind, int size_min, int size_max, int size_incr, int size_wiggle) {}//Sets the size parameters for the particle type. You specify the minimum starting size, the maximum starting size, the size increase in each step (use a negative number for a decrease in size) and the amount of wiggling. (The default size is 1 and default the size does not change.)
void part_type_scale(int ind, double xscale, double yscale) {}//Sets the horizontal and vertical scale. This factor is multiplied with the size. It is in particular useful when you need to scale differently in x- and y-direction.

void part_type_orientation(int ind, int ang_min, int ang_max, int ang_incr, int ang_wiggle, int ang_relative){}//

void part_type_color1(int ind, double color1) {}//Indicates a single color to be used for the particle.
void part_type_color2(int ind, double color1, double color2) {}//Specifies two colors between which the color is interpolated.
void part_type_color3(int ind, double color1, double color2, double color3) {}//Similar but this time the color is interpolated between three colors that represent the color at the start, half-way, and at the end.
void part_type_color_mix(int ind, double color1, double color2) {}//With this function you indicate that the particle should get a color that is a random mixture of the two indicated colors. This color will remain fixed over the lifetime of the particle.
void part_type_color_rgb(int ind, int rmin, int rmax, int gmin, int gmax, int bmin, int bmax) {}//Can be used to indicate that each particle must have a fixed color but choosen from a range. You specify a range in the red, green, and blue component of the color (each between 0 and 255).
void part_type_color_hsv(int ind, int hmin, int hmax, int smin, int smax, int vmin, int vmax) {}//Can be used to indicate that each particle must have a fixed color but choosen from a range. You specify a range in the hue saturation and value component of the color (each between 0 and 255).

void part_type_alpha1(int ind, double alpha1) {}//Sets a single alpha transparency parameter (0-1) for the particle type.
void part_type_alpha2(int ind, double alpha1, double alpha2) {}//Similar but this time a start and end value are given and the alpha value is interpolated between them.
void part_type_alpha3(int ind, double alpha1, double alpha2, double alpha3) {}//This time three values are given between which the alpha transparency is interpolated.
void part_type_blend(int ind, int additive) {}//Sets whether to use additive blending (1) or normal blending (0) for the particle type.

void part_type_life(int ind, int life_min, int life_max)  {}//Sets the lifetime bounds for the particle type. (Default both are 100.)
void part_type_step(int ind, int step_number, int step_type)  {}//Sets the number and type of particles that must be generated in each step for the indicated particle type. If you use a negative value, in each step a particle is generated with a chance -1/number. So for example with a value of -5 a particle is generated on average once every 5 steps.
void part_type_death(int ind, int death_number, int death_type)  {}//

void part_type_speed(int ind, int speed_min, int speed_max, int speed_incr, int speed_wiggle) {}
void part_type_direction(int ind, int dir_min, int dir_max, int dir_incr, int dir_wiggle) {}
void part_type_gravity(int ind, int grav_amount, int grav_dir) {}

/*
Part emmitters
*/
int part_emitter_create(int ps) {return 0;}//Creates a new emitter in the given particle system. It returns the index of the emitter. This index must be used in all calls below to set the properties of the emitter.
void part_emitter_destroy(int ps, int ind) {}//Destroys emitter ind in the particle system. Call this if you don't need it anymore to save space.
void part_emitter_destroy_all(int ps) {}//Destroys all emitters in the particle system that have been created.
bool part_emitter_exists(int ps, int ind) {return false;}//Returns whether the indicated emitter exists in the particle system.
void part_emitter_clear(int ps, int ind) {}//Clears the emitter ind to its default settings.
void part_emitter_region(int ps, int ind, int xmin, int xmax, int ymin, int ymax, int shape, int distribution) {}//Sets the region and distribution for the emitter.
void part_emitter_burst(int ps, int ind, int parttype, int number) {}//Bursts once number particles of the indicated type from the emitter.
void part_emitter_stream(int ps, int ind, int parttype, int number) {}//

/*
Part destroyer
*/
int part_destroyer_create(int ps) {return 0;}//Creates a new destroyer in the given particle system. It returns the index of the destroyer. This index must be used in all calls below to set the properties of the destroyer.
void part_destroyer_destroy(int ps, int ind) {}//Destroys destroyer ind in the particle system. Call this if you don't need it anymore to save space.
void part_destroyer_destroy_all(int ps) {}//Destroys all destroyers in the particle system that have been created.
bool part_destroyer_exists(int ps, int ind) {return false;}//Returns whether the indicated destroyer exists in the particle system.
void part_destroyer_clear(int ps, int ind) {}//Clears the destroyer ind to its default settings.
void part_destroyer_region(int ps, int ind, int xmin, int xmax, int ymin, int ymax, int shape) {}//Sets the region for the destroyer.

/*
Part deflector
*/
int part_deflector_create(int ps) {return 0;}//Creates a new deflector in the given particle system. It returns the index of the deflector. This index must be used in all calls below to set the properties of the deflector.
void part_deflector_destroy(int ps, int ind) {}//Destroys deflector ind in the particle system. Call this if you don't need it anymore to save space.
void part_deflector_destroy_all(int ps) {}//Destroys all deflectors in the particle system that have been created.
bool part_deflector_exists(int ps, int ind) {return false;}//Returns whether the indicated deflector exists in the particle system.
void part_deflector_clear(int ps, int ind) {}//Clears the deflector ind to its default settings.
void part_deflector_region(int ps, int ind, int xmin, int xmax, int ymin, int ymax) {}//Sets the region for the deflector.
void part_deflector_kind(int ps, int ind, int kind) {}//Sets the kind for the deflector.
void part_deflector_friction(int ps, int ind, double friction) {}//Sets the friction for the deflector.

/*
Part changer
*/
int part_changer_create(int ps)  {return 0;}//Creates a new changer in the given particle system. It returns the index of the changer. This index must be used in all calls below to set the properties of the changer.
void part_changer_destroy(int ps, int ind) {}//Destroys changer ind in the particle system. Call this if you don't need it anymore to save space.
void part_changer_destroy_all(int ps) {}//Destroys all changers in the particle system that have been created.
bool part_changer_exists(int ps, int ind) {return false;}//Returns whether the indicated changer exists in the particle system.
void part_changer_clear(int ps, int ind) {}//Clears the changer ind to its default settings.
void part_changer_region(int ps, int ind, int xmin, int xmax, int ymin, int ymax, int shape) {}//Sets the region for the changer.
void part_changer_types(int ps, int ind, int parttype1, int parttype2) {}//Sets which particle type the changer must changed into what other type.
void part_changer_kind(int ps, int ind, int kind) {}//Sets the kind for the changer.

/*
 Part attractor
 */
int part_attractor_create(int ps){}// Creates a new attractor in the given particle system. It returns the index of the attractor. This index must be used in all calls below to set the properties of the attractor.
void part_attractor_destroy(int ps, int ind){}// Destroys attractor ind in the particle system. Call this if you don't need it anymore to save space.
void part_attractor_destroy_all(int ps){}// Destroys all attractors in the particle system that have been created.
bool part_attractor_exists(int ps, int ind){}// Returns whether the indicated attractor exists in the particle system.
void part_attractor_clear(int ps, int ind){}// Clears the attractor ind to its default settings.
void part_attractor_position(int ps, int ind, int x, int y){}// Sets the position of attractor ind to (x,y).
void part_attractor_force(int ps, int ind, int force, int dist, int kind, int aditive) {}//Sets the force parameters of attractor ind.

/*
Instances
*/
void instance_copy(bool performevent) {}// Creates a copy of the current instance. The argument indicates whether the creation event must be executed for the copy. The function returns the id of the new copy.
void instance_change(int obj, bool perf) {}//Changes the instance into obj. perf indicates whether to perform the destroy and creation events.
void position_destroy(int x, int y) {}//Destroys all instances whose sprite contains position (x,y).
void position_change(int x, int y, int obj, bool perf) {}//

/*
Instance deactivate
*/
void instance_deactivate_all(bool notme) {}//Deactivates all instances in the room. If notme is true the calling instance is not deactivated (which is normally what you want).

void instance_deactivate_region(int left, int top, int width, int height, int inside, bool notme) {}//Deactivates all instances in the indicated region (that is, those whose bounding box lies partially inside the region). If inside is false the instances completely outside the region are deactivated. If notme is true the calling instance is not deactivated (which is normally what you want).
void instance_activate_all() {}//Activates all instances in the room.
void instance_activate_object(int obj) {}//Activates all instances in the room of the given object. You can also use all to indicate that all instances must be activated or the id of an instance to activate an individual instance.
void instance_activate_region(int left, int top, int width, int height, int inside) {}

/*
Sounds
*/
void sound_stop_all() {}
void sound_global_volume(int value) {}
void sound_fade(int index, int value, double time) {}
void sound_background_tempo(double factor) {}
void sound_set_search_directory(string dir) {}

void sound_delete(int index) {}
bool sound_exists(int ind) {}//Returns whether a sound with the given index exists.
string sound_get_name(int ind) {}//Returns the name of the sound with the given index.
int sound_get_kind(int ind) {}//Returns the kind of the sound with the given index (0=normal, 1=background, 2=3d, 3=mmplayer).
bool sound_get_preload(int ind) {}//Returns whether the sound with the given index has preload set.

void sound_volume(int sound, float value) {
    
}

/*
Paths
*/
void path_start(int path, double speed, int endaction, bool absolute) {}
void path_end() {}
int path_add() {
    return 0; 
}

bool path_exists(int ind) {}//Returns whether a path with the given index exists.
string path_get_name(int ind) {}//Returns the name of the path with the given index.
int path_get_length(int ind) {}//Returns the length of the path with the given index.
int path_get_kind(int ind) {}//Returns the kind of connections of the path with the given index (0=straight, 1=smooth).
bool path_get_closed(int ind) {}//Returns whether the path is closed or not.
float path_get_precision(int ind) {}//Returns the precision used for creating smoothed paths.
int path_get_number(int ind) {}//Returns the number of defining points for the path.
int path_get_point_x(int ind, int n) {}//Returns the x-coordinate of the n'th defining point for the path. 0 is the first point.
int path_get_point_y(int ind, int n) {}//Returns the y-coordinate of the n'th defining point for the path. 0 is the first point.
float path_get_point_speed(int ind, int n) {}//Returns the speed factor at the n'th defining point for the path. 0 is the first point.
int path_get_x(int ind, float pos) {}//Returns the x-coordinate at position pos for the path. pos must lie between 0 and 1.
int path_get_y(int ind, float pos) {}//Returns the y-coordinate at position pos for the path. pos must lie between 0 and 1.
int path_get_speed(int ind, float pos) {}//Returns the speed factor at position pos for the path. pos must lie between 0 and 1.

void path_set_kind(int ind, int val) {}//Sets the kind of connections of the path with the given index (0=straight, 1=smooth).
void path_set_closed(int ind, int closed) {}//Sets whether the path must be closed (true) or open (false).
void path_set_precision(int ind, int prec) {}//Sets the precision with which the smooth path is calculated (should lie between 1 and 8).
void path_delete(int ind) {}//Deletes the path with the given index.
void path_duplicate(int ind) {}//Creates a duplicate copy of the path with the given index. Returns the index of the copy.
void path_assign(int ind, int path) {}//Assigns the indicated path to path ind. So this makes a copy of the path. In this way you can easily set an existing path to a different, e.g. new path. 
void path_append(int ind, int path) {}//Appends the indicated path to path ind. 
void path_add_point(int ind, int x, int y, int speed) {}//Adds a point to the path with the given index, at position (x,y) and with the given speed factor. Remember that a factor of 100 corresponds to the actual speed. Lower values mean slowing down and higher mean speeding up.
void path_insert_point(int ind, int n, int x, int y, int speed) {}//Inserts a point in the path with the given index before point n, at position (x,y) and with the given speed factor.
void path_change_point(int ind, int n, int x, int y, int speed) {}//Changes the point n in the path with the given index to position (x,y) and the given speed factor.
void path_delete_point(int ind, int n) {}//Deletes the point n in the path with the given index.
void path_clear_points(int ind) {}//Clears all the points in the path, turning it into an empty path.
void path_reverse(int ind) {}//Reverses the path.
void path_mirror(int ind) {}//Mirrors the path horizontally (with respect to its center).
void path_flip(int ind) {}//Flips the path vertically (with respect to its center).
void path_rotate(int ind, int angle) {}//Rotates the path counter clockwise over angle degrees (around its center).
void path_scale(int ind, int xscale, int yscale) {}//Scales the path with the given factors (from its center).
void path_shift(int ind, int xshift, int yshift) {}//Shifts the path over the given amount.


/* Surfaces
 */
int surface_create(int w, int h) {
    return 0;
}
void surface_free(int surfid) {} 
bool surface_exists(var surfid){
    return 0;
}

int surface_get_width(int surfid) {
    return 0;
}
int surface_get_height(int surfid) {
    return 0;
}
int surface_get_texture(int surfid) {
    return 0;
}

void surface_set_target(int surfid) {}
void surface_reset_target() {}
int surface_getpixel(int sid, int x, int y) {}

void draw_surface(int sid, int x, int y) {} //  Draws the surface at position (x,y). (Without color blending and no alpha transparency.)
void draw_surface_stretched(int sid, int x, int y, int w, int h) {} // Draws the surface stretched to the indicated region.
void draw_surface_tiled(int sid, int x, int y) {} // Draws the surface tiled so that it fills the entire room.
void draw_surface_part(int sid, int left, int top, int width, int height, int x, int y) {} // Draws the indicated part of the surface with its origin at position (x,y).
void draw_surface_ext(int sid, int x, int y, double xscale, double yscale, double rot, int color,int alpha) {} // Draws the surface scaled and rotated with blending color (use c_white for no blending) and transparency alpha (0-1).
void draw_surface_stretched_ext(int sid, int x, int y, int w, int h, int color, int alpha) {} // Draws the surface stretched to the indicated region. color is the blending color and alpha indicates the transparency setting.
void draw_surface_tiled_ext(int sid, int x, int y, double xscale, double yscale, int color, int alpha) {} // Draws the surface tiled so that it fills the entire room but now with scale factors and a color and transparency setting.
void draw_surface_part_ext(int sid, int left, int top, int width, int height, int x, int y, int xscale, int yscale, int color, int alpha) {} // Draws the indicated part of the surface with its origin at position (x,y) but now with scale factors and a color and transparency setting.
void draw_surface_general(int sid, int left, int top, int width, int height, int x, int y, int xscale, int yscale, int rot, int c1, int c2, int c3, int c4, int alpha) {} // The most general drawing function. It draws the indicated part of the surface with its origin at position (x,y) but now with scale factors, a rotation angle, a color for each of the four vertices (top-left, top-right, bottom-right, and bottom-left), and an alpha transparency value.

/*
 Textures
 */

void texture_set_blending(bool blend) {} //Indicates whether to use blending with colors and alpha values. Switching this off might be faster on old hardware. This setting also influence the drawing of sprites and background. Default is true.

int texture_get_width(int texid) {return 1;} 
int texture_get_height(int texid) {return 1;} 

/*
 Backgrounds
 */
bool background_exists(int ind) {} //Returns whether a background with the given index exists.
string background_get_name(int ind) {} //Returns the name of the background with the given index.
double background_get_width(int ind) {} //Returns the width of the background with the given index.
double background_get_height(int ind) {} //Returns the height of the background with the given index.
bool background_get_transparent(int ind) {} //Returns whether the background with the given index is transparent.
bool background_get_smooth(int ind) {} //Returns whether the background with the given index has smoothed edges.
bool background_get_preload(int ind) {} //


int background_duplicate(int ind) {} //Creates a duplicate of the background with the given index. It returns the index of the new background. When an error occurs -1 is returned.
void background_assign(int ind, int back) {} //Assigns the indicated background to background ind. So this makes a copy of the background.
int background_add(string fname, bool transparent, bool smooth, bool preload) {} //Adds the image stored in the file fname to the set of background resources. Many different types of images can be dealt with. transparent indicates whether the image is partially transparent. smooth indicates whether to smooth the edges. preload indicates whether to preload the image into texture memory. The function returns the index of the new background that you can then use to draw it or to assign it to the variable background_index[0] to make it visible in the current room. When an error occurs -1 is returned.
int background_add_alpha(string fname, bool preload) {} //Adds the image stored in the file fname to the set of background resources, but this time the file has an alpha channel to indicate transparency (as for example in .png files). The arguments are the same as above (but two are missing as they are not relevant in this case). When an error occurs -1 is returned.
int background_replace(int ind, string fname, bool transparent, bool smooth, bool preload) {} //Same as above but in this case the background with index ind is replaced. The function returns whether it is successful. When the background is currently visible in the room it wil be replaced also.
int background_replace_alpha(int ind, string fname, bool preload) {} //Same as above but in this case the file has an alpha channel.
int background_create_color(int w, int h, int col, bool preload) {} //Creates a background of the given size and with the given color. It returns the index of the new background. When an error occurs -1 is returned.
int background_create_gradient(int w, int h, int col1, int col,int kind, bool preload) {} //Creates a gradient filled background of the given size. col1 and col2 indicate the two colors. kind is a number between 0 and 5 indicating the kind of gradient: 0=horizontal 1=vertical, 2= rectangle, 3=ellipse, 4=double horizontal, 5=double vertical. It returns the index of the new background. When an error occurs -1 is returned.
int background_create_from_screen(int x, int y, int w, int h, bool transparent, bool smooth, bool preload) {} //Creates a background by copying the given area from the screen. This makes it possible to create any background you want. Draw the image on the screen using the drawing functions and next create a background from it. (If you don't do this in the drawing event you can even do it in such a way that it is not visible on the screen by not refreshing the screen.) The other parameters are as above. The function returns the index of the new background. A work of caution is required here. Even though we speak about the screen, it is actually the drawing region that matters. The fact that there is a window on the screen and that the image might be scaled in this window does not matter.
int background_create_from_surface(int sid, int x, int y, int w, int h, bool transparent, bool smooth, bool preload){} // Creates a background by copying the given area from the surface with the given id. This makes it possible to create any background you want. Draw the image on the surface using the drawing functions and next create a background from it. Note that alpha values are maintained the background.
void background_delete(int ind){} // Deletes the background from memory, freeing the memory used.

void background_set_alpha_from_background(int ind, int back) {}

/*
The keyboard
*/
bool keyboard_get_numlock() {return false;}//Returns whether the numlock is set.
void keyboard_set_numlock(bool on) {}//Sets (true) or unsets (false) the numlock.
void keyboard_key_press(int key) {}//Simulates a press of the key with the indicated keycode.
void keyboard_key_release(int key) {}//Simulates a release of the key with the indicated keycode.
bool keyboard_check_direct(int key) {}

/*
The Joystick
*/
bool joystick_exists(int id) {return false;}
string joystick_name(int id) { return "NOJOYSTICKSUPPORT";} // Returns the name of the joystick
int joystick_axes(int id) {return 0;} //Returns the number of axes of the joystick.
int joystick_buttons(int id) {return 0;} //Returns the number of buttons of the joystick.
bool joystick_has_pov(int id) {return false;} //Returns whether the joystick has point-of-view capabilities.
int joystick_direction(int id) {return 0;} //Returns the keycode (vk_numpad1 to vk_numpad9) corresponding to the direction of joystick id (1 or 2).
bool joystick_check_button(int id, int numb) {return false;} //Returns whether the joystick button is pressed (numb in the range 1-32).
double joystick_xpos(int id) {return 0;} //Returns the position (-1 to 1) of the x-axis of joystick id.
double joystick_ypos(int id) {return 0;} //Returns the joysticks y-position.
double joystick_zpos(int id) {return 0;} //Returns the joysticks z-position (if it has a z-axis).
double joystick_rpos(int id) {return 0;} //Returns the joysticks rudder position (or fourth axis).
double joystick_upos(int id) {return 0;} //Returns the joysticks u-position (or fifth axis).
double joystick_vpos(int id) {return 0;} //Returns the joysticks v-position (or sixth axis).
double joystick_pov(int id) {return 0;}

/*
draw
*/
int draw_roundrect(float x1,float y1,float x2,float y2, bool outline) {
    draw_roundrect(x1,y1,x2,y2,1,outline);
    }
void draw_path(int path, int x, int y, int absolute) {}

void set_automatic_draw(int value)  {}

/* 
 File functions 
 */
string filename_name(string fname) {} //Returns the name part of the indicated file name, with the extension but without the path.
string filename_path(string fname) {} //Returns the path part of the indicated file name, including the final backslash.
string filename_dir(string fname) {} //Returns the directory part of the indicated file name, which normally is the same as the path except for the final backslash.
string filename_drive(string fname) {} //Returns the drive information of the filename.
string filename_ext(string fname) {} //Returns the extension part of the indicated file name, including the leading dot.
string filename_change_ext(string fname, string newext) {} //

/*
Old GM 4.0/5.0 compatibility functions
*/
bool instance_sprite(int spr) {return false;}
void draw_rectangle(float x1, float x2, float y1, float y2) {}
void draw_circle(float x1, float x2, float x3) {}
void draw_triangle (float x1, float x2, float x3,float x4, float x5, float x6) {}
void draw_fill(float x,float y) {}
void draw_polygon_begin() {}
void draw_polygon_vertex(float x,float y) {}
void draw_polygon_end() {}
void draw_pixel(float x,float y) {}
void draw_arrow(float x1, float y1, float x2, float y2, float line_size);
void action_draw_rectangle(float x1, float x2, float y1, float y2) {}
void action_fill_color(double col) {}
void file_write_string(string str) {}
void file_writeln() {}
void file_close() {}
void file_open_write(string fname) {}
int file_open_append(string fname) {return 0;}
int file_open_read(string fname) {return 0;}
string file_read_string() {return "";}
void action_draw_font(string str) {}
int font_get_size(int ind)  {}

//action_draw_font(Arial, 12, 32896, 1, 1, 0, 0);
#define action_draw_font(arg1,arg2,arg3,arg4,arg5,arg6,arg7) action_draw_font(arg1)


int irandom_range(int i, int j) {}
int enigma_make_color(int r, int g, int b) {} 
void move_contact(double x) {}
void move_bounce(double x) {}

int ev_create=0;
int ev_destroy=1;
int ev_step=3;
int ev_step_normal=0;
int ev_draw=8;
double current_time=0;
bool gamemaker_registered=true;

/*
 Tile functions
 */
int tile_add(int background, int left, int top, int width, int height, int x, int y, int depth){} // Adds a new tile to the room with the indicated values (see above for their meaning). The function returns the id of the tile that can be used later on.
void tile_delete(int tid){} // Deletes the tile with the given id.
bool tile_exists(int tid){} // Returns whether a tile with the given id exists.

int tile_get_x(int tid){} // Returns the x-position of the tile with the given id.
int tile_get_y(int tid){} // Returns the y-position of the tile with the given id.
int tile_get_left(int tid){} // Returns the left value of the tile with the given id.
int tile_get_top(int tid){} // Returns the top value of the tile with the given id.
int tile_get_width(int tid){} // Returns the width of the tile with the given id.
int tile_get_height(int tid){} // Returns the height of the tile with the given id.
int tile_get_depth(int tid){} // Returns the depth of the tile with the given id.
bool tile_get_visible(int tid){} // Returns whether the tile with the given id is visible.
int tile_get_xscale(int tid){} // Returns the xscale of the tile with the given id.
int tile_get_yscale(int tid){} // Returns the yscale of the tile with the given id.
int tile_get_background(int tid){} // Returns the background of the tile with the given id.
int tile_get_blend(int tid){} // Returns the blending color of the tile with the given id.
int tile_get_alpha(int tid){} // Returns the alpha value of the tile with the given id.

void tile_set_position(int tid, int x, int y){} // Sets the position of the tile with the given id.
void tile_set_region(int tid, int left, int right, int width, int height){} // Sets the region of the tile with the given id in its background.
void tile_set_background(int tid, int background){} // Sets the background for the tile with the given id.
void tile_set_visible(int tid, bool visible){} // Sets whether the tile with the given id is visible.
void tile_set_depth(int tid, int depth){} // Sets the depth of the tile with the given id.
void tile_set_scale(int tid, int xscale, int yscale){} // Sets the scaling of the tile with the given id.
void tile_set_blend(int tid, int color){} // Sets the blending color of the tile with the given id. Only available in the Pro Edition!
void tile_set_alpha(int tid, int alpha){} // Sets the alpha value of the tile with the given id.

void tile_layer_hide(int depth){} // Hides all tiles at the indicated depth layer.
void tile_layer_show(int depth){} // Shows all tiles at the indicated depth layer.
void tile_layer_delete(int depth){} // Deletes all tiles at the indicated depth layer.
void tile_layer_shift(int depth, int x, int y){} // Shifts all tiles at the indicated depth layer over the vector x,y. Can be used to create scrolling layers of tiles.
int tile_layer_find(int depth, int x, int y){} // Returns the id of the tile with the given depth at position (x,y). When no tile exists at the position -1 is returned. When multiple tiles with the given depth exist at the position the first one is returned.
void tile_layer_delete_at(int depth, int x, int y){} // Deletes the tile with the given depth at position (x,y). When multiple tiles with the given depth exist at the position they are all deleted.
void tile_layer_depth(int depth, int newdepth){} //

/*
 Motion planning
 */
int mp_grid_create(int left, int top, int hcells, int vcells, int cellwidth, int cellheight) {} //This function creates the grid. It returns an index that must be used in all other calls. You can create and maintain multiple grid structures at the same moment. left and top indicate the position of the top-left corner of the grid. hcells and vcells indicate the number of horizontal and vertical cells. Finally cellwidth and cellheight indicate the size of the cells.
void mp_grid_destroy(int gid) {} //Destroys the indicated grid structure and frees its memory. Don't forget to call this if you don't need the structure anymore.
void mp_grid_clear_all(int gid) {} //Mark all cells in the grid to be free.
void mp_grid_clear_cell(int gid, int h, int v) {} //Clears the indicated cell. Cell 0,0 is the top left cell.
void mp_grid_clear_rectangle(int gid, int left, int top, int right, int bottom) {} //Clears all cells that intersect the indicated rectangle (in room coordinates).
void mp_grid_add_cell(int gid, int h, int v) {} //Marks the indicated cell as being forbidden. Cell 0,0 is the top left cell.
void mp_grid_add_rectangle(int gid, int left, int top, int right, int bottom) {} //Marks all cells that intersect the indicated rectangle as being forbidden.
void mp_grid_add_instances(int gid, int obj, int prec) {} //Marks all cells that intersect an instance of the indicated object as being forbidden. You can also use an individual instance by making obj the id of the instance. Also you can use the keyword all to indicate all instances of all objects. prec indicates whether precise collision checking must be used (will only work if precise checking is enabled for the sprite used by the instance).
bool mp_grid_path(int gid, int path, int xstart, int ystart, int xgoal, int ygoal, int allowdiag) {} //Computes a path through the grid. path must indicate an existing path that will be replaced by the computer path. xstart and ystart indicate the start of the path and xgoal and ygoal the goal. allowdiag indicates whether diagonal moves are allowed instead of just horizontal or vertical. The function returns whether it succeeded in finding a path. (Note that the path is independent of the current instance; It is a path through the g rid, not a path for a specific instance.) 
void mp_grid_draw(int gid) {} //

void mp_linear_step(int x, int y, int stepsize, int checkall) {}
void mp_linear_step_object(int x, int y, int stepsize, int obj) {}
void mp_potential_step(int x, int y, int stepsize, int checkall) {}
void mp_potential_step_object(int x, int y, int stepsize, int obj) {}
void mp_potential_settings(int maxrot, int rotstep, int ahead, int onspot) {}

/*
 CD Functions
 */
void cd_init() {} //Must be called before using the other functions. Should also be called when a CD is changed (or simply from time to time).
bool cd_present() {} //Returns whether a CD is present in the default CD drive.
double cd_number() {} //Returns the number of tracks on the CD.
bool cd_playing() {} //Returns whether the CD is playing.
bool cd_paused() {} //Returns whether the CD is paused or stopped.
int cd_track() {} //Returns the number of the current track (1=the first).
double cd_length() {} //Returns the length of the total CD in milliseconds.
double cd_track_length(double n) {} //Returns the length of track n of the CD in milliseconds.
double cd_position() {} //Returns the current position on the CD in milliseconds.
double cd_track_position() {} //Returns the current position in the track being played in milliseconds.
void cd_play(double first, double last) {} //Tells the CD to play tracks first until last. If you want to play the full CD give 1 and 1000 as arguments.
void cd_stop() {} //Stops playing.
void cd_pause() {} //Pauses the playing.
void cd_resume() {} //Resumes the playing.
void cd_set_position(double pos) {} //Sets the position on the CD in milliseconds.
void cd_set_track_position(double pos) {} //Sets the position in the current track in milliseconds.
void cd_open_door() {} //Opens the door of the CD player.
void cd_close_door() {} //Closes the door of the CD player.

void MCI_command(var str) {}


/*
 *
 * Action functions
 *
 */

extern bool argument_relative;

void action_another_room(int room, int transition) {
	//transition_kind=transition;
	room_goto(room);
} 
//void action_bounce(int precisely, int against) {}
void action_cd_pause() {}
void action_cd_play(double firstTrack,double lastTrack) {}
void action_cd_playing() {}
void action_cd_present() {}
void action_cd_resume() {}
void action_cd_stop() {}

void action_create_object_motion(int object,double x, double y,double speed, double direction) {}

void action_create_object_random(int object1, int object2, int object3,int object4, double x, double y) {
    //instance_create(x,y,choose(object1,object2,object3,object4));
}

void action_draw_arrow(double x1, double y1, double x2, double y2, double tipSize) {}
void action_draw_background(int background,double x, double y, int tiled) {}

void action_draw_ellipse(double x1, double y1, double x2, double y2, int filled) {
	draw_ellipse(x1, y1, x2, y2, filled);
}
void action_draw_ellipse_gradient(double x1,double y1,double x2,double y2, int color1, int color2) {
	//draw_ellipse_color(x1, y1, x2, y2, color1, color2, false);
}
void action_draw_gradient_hor(double x1,double y1,double x2,double y2,double color1,double color2) {
	draw_rectangle_color(x1, y1, x2, y2, color1, color2, color1, color2, false);
}
void action_draw_gradient_vert(double x1,double y1,double x2,double y2,double color1,double color2) {
	draw_rectangle_color(x1, y1, x2, y2, color1, color1, color2, color2, false);
}

void action_draw_life(double x,double y, string caption) {}

void action_draw_line(double x1,double y1,double x2,double y2) {}

void action_draw_text_transformed(string text,double x,double y,double horScale,double verScale, double angle) {}
void action_draw_variable(var variable,double x,double y) {}
void action_effect(int type,double x,double y,double size,double color,int where) {}



void action_fullscreen(int action) {
    //action : switch, window, fullscreen (need to find out exact numbers, just guessed)
    /*	if (action ==0) {window_set_fullscreen(!window_get_fullscreen());}
     if (action ==1) {window_set_fullscreen(false);}
     if (action ==2) {window_set_fullscreen(true);}*/
}
void action_highscore_clear() {}
void action_inherited() { //event_inherited(); 
}

void action_kill_position(double x,double y) {}
void action_linear_step(double x,double y,double speed,int stopAt) {}
void action_load_game(string filename) {}

void action_message(string message) {
	show_message(message);
}

//void action_move_contact(double direction,double maximum, int against) {}

//void action_move_random(double snapHor,double snapVer) {} 

void action_partemit_burst(int emitter,int type,double amount) {}
void action_partemit_create(int emitter,int shape,double xleft,double xright,double ytop,double ybottom) {}
void action_partemit_destroy(int emitter) {}
void action_partemit_stream(int emitter,int type,int amount) {}
void action_partsyst_clear() {}
void action_partsyst_create(double depth) {}
void action_partsyst_destroy() {}
void action_parttype_color(int type,int shape,double color1,double color2,double startalpha,double endalpha) {}
void action_parttype_create(int type,int shape,int sprite, double minsize,double maxsize, double increment) {}
void action_parttype_gravity(int type,double amount,double direction) {}
void action_parttype_life(int type,double minlife,double maxlife) {}
void action_parttype_secondary(int primary,int stepType,double stepCount,int deathType,double deathCount) {}
void action_parttype_speed(int type,double minSpeed,double maxSpeed,double minDir,double maxDir,double friction) {}
void action_path(int path,double speed,int atEnd,double position) {}
void action_path_end() {}
void action_path_position(double position) {}
void action_path_speed(double speed) {}
//void action_potential_step(double x,double y,double speed,int avoid) {}

void action_previous_room(int transition) {
	//transition_kind=transition;
	//room_goto_previous();
}

void action_replace_background(int background,string filename) {}
void action_replace_sound(int sound, string filename) {}
void action_replace_sprite(int sprite,string filename,int images) {} 


void action_save_game(string filename) {}



void action_set_cursor(int sprite, int cursor) { 
    //cursor_sprite=sprite;
}

/*void action_set_friction(double newfriction) {
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->friction=newfriction;
}*/

/*void action_set_gravity(double direction,double newgravity) { 
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->gravity_direction=direction;
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->gravity=newgravity;
}*/

void action_set_hspeed(double newhspeed) {
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->hspeed=newhspeed;
}

/*void action_set_motion(double newdirection,double newspeed) {
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->direction=newdirection;
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->speed=newspeed;
}*/

void action_set_sprite(int sprite, int scalefactor) {} //old version of sprite_set?

void action_set_timeline(int timeline, double position) {}
void action_set_timeline_position(double position) {}

//void action_show_info() {}
void action_show_video(string filename,int fullscreen,int loop) {
    //splash_show_video(filename,fullscreen,loop); 
} 

void action_snap(double hor,double vert) { 
    //move_snap(hor,vert); 
}

void action_snapshot(string filename) { screen_save(filename); }


/*void action_sprite_color(double color, double  opacity) {
	//image_blend=color; image_alpha = opacity;
	//((enigma::object_graphics*)enigma::instance_event_iterator->inst)->image_blend=color;
	//((enigma::object_graphics*)enigma::instance_event_iterator->inst)->image_alpha=opacity;
	
	
}*/


/*void action_sprite_transform(double hscale, double vscale, double rotation, int mirror) {
	//image_xscale=hscale; image_yscale=vscale; image_angle=rotation; imageyscale=-1;
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->image_xscale=hscale;
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->image_yscale=vscale;
	((enigma::object_graphics*)enigma::instance_event_iterator->inst)->image_angle=rotation;
	//need to do mirror
	
}*/


void action_webpage(string address) {}

/*void action_wrap(int direction) {
    // move_wrap(0,0,0);
}*/

/*
 Action if collision at position
 */
bool action_if_collision(double x, double y,int object) {
	return !action_if_empty(x,y,object);
}

bool action_if_health(double value, int operation) {return 0;}
bool action_if_life(double value, int operation) {return 0;}
bool action_if_mouse(int button) {return 0;}

bool action_if_previous_room() {
    return room_previous(room) != -1;
}

bool action_if_question(string question) {return 0;}
bool action_if_score(double value, int operation) {return 0;}


/*bool action_if_variable(const variant &v1, const variant &v2, int op) { switch (op) {
    case 0: return (v1 == v2) ^ argument_not;
    case 1: return (v1 < v2) ^ argument_not;
    case 2: return (v1 > v2) ^ argument_not;
}
    return 0;
}*/

void clipboard_set_text(var str) {
    
}

string clipboard_get_text() {
    
}

bool clipboard_has_text() {
    
}

void screen_save_part(string fname, int x, int y, int w, int h) {
    
}


/* Jumper functions */
void instance_deactivate_object(int obj) {}
void part_system_sprite_based(int ind, int set) {} //gm5
/*bool file_exists(string filename) {
    return false;
}*/
void part_system_doastep(int system) {
}
void part_system_draw(int system,int x, int y) {
    
}

void mouse_wait() {

} //Waits till the user presses a mouse button

/* Bacteria functions */
void show_debug_message(string str) {
printf("Debug message: %s \n",str);
}


//1945 

void action_change_object(int changeInto, int performEvents) {
    enigma::object_planar* const inst = ((enigma::object_planar*)enigma::instance_event_iterator->inst);
    //instance_create(inst->x,inst->y,changeInto);
    //instance_destroy();
} //warning don't use in a with statement! (massive memory leak)

///////// Asteroids
void draw_set_halign(int halign) {}
//void keyboard_wait() {}
//void io_clear() {}
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

//These are due to regex (LGMUtility) errors
#define enigmaround(args...) round(args)
#define enigmapower(args...) power(args)
#define enigmarandom(args...) random(args)
#define enigmadraw_text(args...) draw_text(args)




