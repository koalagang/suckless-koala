/* user and group to drop privileges to */
static const char *user  = "dante";
static const char *group = "dante";

static const char *colorname[NUMCOLS] = {
	[INIT]   =   "black",     /* after initialization */
	[INPUT]  =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color13",       STRING,  &colorname[INIT] },
		{ "color4",       STRING,  &colorname[INPUT] },
		{ "color1",       STRING,  &colorname[FAILED] },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
