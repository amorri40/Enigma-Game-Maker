/*
 *  data_structures.h
 *  EnigmaXcode
 *
 *  Created by Alasdair Morrison on 13/07/2011.
 *  Copyright 2011 EnigmaDev. All rights reserved.
 *
 */

#include "var4.h"

/*
 List functions
 */
int ds_list_create(); 
void ds_list_destroy(int id) {} //Destroys the list with the given id, freeing the memory used. Don't forget to call this function when you are ready with the structure.
void ds_list_clear(int id) {} //Clears the list with the given id, removing all data from it but not destroying it.
void ds_list_copy(int id, int source) {} //Copies the list source into the list with the given id.
int ds_list_size(int id); //Returns the number of values stored in the list.
bool ds_list_empty(int id) {return false;} //Returns whether the list is empty. This is the same as testing whether the size is 0.
void ds_list_add(int id, var val); //Adds the value at the end of the list.
void ds_list_insert(int id, int pos, variant val) {} //Inserts the value at position pos in the list. The first position is 0, the last position is the size of the list minus 1.
void ds_list_replace(int id, int pos, variant val) {} //Replaces the value at position pos in the list with the new value.
void ds_list_delete(int id, int pos) {} //Deletes the value at position pos in the list. (Position 0 is the first element.)
int ds_list_find_index(int id, variant val) {return 0;} //Find the position storing the indicated value. If the value is not in the list -1 is returned.
var ds_list_find_value(int id, int pos); 
void ds_list_sort(int id, bool ascend); //Sorts the values in the list. When ascend is true the values are sorted in ascending order, otherwise in descending order.
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