/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Ubuntu Mono:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#E5E9F0", "#282a36" },
	[SchemeSel] = { "#E5E9F0", "#B48EAD" },
	[SchemeSelHighlight] = { "#E5E9F0", "#3B4252" },
	[SchemeNormHighlight] = { "#EB49CF", "#3B4252" },
	[SchemeOut] = { "#4B4252", "#B48EAD" },
    [SchemeMid] = { "#E5E9F0", "#4B4252" }
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 22;
static unsigned int min_lineheight = 22;
static unsigned int maxhist    = 15;
static int histnodup           = 1;	/* if 0, record repeated histories */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -n option; preselected item starting from 0 */
static unsigned int preselected = 0;

/* Size of the window border */
static const unsigned int border_width = 1;

