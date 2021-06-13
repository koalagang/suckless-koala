/* user and group to drop privileges to */
static const char *user  = "dante";
static const char *group = "dante";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#3B4252",     /* after initialization */
	[INPUT] =  "#B48EAD",   /* during input */
	[FAILED] = "#EB49CF",   /* wrong password */
	[CAPS] = "#A7B3C9",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

