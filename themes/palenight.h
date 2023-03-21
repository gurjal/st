/*
 * st/themes/nord.h
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

static const char *colorname[] = {
  [0]   = "#292d3e", // black
  [1]   = "#ff5370", // red
  [2]   = "#c3e88d", // green
  [3]   = "#ffcb6b", // yellow
  [4]   = "#82b1ff", // blue
  [5]   = "#c792ea", // purple
  [6]   = "#89ddff", // cyan
  [7]   = "#697098", // white
  [8]   = "#292d3e",
  [9]   = "#ff5370",
  [10]  = "#c3e88d",
  [11]  = "#ffcb6b",
  [12]  = "#82b1ff",
  [13]  = "#c792ea",
  [14]  = "#89ddff",
  [15]  = "#697098",
  [255] = 0,
  [256] = "#bfc7d5",
  [257] = "#292d3e",
  [258] = "#bfc7d5",
  [259] = "#c792ea",
};

unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 259;
