/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font Mono:size=11:style:SemiBold"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* * onedark * */
static const char *colors[SchemeLast][2] = {
  /* scheme, fg, bg */
  [SchemeNorm]          = { "#abb2bf", "#282c34" },
  [SchemeSel]           = { "#282c34", "#e06c75" },
  [SchemeSelHighlight]  = { "#000000", "#e06c75" },
  [SchemeNormHighlight] = { "#ffffff", "#282c34" },
  [SchemeOut]           = { "#282c34", "#b16286" },
  [SchemeOutHighlight]  = { "#ffc978", "#00ffff" },
};

/* * gruvbox * */
/* static const char *colors[SchemeLast][2] = { */
/* *     fg         bg       * */
/* 	[SchemeNorm] = { "#ebdbb2", "#282828" }, */
/* 	/1* [SchemeSel] = { "#ebdbb2", "#98971a" }, *1/ */
/* 	[SchemeSel] = { "#282828", "#98971a" }, */
/* 	[SchemeOut] = { "#1d2021", "#8ec07c" }, */
/* }; */

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
