//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.config/dwmblocks/scripts/cmus",		30, 0},
	{"", "~/.config/dwmblocks/scripts/btc GBP",		30, 0},
	{" ", "~/.config/dwmblocks/scripts/disk",	30, 0},
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{" ", "acpi | awk '{print $4}' <(acpi) | sed 's/,//'",	30,		0 },
	{" ", "~/.config/dwmblocks/scripts/volume",	30,  0},
	{" ", "date '+%A %d/%m/%y  %H:%M'",		5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
