static int topbar = 1;
static const char *fonts[] = {
	"FiraCode Nerd Font:size=9"
};
static const char *prompt      = " App:";
static const char *colors[SchemeLast][2] = {
	/* 					fg			bg		*/
	[SchemeNorm] = { "#a3afc1", "#282c34" },
	[SchemeSel]  = { "#ffffff", "#282c34" },
	[SchemeOut]  = { "#a3afc1", "#282c34" },
};
static unsigned int lines      = 0;
static unsigned int lineheight = 18;
static const char worddelimiters[] = " ";
