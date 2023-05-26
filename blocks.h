//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-screenshot -d",	0,	13},
	{"",	"sb-cpu",		3,	18}, 
	{"",	"sb-memory",	3,	14}, 
	{"",	"sb-battery",	10,	3},
	{"",	"sb-volume",	0,	10},
	{"",	"sb-lock",	0,	11},
	{"",	"sb-recording",	0,	12},
	{"", "date '+%a %b %d %I:%M %p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
