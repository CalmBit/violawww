enum {
	MESSAGE_DEBUG,
	MESSAGE_ERROR,
	MESSAGE_HISTORY,
	MESSAGE_PROMPT,
	MESSAGE_WARNING,
};

enum {
	ERR_NONE = 0,	
	ERR,		
	ERR_MALLOC,	
	ERR_DIVZERO,	
	ERR_FLOW,	
	ERR_INDEX,	
	ERR_FOPEN,	
	ERR_FWRITE,	
	ERR_SYNTAX,	
	ERR_UNKFUNC,	
	ERR_UNKOBJ,	
	ERR_PRGUNKNOWN,	
	ERR_FILENENGH,	
	ERR_NOTDIR,	
	ERR_FILEEXIST,	
	ERR_OBJNOEXIST,	
	ERR_FILERO,	
	ERR_ARGCOVER,	
	ERR_ARGCUNDER,	
	ERR_CONNCLOSE,	
	ERR_CONNREFUSE,	
	ERR_CONNTOUT,	
	ERR_NETUNREACH,	
	ERR_FNTOOLONG,	
	ERR_DIRNOTEMPTY,
};

#define IERROR printf
#define MERROR messageToUserWithObj

char *messageToUserWithObj();
extern int errc;
extern void clearErrors();
extern char *messageToUser();

