/*typedef int union PCode;*/

typedef union PCode {
	int	x;	/* executable instruction */
	int 	i;
	float 	f;
	char	*s;
	char	c;
};

enum PCodeTypes {
	CODE_PLUS,
	CODE_MINUS,
	CODE_MOD,
	CODE_MULT,
	CODE_DIV,
	CODE_EQ,
	CODE_NE,
	CODE_LT,
	CODE_LE,
	CODE_GT,
	CODE_GE,
	CODE_AND,
	CODE_OR,

	CODE_PLUS_INT,
	CODE_MINUS_INT,
	CODE_MOD_INT,
	CODE_MULT_INT,
	CODE_DIV_INT,
	CODE_EQ_INT,
	CODE_NE_INT,
	CODE_LT_INT,
	CODE_LE_INT,
	CODE_GT_INT,
	CODE_GE_INT,
	CODE_AND_INT,
	CODE_OR_INT,

	CODE_PLUS_CHAR,
	CODE_MINUS_CHAR,
	CODE_MOD_CHAR,
	CODE_MULT_CHAR,
	CODE_DIV_CHAR,
	CODE_EQ_CHAR,
	CODE_NE_CHAR,
	CODE_LT_CHAR,
	CODE_LE_CHAR,
	CODE_GT_CHAR,
	CODE_GE_CHAR,
	CODE_AND_CHAR,
	CODE_OR_CHAR,

	CODE_PLUS_FLOAT,
	CODE_MINUS_FLOAT,
	CODE_MOD_FLOAT,
	CODE_MULT_FLOAT,
	CODE_DIV_FLOAT,
	CODE_EQ_FLOAT,
	CODE_NE_FLOAT,
	CODE_LT_FLOAT,
	CODE_LE_FLOAT,
	CODE_GT_FLOAT,
	CODE_GE_FLOAT,
	CODE_AND_FLOAT,
	CODE_OR_FLOAT,

	CODE_PLUS_STR,
	CODE_MINUS_STR,
	CODE_MOD_STR,
	CODE_MULT_STR,
	CODE_DIV_STR,
	CODE_EQ_STR,
	CODE_NE_STR,
	CODE_LT_STR,
	CODE_LE_STR,
	CODE_GT_STR,
	CODE_GE_STR,
	CODE_AND_STR,
	CODE_OR_STR,

	CODE_PLUS_LIST,
	CODE_MINUS_LIST,
	CODE_MOD_LIST,
	CODE_MULT_LIST,
	CODE_DIV_LIST,
	CODE_EQ_LIST,
	CODE_NE_LIST,
	CODE_LT_LIST,
	CODE_LE_LIST,
	CODE_GT_LIST,
	CODE_GE_LIST,
	CODE_AND_LIST,
	CODE_OR_LIST,

	CODE_PLUS_LISTC,
	CODE_MINUS_LISTC,
	CODE_MOD_LISTC,
	CODE_MULT_LISTC,
	CODE_DIV_LISTC,
	CODE_EQ_LISTC,
	CODE_NE_LISTC,
	CODE_LT_LISTC,
	CODE_LE_LISTC,
	CODE_GT_LISTC,
	CODE_GE_LISTC,
	CODE_AND_LISTC,
	CODE_OR_LISTC,

	CODE_EQ_STACK,
	CODE_EQ_STACK_NBR_NZERO2, /* frequent operation */

	CODE_PLUS_POP,
	CODE_MINUS_POP,
	CODE_MOD_POP,
	CODE_MULT_POP,
	CODE_DIV_POP,
	CODE_EQ_POP,
	CODE_NE_POP,
	CODE_LT_POP,
	CODE_LE_POP,
	CODE_GT_POP,
	CODE_GE_POP,
	CODE_AND_POP,
	CODE_OR_POP,

	CODE_REF,
	CODE_REF2,
	CODE_LIST_REF2,
	CODE_AND_REF,
	CODE_DIV_REF,
	CODE_GE_REF,
	CODE_GT_REF,
	CODE_LE_REF,
	CODE_LT_REF,
	CODE_EQ_REF,
	CODE_MINUS_REF,
	CODE_MOD_REF,
	CODE_MULT_REF,
	CODE_NE_REF,
	CODE_OR_REF,
	CODE_PLUS_REF,
	CODE_PUSH_REF,
	CODE_PUSH_REFP,
	CODE_PUSH_REFPS,
	CODE_MOVTO_REF2,
	CODE_PLUS_MOVTO_REF,
	CODE_MINUS_MOVTO_REF,
	CODE_MOD_MOVTO_REF,
	CODE_MULT_MOVTO_REF,
	CODE_DIV_MOVTO_REF,
	CODE_MOVTO_LIST,
	CODE_PLUS_MOVTO_LIST,
	CODE_MINUS_MOVTO_LIST,
	CODE_MOD_MOVTO_LIST,
	CODE_MULT_MOVTO_LIST,
	CODE_DIV_MOVTO_LIST,
	CODE_BR2,
	CODE_BR2_EQ,
	CODE_BR2_GE,
	CODE_BR2_GT,
	CODE_BR2_LE,
	CODE_BR2_LT,
	CODE_BR2_NE,
	CODE_BR2_NZERO,
	CODE_BR2_ZERO,
	CODE_NBR2,
	CODE_NBR2_EQ,
	CODE_NBR2_GE,
	CODE_NBR2_GT,
	CODE_NBR2_LE,
	CODE_NBR2_LT,
	CODE_NBR2_NE,
	CODE_NBR2_NZERO,
	CODE_NBR2_ZERO,
	CODE_CALL2,	/* soft method call */
	CODE_CALL2_C,	/* C-func-pointer call */
	CODE_CMP,
	CODE_INTEGER,
	CODE_FLOAT,
	CODE_LOAD,
	CODE_POP,
	CODE_PUSH,
	CODE_STMTS,
	CODE_STRING,
	CODE_CHAR,
	CODE_UMINUS,
	CODE_RETURN,
	CODE_GET2,
	CODE_PUSH_SET2,
	CODE_LIST,
	CODE_LIST2,
	CODE_LISTC2,
	CODE_STACK,
	CODE_INC_PRE,
	CODE_INC_POST,
	CODE_DEC_PRE,
	CODE_DEC_POST,
	CODE_TOKENIZE_PUSH,

	CODE_METH_SELF,
	CODE_METH_PARENT,
	CODE_METH_SEND,
};

extern int flag_printPCode;
extern int flag_printAST;


typedef struct RefInfo {
	short flag;
	AST *ast;
} RefInfo;

/* this puts a limit on the number of idenfier instances in a block */
#define VAR_ARRAY_SIZE 1024

extern RefInfo varArray[];
extern int varArrayIdx;
extern RefInfo listRefArray[];
extern int listRefArrayIdx;

#define regRef(astp) \
	if (varArrayIdx < VAR_ARRAY_SIZE) {\
		varArray[varArrayIdx].ast = astp;\
		varArray[varArrayIdx++].flag = 1;\
	} else {\
		fprintf(stderr, "varArray stack overflow!\n");\
	}
