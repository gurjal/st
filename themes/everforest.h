/*
 * st/themes/everforest.h
 *
 * black
 * red
 * green
 * yellow
 * blue
 * purple
 * cyan
 * white
 *
 */

/* static const char *colorname[] = { */
/*   [0]   = "#868d80", // black */
/*   [1]   = "#e68183", // red */
/*   [2]   = "#a7c080", // green */
/*   [3]   = "#d9bb80", // yellow */
/*   [4]   = "#89beba", // blue */
/*   [5]   = "#d3a0bc", // purple */
/*   [6]   = "#87c095", // cyan */
/*   [7]   = "#d8caac", // white */
/*   [8]   = "#868d80", // bright black */
/*   [9]   = "#e68183", // bright red */
/*   [10]  = "#a7c080", // bright green */
/*   [11]  = "#d9bb80", // bright yellow */
/*   [12]  = "#89beba", // bright blue */
/*   [13]  = "#d3a0bc", // bright purple */
/*   [14]  = "#87c095", // bright cyan */
/*   [15]  = "#d8caac", // bright white */
/*   [255] = 0, */
/*   [256] = "#d8caac", // foreground */
/*   [257] = "#323d43", // background */
/* }; */

static const char *colorname[] = {
  [0]   = "#3c474d", // black
  [1]   = "#e68183", // red
  [2]   = "#a7c080", // green
  [3]   = "#d9bb80", // yellow
  [4]   = "#83b6af", // blue
  [5]   = "#d39bb6", // purple
  [6]   = "#87c095", // cyan
  [7]   = "#868d80", // white
  [8]   = "#868d80", // bright black
  [9]   = "#e68183", // bright red
  [10]  = "#a7c080", // bright green
  [11]  = "#d9bb80", // bright yellow
  [12]  = "#83b6af", // bright blue
  [13]  = "#d39bb6", // bright purple
  [14]  = "#87c095", // bright cyan
  [15]  = "#868d80", // bright white
  [255] = 0,
  [256] = "#d8caac", // foreground
  [257] = "#323d43", // background
  [258] = "#d8caac", // cursor
  [258] = "#505a60", // reverse cursor
};

unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
