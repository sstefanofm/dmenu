/* See LICENSE file for copyright and license details. */

static int topbar = 1;      // -b option, if 0, dmenu appears at bottom

static int centered  = 0;   // center with -c option
static int min_width = 700; // min width when centered

// -fn option overrides fonts[0]; default X11 font or font set
static const char *fonts[] = {
	"agave:size=12"
};

static const char *prompt = NULL; // -p  option; prompt to the left of input field 

static const char *colors[SchemeLast][2] = {
	//           =    #fg        #bg
	[SchemeNorm] = { "#06060c", "#fdf0ed" },
	[SchemeSel]  = { "#3fc4de", "#fdf0ed" },
	[SchemeOut]  = { "#fdf0ed", "#fdf0ed" },
};

// -l option; if nonzero, dmenu uses vertical list with given number of lines 
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

// custom border width
static const unsigned int border_width = 3;

