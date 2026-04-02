/* user and group to drop privileges to */
static const char *user  = "tmak";
static const char *group = "tmak";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "steelblue",   /* during input */
	[FAILED] = "red3",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
