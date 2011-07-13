/*
 *  gamemaker_compatibility.h
 *  EnigmaXcode
 *
 *  Created by Alasdair Morrison on 13/07/2011.
 *  Copyright 2011 EnigmaDev. All rights reserved.
 *
 */

//These are due to regex (LGMUtility) errors
#define enigmaround(args...) round(args)
#define enigmapower(args...) power(args)
#define enigmarandom(args...) random(args)
#define enigmadraw_text(args...) draw_text(args)
#define enigmadirection_difference(args...) direction_difference(args)