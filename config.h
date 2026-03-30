/* user and group to drop privileges to */
static const char *user  = "tmak";
static const char *group = "tmak";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#505354",     /* after initialization */
	[INPUT] =  "#505354",   /* during input */
	[FAILED] = "#F92672",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
