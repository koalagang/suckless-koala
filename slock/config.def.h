/* user and group to drop privileges to */
static const char *user  = "admin";
static const char *group = "admin";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#3B4252",     /* after initialization */
	[INPUT] =  "#B48EAD",   /* during input */
	[FAILED] = "#EB49CF",   /* wrong password */
	[CAPS] = "#A7B3C9",     /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

