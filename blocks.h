//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/													/*Update Interval*/	/*Update Signal*/
	{"🔉 ",		"~/.config/dwmblocks/scripts/volume",						0,					2},
	{"🔋 ",		"acpi | awk '{print $4}' <(acpi) | sed 's/,//'",			30,					0},
	{"📅 ",		"date '+%A %d.%m.%y'",										30,					0},
	{"🕒 ",		"date '+%H:%M'",											30,					0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
//static char delim[] = " | ";
static char delim[] = "    ";
static unsigned int delimLen = 4;
