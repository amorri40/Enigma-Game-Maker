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

namespace enigma {
  int room_loadtimecount = 7;
  roomstruct grd_rooms[7] = {
    //Room 21
    { 21, "room_title_21",  "",
      0xc0c0c0, roomcreate21,
      480, 480, 30,  false, {
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
}, {      { true,   false,   2,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      },      7,       (enigma::inst*)(int[]){102614,35,240,80,102615,20,256,288,102654,99,96,192,102655,100,240,192,102656,101,384,192,102658,97,0,0,102657,4,144,240,  0,0,0,0}
    },
    //Room 24
    { 24, "room_intro_24",  "",
      0, roomcreate24,
      480, 1000, 30,  true, {
      { -1,   0, 0, 480, 480,   0, 0, 480, 480,   34,   32, 32,   230, 230 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
}, {      { true,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      },      2,       (enigma::inst*)(int[]){102651,96,240,672,102652,34,224,112,  0,0,0,0}
    },
    //Room 22
    { 22, "level1",  "",
      0xc0c0c0, roomcreate22,
      1500, 1500, 30,  true, {
      { -1,   0, 0, 480, 480,   0, 0, 480, 480,   87,   240, 240,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
}, {      { true,   false,   1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      },      228,       (enigma::inst*)(int[]){102761,38,464,752,102762,37,480,304,102763,37,480,464,102629,73,0,0,102697,110,1376,96,102748,104,1456,48,102749,104,1456,112,102750,104,1456,176,102751,105,1456,176,102752,105,1456,112,102753,105,1456,32,102764,113,192,176,102765,113,192,192,102766,113,192,208,102767,113,192,224,102768,113,192,240,
        102769,113,192,256,102770,113,192,272,102771,113,192,288,102772,113,192,304,102773,113,192,320,102774,113,192,336,102775,113,192,352,102776,113,192,368,102777,113,192,384,102778,113,192,400,102779,113,192,416,102780,113,192,432,102781,113,192,448,102782,113,192,464,102783,113,192,480,102785,113,208,176,
        102788,113,224,176,102789,113,240,176,102790,113,256,176,102791,113,272,176,102792,113,288,176,102793,113,304,176,102794,113,320,176,102795,113,336,176,102796,113,352,176,102797,113,368,176,102798,113,384,176,102799,113,400,176,102800,113,416,176,102801,113,432,176,102802,113,448,176,102803,113,464,176,
        102805,113,192,496,102806,113,192,512,102807,113,192,528,102808,113,192,544,102809,113,192,560,102810,113,192,576,102811,113,192,592,102812,113,192,608,102813,113,192,624,102814,113,192,640,102815,113,192,656,102816,113,192,672,102817,113,192,688,102818,113,192,704,102819,113,192,720,102820,113,192,736,
        102821,113,192,752,102822,113,192,768,102823,113,192,784,102824,113,192,800,102825,113,192,816,102826,113,192,832,102827,113,192,848,102828,113,192,864,102829,113,192,880,102830,113,192,896,102831,113,192,912,102832,113,192,928,102833,113,192,944,102834,113,192,960,102835,113,192,976,102838,114,198,1000,
        102839,113,224,1008,102840,113,240,1008,102841,113,256,1008,102842,113,272,1008,102843,113,288,1008,102844,113,304,1008,102845,113,320,1008,102846,113,336,1008,102847,113,352,1008,102848,113,368,1008,102849,113,384,1008,102850,113,400,1008,102851,113,416,1008,102852,113,432,1008,102853,113,448,1008,102854,113,464,1008,
        102855,113,480,1008,102856,113,496,1008,102857,113,512,1008,102858,113,528,1008,102859,113,544,1008,102860,113,560,1008,102861,113,576,1008,102862,113,592,1008,102863,113,608,1008,102864,113,624,1008,102865,113,640,1008,102866,113,656,1008,102867,113,672,1008,102868,113,688,1008,102872,113,880,1008,102873,113,896,1008,
        102874,113,912,1008,102875,113,928,1008,102876,113,944,1008,102877,113,960,1008,102878,113,976,1008,102879,113,992,1008,102881,114,1016,1000,102895,113,1024,976,102896,113,1024,960,102899,113,1024,944,102900,113,1024,928,102901,113,1024,912,102902,113,1024,896,102903,113,1024,880,102904,113,1024,864,102905,113,1024,848,
        102906,113,1024,832,102907,113,1024,816,102908,113,1024,800,102909,113,1024,784,102910,113,1024,768,102911,113,1024,752,102913,113,1024,736,102914,113,1024,720,102915,113,1024,704,102916,113,1024,688,102917,113,1024,672,102918,113,1024,656,102919,113,1024,640,102920,113,1024,624,102921,113,1024,608,102922,113,1024,592,
        102923,113,1024,576,102924,113,1024,560,102925,113,1024,544,102926,113,1024,528,102927,113,1024,512,102928,113,1024,496,102929,113,1024,480,102930,113,1024,464,102931,113,1024,448,102932,113,1024,432,102933,113,1024,416,102934,113,1024,400,102935,113,1024,384,102937,113,1024,176,102938,113,1024,160,102943,113,1024,144,
        102944,113,1024,128,102945,113,1024,112,102946,113,1024,96,102947,113,1024,80,102948,113,1024,64,102949,113,480,176,102950,113,496,176,102951,113,496,160,102954,113,496,144,102955,113,496,128,102956,113,496,112,102957,113,496,96,102958,113,496,80,102959,113,496,64,102960,113,512,64,102961,113,528,64,
        102962,113,544,64,102963,113,560,64,102964,113,576,64,102965,113,592,64,102966,113,608,64,102967,113,624,64,102968,113,640,64,102969,113,656,64,102970,113,672,64,102971,113,688,64,102972,113,704,64,102973,113,720,64,102974,113,736,64,102975,113,752,64,102976,113,768,64,102977,113,784,64,
        102978,113,800,64,102979,113,816,64,102980,113,832,64,102981,113,848,64,102982,113,864,64,102983,113,880,64,102984,113,896,64,102985,113,912,64,102986,113,928,64,102987,113,944,64,102988,113,960,64,102989,113,976,64,102990,113,992,64,102991,113,1008,64,102993,114,1024,200,102994,114,1024,360,
        102995,114,712,1008,102997,114,856,1008,102998,87,282,230,102999,88,282,230,103001,79,764,578,103002,93,422,1250,103003,102,462,1248,103004,102,424,1284,103005,102,424,1208,103006,102,380,1246,103007,103,424,1284,103008,103,462,1248,103009,103,428,1208,103010,103,380,1246,103011,107,1002,1328,103012,108,1002,1328,
        103013,95,1002,1328,102630,89,32,16,102631,33,48,0,103000,4,424,200,  0,0,0,0}
    },
    //Room 28
    { 28, "level2",  "",
      0xc0c0c0, roomcreate28,
      1800, 1800, 30,  true, {
      { -1,   0, 0, 480, 480,   0, 0, 480, 480,   87,   240, 240,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
}, {      { true,   false,   1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      },      5,       (enigma::inst*)(int[]){102758,87,32,80,102759,88,32,112,102755,89,16,16,102756,4,64,368,102757,33,48,0,  0,0,0,0}
    },
    //Room 25
    { 25, "weapon1",  "",
      0xc0c0c0, roomcreate25,
      1500, 1500, 30,  true, {
      { -1,   0, 0, 480, 480,   0, 0, 480, 480,   0,   200, 200,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
}, {      { true,   false,   1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      },      34,       (enigma::inst*)(int[]){102699,73,0,0,102703,0,48,64,102704,1,96,64,102705,8,512,128,102706,8,384,208,102707,8,272,432,102709,8,416,320,102710,8,96,464,102711,8,432,592,102712,8,160,752,102713,8,416,832,102715,8,816,208,102716,8,768,400,102717,11,896,944,102718,11,752,1040,102719,11,912,1120,
        102720,11,880,1008,102721,27,752,1072,102722,27,912,1152,102723,27,880,1040,102724,27,944,944,102725,10,400,736,102726,10,128,672,102727,10,432,624,102728,10,256,464,102729,10,80,496,102732,10,416,352,102733,10,384,240,102734,10,512,160,102738,31,816,240,102739,31,768,448,102700,6,32,16,
        102702,33,48,0,102735,4,176,128,  0,0,0,0}
    },
    //Room 26
    { 26, "weapon2",  "",
      0xc0c0c0, roomcreate26,
      1500, 1500, 30,  true, {
      { -1,   0, 0, 480, 480,   0, 0, 480, 480,   0,   200, 200,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
}, {      { true,   false,   1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      },      34,       (enigma::inst*)(int[]){102699,73,0,0,102703,0,48,64,102705,8,512,128,102706,8,384,208,102707,8,272,432,102709,8,416,320,102710,8,96,464,102711,8,432,592,102712,8,160,752,102713,8,416,832,102715,8,816,208,102716,8,768,400,102717,11,896,944,102718,11,752,1040,102719,11,912,1120,102720,11,880,1008,
        102721,27,752,1072,102722,27,912,1152,102723,27,880,1040,102724,27,944,944,102725,10,400,736,102726,10,128,672,102727,10,432,624,102728,10,256,464,102729,10,80,496,102732,10,416,352,102733,10,384,240,102734,10,512,160,102736,17,96,64,102740,31,816,240,102741,31,768,432,102700,6,32,16,
        102702,33,48,0,102735,4,176,128,  0,0,0,0}
    },
    //Room 27
    { 27, "weapon3",  "",
      0xc0c0c0, roomcreate27,
      1500, 1500, 30,  true, {
      { -1,   0, 0, 480, 480,   0, 0, 480, 480,   0,   200, 200,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
      { 0,   0, 0, 640, 480,   0, 0, 640, 480,   -1,   32, 32,   -1, -1 },
}, {      { true,   false,   1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      { false,   false,   -1,   0,   0,   0,   0,   true,   true,   false },
      },      34,       (enigma::inst*)(int[]){102699,73,0,0,102703,0,48,64,102705,8,512,128,102706,8,384,208,102707,8,272,432,102709,8,416,320,102710,8,96,464,102711,8,432,592,102712,8,160,752,102713,8,416,832,102715,8,816,208,102716,8,768,400,102717,11,896,944,102718,11,752,1040,102719,11,912,1120,102720,11,880,1008,
        102721,27,752,1072,102722,27,912,1152,102723,27,880,1040,102724,27,944,944,102725,10,400,736,102726,10,128,672,102727,10,432,624,102728,10,256,464,102729,10,80,496,102732,10,416,352,102733,10,384,240,102734,10,512,160,102737,18,96,64,102742,31,816,240,102743,31,768,432,102700,6,32,16,
        102702,33,48,0,102735,4,176,128,  0,0,0,0}
    },
  };
  
  int room_max = 28 + 1;
  int maxid = 103013 + 1;
} // Namespace enigma
