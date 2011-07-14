/*
 *  data_structures.cpp
 *  EnigmaXcode
 *
 *  Created by Alasdair Morrison on 13/07/2011.
 *  Copyright 2011 EnigmaDev. All rights reserved.
 *
 */

//#include "data_structures.h"
#include <vector>
#include "var4.h"
#include <algorithm>

std::vector< std::vector<var> > ds_lists;
using namespace std;
int ds_list_create() {
    //Creates a new list. The function returns an integer as an id that must be used in all other functions to access the particular list.
    //std::vector<var> newlist = std::vector<var>(1);
    ds_lists.push_back(vector<var>());
    return ds_lists.size()-1;
}

void ds_list_add(int id, var val) {
    ds_lists[id].push_back(val);
} //Adds the value at the end of the list.

int ds_list_size(int id) {return ds_lists[id].size();}

void ds_list_sort(int id, bool ascend) {
    //Sorts the values in the list. When ascend is true the values are sorted in ascending order, otherwise in descending order.
    if (ascend) {
        sort (ds_lists[id].begin(), ds_lists[id].end()); }
    else {
        sort (ds_lists[id].begin(), ds_lists[id].end(), greater<int>());
    }
}

var ds_list_find_value(int id, int pos) {
    //Returns the value stored at the indicated position in the list.
    return ds_lists[id][pos];}

