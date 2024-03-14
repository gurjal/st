/*
 * st/themes/ayu.h
 *
 */

static const char *colorname[] = {
  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#f34a4a", /* red     */
  [2] = "#bae67e", /* green   */
  [3] = "#ffee99", /* yellow  */
  [4] = "#73d0ff", /* blue    */
  [5] = "#d4bfff", /* magenta */
  [6] = "#83cec6", /* cyan    */
  [7] = "#f2f2f2", /* white   */

  /* 8 bright colors */
  [8]  = "#e6e1cf", /* black   */
  [9]  = "#ff3333", /* red     */
  [10] = "#c2d94c", /* green   */
  [11] = "#e7c547", /* yellow  */
  [12] = "#59c2ff", /* blue    */
  [13] = "#b77ee0", /* magenta */
  [14] = "#5ccfe6", /* cyan    */
  [15] = "#ffffff", /* white   */

  /* special colors */
  [256] = "#0d1017", /* background */
  /* [256] = "#0f1419", /\* background *\/ */
  [257] = "#e6e1cf", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
static unsigned int defaultrcs = 256;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
unsigned int defaultitalic = 7;
unsigned int defaultunderline = 7;
