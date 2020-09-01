/* user and group to drop privileges to */
static const char *user  = "maxim";
static const char *group = "maxim";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282828",     /* after initialization */
	[INPUT] =  "#b8bb26",   /* during input */
	[FAILED] = "#fb4934",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=15;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=10;
