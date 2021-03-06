/*
 * class        : generic
 * superClass	: cosmic
 *
 *
 */
#include "cl_cosmic.h"

extern ClassInfo class_generic;
int helper_generic_get();
int helper_generic_set();
extern int flag_cliprompt;

int meth_generic_GB_copy();
int meth_generic_GB_data();
int meth_generic_GB_char();
int meth_generic_GB_count();
int meth_generic_GB_create();
int meth_generic_GB_decChar();
int meth_generic_GB_decChar1();
int meth_generic_GB_decLine();
int meth_generic_GB_free();
int meth_generic_GB_herePtr();
int meth_generic_GB_incChar();
int meth_generic_GB_incChar1();
int meth_generic_GB_incLine();
int meth_generic_GB_line();
int meth_generic_GB_moveToChar();
int meth_generic_GB_moveToLine();
int meth_generic_GB_moveToStart();
int meth_generic_GB_nthChar();
int meth_generic_GB_nthLine();
int meth_generic_GB_set();
int meth_generic_GB_setCopy();
int meth_generic_SGMLBuildDoc();
int meth_generic_SGMLBuildDocB();
int meth_generic_SGMLBuildDoc_flush();
int meth_generic_SGMLBuildDoc_insertObj();
int meth_generic_SGMLBuildDoc_setBuff();
int meth_generic_SGMLBuildDoc_setColors();
int meth_generic_SGMLBuildDoc_span();
int meth_generic_SGMLFindAnchorOffset();
int meth_generic_SGMLGetStyle();
int meth_generic_SGMLMathFormater();
int meth_generic_SGMLReBuildDoc();
int meth_generic_SGMLSetStyle();
int meth_generic_SGMLTableFormater();
int meth_generic_SGMLTileDoc();
int meth_generic_STGInfo();
int meth_generic_STG_clean();
int meth_generic_STG_tagPtr();
int meth_generic_STG_attr();
int meth_generic_accessible();
int meth_generic_activeHelp();
int meth_generic_after();
int meth_generic_alarm();
int meth_generic_append();
int meth_generic_argument();
int meth_generic_ascii();
int meth_generic_asciiVal();
int meth_generic_bell();
int meth_generic_bellVolume();
int meth_generic_char();
int meth_generic_childn();
int meth_generic_clear();
int meth_generic_clone();
int meth_generic_clone2();
int meth_generic_cli();
int meth_generic_color();
int meth_generic_cos();
int meth_generic_compressSpaces();
int meth_generic_concatenate();
int meth_generic_concatList();
int meth_generic_countChildren();
int meth_generic_countItems();
int meth_generic_countLines();
int meth_generic_countWords();
int meth_generic_ctrlKeyP();
int meth_generic_cursorShape();
int meth_generic_cycleColors();
int meth_generic_date();
int meth_generic_deepObjectListSend();
int meth_generic_defineNewFont();
int meth_generic_delay();
int meth_generic_deleteFile();
int meth_generic_deleteSubStr();
int meth_generic_deleteSubStrQ();
int meth_generic_depth();
int meth_generic_destroyVariable();
int meth_generic_environVar();
int meth_generic_filter();
int meth_generic_findPattern();
int meth_generic_float();
int meth_generic_format();
int meth_generic_freeSelf();
int meth_generic_get();
int meth_generic_getResource();
int meth_generic_getSelection();
int meth_generic_getVariable();
int meth_generic_gravity();
int meth_generic_hash();
int meth_generic_height();
int meth_generic_initialize();
int meth_generic_int();
int meth_generic_isBlank();
int meth_generic_item();
int meth_generic_key();
int meth_generic_listAllObjects();
int meth_generic_loadFile();
int meth_generic_loadSTG();
int meth_generic_lower();
int meth_generic_makeTempFile();
int meth_generic_not();
int meth_generic_nthChar();
int meth_generic_nthChild();
int meth_generic_nthItem();
int meth_generic_nthLine();
int meth_generic_nthObjectInList();
int meth_generic_nthSibling();
int meth_generic_nthWord();
int meth_generic_objectListAppend();
int meth_generic_objectListAppend_children();
int meth_generic_objectListCount();
int meth_generic_objectListCount_children();
int meth_generic_objectListDelete();
int meth_generic_objectListDelete_children();
int meth_generic_objectListPrepend();
int meth_generic_objectListPrepend_children();
int meth_generic_objectListSend();
int meth_generic_objectListSend_children();
int meth_generic_objectPosition();
int meth_generic_parent();
int meth_generic_pipe();
int meth_generic_prepend();
int meth_generic_print();
int meth_generic_printf();
int meth_generic_random();
int meth_generic_replaceChar();
int meth_generic_replaceCharQ();
int meth_generic_replaceStr();
int meth_generic_replaceStrQ();
int meth_generic_saveFile();
int meth_generic_scan();
int meth_generic_scanf();
int meth_generic_securityMode();
int meth_generic_self();
int meth_generic_selectionInfo();
int meth_generic_set();
int meth_generic_sendToInterface();
int meth_generic_setMouse();
int meth_generic_setResource();
int meth_generic_setSelection();
int meth_generic_setVariable();
int meth_generic_shiftKeyP();
int meth_generic_sin();
int meth_generic_sleep();
int meth_generic_sprintf();
int meth_generic_str();
int meth_generic_strlen();
int meth_generic_system();
int meth_generic_target();
int meth_generic_textWidth();
int meth_generic_trimEdge();
int meth_generic_trimEdgeQ();
int meth_generic_time();
int meth_generic_tool();
int meth_generic_x();
int meth_generic_unhash();
int meth_generic_version();
int meth_generic_violaPath();
int meth_generic_watch();
int meth_generic_width();
int meth_generic_word();
int meth_generic_writeln();
int meth_generic_y();
int meth_generic_HTTPCanonicalURL();
int meth_generic_HTTPCurrentDocAddr();
int meth_generic_HTTPCurrentDocAddrParsed();
int meth_generic_HTTPCurrentDocAddrSet();
int meth_generic_HTTPEncodeURL();
int meth_generic_HTTPDecodeURL();
int meth_generic_HTTPGet();
int meth_generic_HTTPGetNParse();
int meth_generic_HTTPPost();
int meth_generic_HTTPSubmit();
int meth_generic_HTTPHotListAdd();
int meth_generic_HTTPHotListChange();
int meth_generic_HTTPHotListDelete();
int meth_generic_HTTPHotListGet();
int meth_generic_HTTPHotListLoad();
int meth_generic_HTTPHotListSave();

int meth_generic_addPicFromFile();	/* to support <IMG> */

int meth_generic_code_HTML_txt();
int meth_generic_code_HTML_txtAnchor();
int meth_generic_code_HTML_header_large();
int meth_generic_code_HTML_header_medium();
int meth_generic_code_HTML_header_small();

