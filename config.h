/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy  = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static const float menu_height_ratio = 4.0f;  /* This is the ratio used in the original calculation */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "monospace:size=18",
    "Noto Color Emoji:size=18",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char col_bg[]                       = "#27251f";
static const char col_active[]                   = "#9bf6ff";
static const char col_inactive[]                 = "#c4ced4";
 
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_inactive, col_bg },
	[SchemeSel] = { col_active, col_bg },
	[SchemeOut] = { col_inactive, col_bg },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 4;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
