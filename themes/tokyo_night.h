/*
 * st/themes/tokyo_night.h
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
  [0]   = "#32344a",
  [1]   = "#f7768e",
  [2]   = "#9ece6a",
  [3]   = "#e0af68",
  [4]   = "#7aa2f7",
  [5]   = "#ad8ee6",
  [6]   = "#449dab",
  [7]   = "#787c99",
  [8]   = "#444b6a",
  [9]   = "#ff7a93",
  [10]  = "#b9f27c",
  [11]  = "#ff9e64",
  [12]  = "#7da6ff",
  [13]  = "#bb9af7",
  [14]  = "#0db9d7",
  [15]  = "#acb0d0",
  [255] = 0,
  [256] = "#c0caf5", // foreground
  [257] = "#1a1b26", // background
};

unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 13;
static unsigned int defaultrcs = 257;
