#include "utils.h"
#include "mystrings.h"
#include "hash.h"
#include "ident.h"
/*
*/
strNIntPair symList[] = {
	STR_BCard,		"BCard",
	STR_BCardList,		"BCardList",
	STR_BDColor,		"BDColor",
	STR_BGColor,		"BGColor",
	STR_C,			"C",
	STR_CRColor,		"CRColor",
	STR_D,			"D",
	STR_F,			"F",
	STR_FCard,		"FCard",
	STR_FCardList,		"FCardList",
	STR_FGColor,		"FGColor",
	STR_GB_copy,		"GB_copy",
	STR_GB_data,		"GB_data",
	STR_GB_char,		"GB_char",
	STR_GB_count,		"GB_count",
	STR_GB_create,		"GB_create",
	STR_GB_decChar,		"GB_decChar",
	STR_GB_decChar1,	"GB_decChar1",
	STR_GB_decLine,		"GB_decLine",
	STR_GB_decLine1,	"GB_decLine1",
	STR_GB_free,		"GB_free",
	STR_GB_herePtr,		"GB_herePtr",
	STR_GB_incChar,		"GB_incChar",
	STR_GB_incChar1,	"GB_incChar1",
	STR_GB_incLine,		"GB_incLine",
	STR_GB_incLine1,	"GB_incLine1",
	STR_GB_line,		"GB_line",
	STR_GB_moveToChar,	"GB_moveToChar",
	STR_GB_moveToLine,	"GB_moveToLine",
	STR_GB_moveToStart,	"GB_moveToStart",
	STR_GB_nthChar,		"GB_nthChar",
	STR_GB_nthLine,		"GB_nthLine",
	STR_GB_set,		"GB_set",
	STR_GB_setCopy,		"GB_setCopy",
	STR_GIF,		"GIF",
	STR_HTML,		"HTML",
	STR_HTMLAnchor,		"HTMLAnchor",
	STR_HTMLAddress,	"HTMLAddress",
	STR_HTMLHeaderInfo,	"HTMLHeaderInfo",
	STR_HTMLIsIndex,	"HTMLIsIndex",
	STR_HTMLSource,		"HTMLSource",
	STR_HTMLStruct,		"HTMLStruct",
	STR_HTMLStyle,		"HTMLStyle",
	STR_HTMLTitle,		"HTMLTitle",
	STR_HTTPCanonicalURL,	"HTTPCanonicalURL",
	STR_HTTPCurrentDocAddr,	"HTTPCurrentDocAddr",
	STR_HTTPCurrentDocAddrParsed,	"HTTPCurrentDocAddrParsed",
	STR_HTTPCurrentDocAddrSet,	"HTTPCurrentDocAddrSet",
	STR_HTTPDecodeURL,	"HTTPDecodeURL",
	STR_HTTPEncodeURL,	"HTTPEncodeURL",
	STR_HTTPGet,		"HTTPGet",
	STR_HTTPGet_test,	"HTTPGet_test",
	STR_HTTPGetNParse,	"HTTPGetNParse",
	STR_HTTPHotListAdd,	"HTTPHotListAdd",
	STR_HTTPHotListChange,	"HTTPHotListChange",
	STR_HTTPHotListDelete,	"HTTPHotListDelete",
	STR_HTTPHotListGet,	"HTTPHotListGet",
	STR_HTTPHotListLoad,	"HTTPHotListLoad",
	STR_HTTPHotListSave,	"HTTPHotListSave",
	STR_HTTPPost,		"HTTPPost",
	STR_HTTPSend,		"HTTPSend",
	STR_HTTPSubmit,		"HTTPSubmit",
	STR_ID,	 		"ID",
	STR_ONHash,	 	"ONHash",
	STR_ONList,		"ONList",
	STR_PS,			"PS",
	STR_SGMLBuildDoc,	"SGMLBuildDoc",
	STR_SGMLBuildDocB,	"SGMLBuildDocB",
	STR_SGMLBuildDoc_flush,	"SGMLBuildDoc_flush",
	STR_SGMLBuildDoc_insertObj,	"SGMLBuildDoc_insertObj",
	STR_SGMLBuildDoc_setBuff,	"SGMLBuildDoc_setBuff",
	STR_SGMLBuildDoc_setColors,	"SGMLBuildDoc_setColors",
	STR_SGMLBuildDoc_span,	"SGMLBuildDoc_span",
	STR_SGMLBuildDoc_test1,	"SGMLBuildDoc_test1",
	STR_SGMLBuildDoc_test2,	"SGMLBuildDoc_test1",
	STR_SGMLFindAnchorOffset, "FindAnchorOffset",
	STR_SGMLGetStyle,	"SGMLGetStyle",
	STR_SGMLMathFormater,	"SGMLMathFormater",
	STR_SGMLMathRender,	"SGMLMathRender",
	STR_SGMLReBuildDoc,	"SGMLReBuildDoc",
	STR_SGMLSetStyle,	"SGMLSetStyle",
	STR_SGMLTableFormater,	"SGMLTableFormater",
	STR_SGMLTableFormater2,	"SGMLTableFormater2",
	STR_SGMLTableFormater3,	"SGMLTableFormater3",
	STR_SGMLTileDoc,	"SGMLTileDoc",
	STR_STGInfo,		"STGInfo",
	STR_STG_clean,		"STG_clean",
	STR_STG_tagPtr,		"STG_tagPtr",
	STR_STG_attr,		"STG_attr",
	STR_STG_test,		"STG_test",
	STR_TTY,		"TTY",
	STR_WWWNameOfFile,	"WWWNameOfFile",
	STR_XBM,		"XBM",
	STR_XBMBG,		"XBMBG",
	STR_XBMButton,		"XBMButton",
	STR_XPM,		"XPM",
 	STR_XPMBG,		"XPMBG",
	STR_XPMButton,		"XPMButton",
	STR__BCardList,		"_BCardList",
	STR__FCardList,		"_FCardList",
	STR__HTMLSrc,		"_HTMLSrc",
	STR__TFStruct,	 	"_TFStruct",
	STR__argAttr,		"_argAttr",
	STR__children,	  	"_children",
	STR__classInfo,	 	"_classInfo",
	STR__classScript,       "_classScript",
	STR__classScriptVV,	"_classScriptVV",
	STR__colorInfo,	 	"_colorInfo",
	STR__content,		"_content",
	STR__content2,		"_content2",
	STR__content3,		"_content3",
	STR__currentCard,	"_currentCard",
	STR__eventMask,		"_eventMask",
	STR__font,		"_font",
	STR__getSelection,	"_getSelection",
	STR__isField,		"_isField",
	STR__label,		"_label",
	STR__memoryGroup,	"_memoryGroup",
	STR__menu,		"_menu",
	STR__menuEntries,	"_menuEntries",
	STR__paneConfig,	"_paneConfig",
	STR__parent,	    	"_parent",
	STR__projectIcon,	"_projectIcon",
	STR__script,	    	"_script",
	STR__scriptVV,		"_scriptVV",
	STR__shownDepend,	"_shownDepend",
	STR__shownNotify,	"_shownNotify",
	STR__startClient,	"_startClient",
	STR__tempScriptVV,	"_tempScriptVV",
	STR__varList,	   	"_varList",
	STR_abs,		"abs",
	STR_access,		"access",
	STR_accessible,		"accessible",
	STR_acospi,		"acospi",
	STR_active,	     	"active",
	STR_activeHelp,		"activeHelp",
	STR_address,		"address",
	STR_addPicFromFile,	"addPicFromFile",
	STR_after,	      	"after",
	STR_alarm,	      	"alarm",
	STR_anyCard,		"anyCard",
	STR_append,		"append",
	STR_appendStr,		"appendStr",
	STR_arg,	       	"arg",
	STR_args,	       	"args",
	STR_argument,		"argument",
	STR_arrowButton,	"arrowButton",
	STR_ascii,	   	"ascii",
	STR_asciiVal,	   	"asciiVal",
	STR_asin,		"asin",
	STR_asinpi,		"asinpi",
	STR_atan,		"atan",
	STR_atan2,		"atan2",
	STR_atanpi,		"atanpi",
	STR_attrDump,	   	"attrDump",
	STR_back,	   	"back",
	STR_backTrack,	   	"backTrack",
	STR_bell,	   	"bell",
	STR_bellVolume,	   	"bellVolume",
	STR_border,	     	"border",
	STR_building_maxFontDescent,	"building_maxFontDescent",
	STR_building_maxFontHeight,	"building_maxFontHeight",
	STR_building_vspan,	"building_vspan",
	STR_canvalize,		"canvalize",
	STR_card,	   	"card",
	STR_cardList,	   	"cardList",
	STR_cardNameList,       "cardNameList",
	STR_cardNum,	    	"cardNum",
	STR_ceil,		"ceil",
	STR_cellType,	    	"cellType",
	STR_char,	 	"char",
	STR_charButtonMask,	"charButtonMask",
	STR_charHeight,	 	"charHeight",
	STR_charHighLiteMask,	"charHighLiteMask",
	STR_charMask,		"charMask",
	STR_charStringMask,	"charStringMask",
	STR_charUnderlineMask,	"charUnderlineMask",
	STR_charWidth,	  	"charWidth",
	STR_child,	      	"child",
	STR_childn,	     	"childn",
	STR_children, 		"children",
	STR_class,	      	"class",
	STR_classObj,	   	"classObj",
	STR_classScript,	"classScript",
	STR_clean,		"clean",
	STR_clear,		"clear",
	STR_clearArea,		"clearArea",
	STR_clearSelection,	"clearSelection",
	STR_clearWindow,	"clearWindow",
	STR_cli,		"cli",
	STR_client,		"client",
	STR_clientFD,		"clientFD",
	STR_clientFP,		"clientFP",
	STR_clientList,	 	"clientList",
	STR_clone,	 	"clone",
	STR_clone2,	 	"clone2",
	STR_colSpan,	  	"colSpan",
	STR_collapse,	  	"collapse",
	STR_color,	  	"color",
	STR_comm,		"comm",
	STR_compressSpaces,	"compressSpaces",
	STR_concat,		"concat",
	STR_concatenate,	"concatenate",
	STR_concatList,		"concatList",
	STR_config,		"config",
	STR_content,	    	"content",
	STR_content2,	   	"content2",
	STR_content3,	   	"content3",
	STR_copyArea,	   	"copyArea",
	STR_cos,		"cos",
	STR_cosmic,	     	"cosmic",
	STR_countBCards,	"countBCards",
	STR_countChars,		"countChars",
	STR_countChildren,	"countChildren",
	STR_countFCards,	"countFCards",
	STR_countItems,		"countItems",
	STR_countLines,		"countLines",
	STR_countWords,		"countWords",
	STR_create,		"create",
	STR_ctrlKeyP,		"ctrlKeyP",
	STR_cursorColumn,	"cursorColumn",
	STR_cursorRow,		"cursorRow",
	STR_cursorShape,	"cursorShape",
	STR_currentCard,	"currentCard",
	STR_currentChar,	"currentChar",
	STR_currentLine,	"currentLine",
	STR_currentTag,		"currentTag",
	STR_currentWord,	"currentWord",
	STR_cursor,	     	"cursor",
	STR_cursorBlink,	"cursorBlink",
	STR_cursorBlinkDelay,	"cursorBlinkDelay",
	STR_cursorPosition,	"cursorPosition",
	STR_cycleColors,	"cycleColors",
	STR_darkerColor,	"darkerColor",
	STR_date,		"date",
	STR_deHighLight,	"deHighLight",
	STR_debug,		"debug",
	STR_deepObjectListSend,	"deepObjectListSend",
	STR_defineNewFont,	"defineNewFont",
	STR_delay,	      	"delay",
	STR_deleteFile,		"deleteFile",
	STR_deleteSubStr,	"deleteSubStr",
	STR_deleteSubStrQ,	"deleteSubStrQ",
	STR_depth,		"depth",
	STR_destroy,		"destroy",
	STR_destroyVariable,	"destroyVariable",
	STR_detach,		"detach",
	STR_dial,		"dial",
	STR_direction,	  	"direction",
	STR_docURL,	  	"docURL",
	STR_drawArc,		"drawArc",
	STR_drawCircle,		"drawCircle",
	STR_drawCursor,		"drawCursor",
	STR_drawFillOval,	"drawFillOval",
	STR_drawFillRect,	"drawFillRect",
	STR_drawLine,		"drawLine",
	STR_drawPoint,		"drawPoint",
	STR_drawPoints,		"drawPoints",
	STR_drawOval,		"drawOval",
	STR_drawRect,		"drawRect",
	STR_drawText,		"drawText",
	STR_dtd,	    	"dtd",
	STR_dumpAll,	    	"dumpAll",
	STR_dumpMethods,	"dumpMethods",
	STR_dumpHierarchy,      "dumpHierarchy",
	STR_dumpObject,	 	"dumpObject",
	STR_endClient,	      	"endClient",
	STR_enter,	      	"enter",
	STR_environVar,		"environVar",
	STR_eraseCursor,	"eraseCursor",
	STR_eraseFillOval,	"eraseFillOval",
	STR_eraseFillRect,	"eraseFillRect",
	STR_eraseLine,		"eraseLine",
	STR_eraseOval,		"eraseOval",
	STR_eraseRect,		"eraseRect",
	STR_eraseText,		"eraseText",
	STR_event,		"event",
	STR_eventMask,		"eventMask",
	STR_error,		"error",
	STR_exist,		"exist",
	STR_exit,	       	"exit",
	STR_expose,	     	"expose",
	STR_fd,      		"fd",
	STR_field,	      	"field",
	STR_fieldList,	  	"fieldList",
	STR_filePath,		"filePath",
	STR_fillArc,		"fillArc",
	STR_filter,		"filter",
	STR_filter2,		"filter2",
	STR_filter3,		"filter3",
	STR_find,		"find",
	STR_findPattern,	"findPattern",
	STR_first,		"first",
	STR_firstCard,		"firstCard",
	STR_float,	      	"float",
	STR_float2int,	  	"float2int",
	STR_float2str,	  	"float2str",
	STR_floor,		"floor",
	STR_flush,		"flush",
	STR_font,	       	"font",
	STR_format,		"format",
	STR_fp,	 		"fp",
	STR_freeSelf,	 	"freeSelf",
	STR_gapH,		"gapH",
	STR_gapV,		"gapV",
	STR_generic,	    	"generic",
	STR_geta,		"geta",
	STR_getCurrentCard,	"getCurrentCard",
	STR_getResource,	"getResource",
	STR_getSelection,	"getSelection",
	STR_getVariable,	"getVariable",
	STR_glass,		"glass",
	STR_goto,		"goto",
	STR_gravity,	    	"gravity",
	STR_hash,	       	"hash",
	STR_highLight,		"highLight",
	STR_height,		"height",
	STR_host,	       	"host",
	STR_hpane,		"hpane",
	STR_iconName,		"iconName",
	STR_inDelimStat,	"inDelimStat",
	STR_inDelimStr1,	"inDelimStr1",
	STR_inDelimStr2,	"inDelimStr2",
	STR_inPreP,		"inPreP",
	STR_info,	       	"info",
	STR_initialize,	 	"initialize",
	STR_input,		"input",
	STR_inputn,		"inputn",
	STR_insert,		"insert",
	STR_insertLine,		"insertLine",
	STR_int,		"int",
	STR_int2float,	  	"int2float",
	STR_int2str,	    	"int2str",
	STR_interpret,	  	"interpret",
	STR_invertCursor,	"invertCursor",
	STR_invertFillOval,	"invertFillOval",
	STR_invertFillRect,	"invertFillRect",
	STR_invertLine,		"invertLine",
	STR_invertOval,		"invertOval",
	STR_invertRect,		"invertRect",
	STR_invertText,		"invertText",
	STR_isBlank,		"isBlank",
	STR_item,	  	"item",
	STR_key,		"key",
	STR_keyWords,		"keyWords",
	STR_label,	      	"label",
	STR_last,	      	"last",
	STR_lastCard,	      	"lastCard",
	STR_leave,	      	"leave",
	STR_lighterColor,	"lighterColor",
	STR_lineRowOffset,	"lineRowOffset",
	STR_list,		"list",
	STR_listAllObjects,	"listAllObjects",
	STR_load,	   	"load",
	STR_loadFile,	   	"loadFile",
	STR_loadObjFile,	"loadObjFile",
	STR_loadSTG,		"loadSTG",
	STR_lock,	       	"lock",
	STR_lower,		"lower",
	STR_makeTempFile,	"makeTempFile",
	STR_mark,		"mark",
	STR_max,		"max",
	STR_maxWidth,		"maxWidth",
	STR_maxHeight,		"maxHeight",
	STR_menu,		"menu",
	STR_menuConfig,	 	"menuConfig",
	STR_message,	    	"message",
	STR_min,		"min",
	STR_minWidth,		"minWidth",
	STR_minHeight,		"minHeight",
	STR_mirage,	    	"mirage",
	STR_modalExit,		"modalExit",
	STR_mouse,		"mouse",
	STR_mouseLocal,		"mouseLocal",
	STR_mouseX,		"mouseX",
	STR_mouseXY,		"mouseXY",
	STR_mouseY,		"mouseY",
	STR_mouseButton,	"mouseButton",
	STR_mouseButtonState,	"mouseButtonState",
	STR_move,	    	"move",
	STR_muddle,		"muddle",
	STR_name,	       	"name",
	STR_next,		"next",
	STR_nextTag,		"nextTag",
	STR_nextCard,		"nextCard",
	STR_not,		"not",
	STR_nthChar,		"nthChar",
	STR_nthChild,		"nthChild",
	STR_nthItem,		"nthItem",
	STR_nthLine,		"nthLine",
	STR_nthListItem,	"nthListItem",
	STR_nthObjectInList,	"nthObjectInList",
	STR_nthSibling,		"nthSibling",
	STR_nthWord,		"nthWord",
	STR_numberOfLinesDisplayed, "numberOfLinesDisplayed",
	STR_object,		"object",
	STR_objectListAppend,	"objectListAppend",
	STR_objectListAppend_children,	"objectListAppend_children",
	STR_objectListCount,    "objectListCount",
	STR_objectListCount_children,    "objectListCount_children",
	STR_objectListDelete,	"objectListDelete",
	STR_objectListDelete_children,	"objectListDelete_children",
	STR_objectListPrepend,	"objectListPrepend",
	STR_objectListPrepend_children,	"objectListPrepend_children",
	STR_objectListSend,     "objectListSend",
	STR_objectListSend_children,     "objectListSend_children",
	STR_objectOrigin,	"objectOrigin",
	STR_objectPosition,	"objectPosition",
	STR_offset,		"offset",
	STR_outDelimStr,	"outDelimStr",
	STR_output,		"output",
	STR_page,		"page",
	STR_pane,		"pane",
	STR_paneConfig,		"paneConfig",
	STR_panic,		"panic",
	STR_param,	      	"param",
	STR_parent,	     	"parent",
	STR_path,	       	"path",
	STR_pathSimplify,	"pathSimplify",
	STR_pid,		"pid",
	STR_pipe,		"pipe",
	STR_pop,		"pop",
	STR_port,	       	"port",
	STR_position,		"position",
	STR_prepend,		"prepend",
	STR_prependStr,		"prependStr",
	STR_previous,		"previous",
	STR_previousTag,	"previousTag",
	STR_previousCard,	"previousCard",
	STR_print,	      	"print",
	STR_printf,	      	"printf",
	STR_processInput,	"processInput",
	STR_processKeyInput,	"processKeyInput",
	STR_processMouseInput,	"processMouseInput",
	STR_processMouseMove,	"processMouseMove",
	STR_project,	    	"project",
	STR_projectIcon,	"projectIcon",
	STR_protocol,		"protocol",
	STR_purgeCache,		"purgeCache",
	STR_push,		"push",
	STR_quit,		"quit",
	STR_random,		"random",
	STR_randomizeArea,	"randomizeArea",
	STR_raise,		"raise",
	STR_recall,		"recall",
	STR_recentCard,		"recentCard",
	STR_render,	     	"render",
	STR_reparent,		"reparent",
	STR_replaceChar,	"replaceChar",
	STR_replaceCharQ,	"replaceCharQ",
	STR_replaceStr,		"replaceStr",
	STR_replaceStrQ,	"replaceStrQ",
	STR_resize,		"resize",
	STR_retrieve,		"retrieve",
	STR_reverseList,	"reverseList",
	STR_rowSpan,		"rowSpan",
	STR_rubber,	     	"rubber",
	STR_save,	       	"save",
	STR_saveAs,	     	"saveAs",
	STR_saveFile,	       	"saveFile",
	STR_saveObjFile,	"saveObjFile",
	STR_scan,	     	"scan",
	STR_scanf,	     	"scanf",
	STR_script,	     	"script",
	STR_scrollBar,		"scrollBar",
	STR_search,		"search",
	STR_security,		"security",
	STR_securityMode,	"securityMode",
	STR_self,		"self",
	STR_selectionInfo,	"selectionInfo",
	STR_send,		"send",
	STR_serverList,	 	"serverList",
	STR_seta,		"seta",
	STR_setCurrentCard,	"setCurrentCard",
	STR_setMouse,		"setMouse",
	STR_setResource,	"setResource",
	STR_setSelection,	"setSelection",
	STR_setVariable,	"setVariable",
	STR_setRevVideoFlag,	"setRevVideoFlag",
	STR_shiftKeyP,		"shiftKeyP",
	STR_shownDepend,	"shownDepend",
	STR_shownNotify,	"shownNotify",
	STR_shownPositionH,	"shownPositionH",
	STR_shownPositionSizeH,	"shownPositionSizeH",
	STR_shownPositionSizeV,	"shownPositionSizeV",
	STR_shownPositionV,	"shownPositionV",
	STR_shownSizeH,		"shownSizeH",
	STR_shownSizeV,		"shownSizeV",
	STR_sin,		"sin",
	STR_sincos,		"sincos",
	STR_sincospi,		"sincospi",
	STR_sinpi,		"sinpi",
	STR_size,		"size",
	STR_sleep,	        "sleep",
	STR_slider,		"slider",
	STR_smudge,		"smudge",
	STR_socket,		"socket",
	STR_sort,		"sort",
	STR_sortList,		"sortList",
	STR_speed,	        "speed",
	STR_specialEffect,      "specialEffect",
	STR_split,		"split",
	STR_sprintf,		"sprintf",
	STR_startClient,	"startClient",
	STR_stack,		"stack",
	STR_startUpDisplay,	"startUpDisplay",
	STR_startUpGeom_x,	"startUpGeom_x",
	STR_startUpGeom_y,	"startUpGeom_y",
	STR_startUpGeom_width,	"startUpGeom_width",
	STR_startUpGeom_height,	"startUpGeom_height",
	STR_store,		"store",
	STR_str,		"str",
	STR_strlen,		"strlen",
	STR_str2float,	        "str2float",
	STR_str2int,	        "str2int",
	STR_strChop,		"strChop",
	STR_style,	        "style",
	STR_styles,             "styles",
	STR_substitute,		"substitute",
	STR_system,		"system",
	STR_radio,		"radio",
	STR_table,	        "table",
	STR_tan,		"tan",
	STR_tanpi,		"tanpi",
	STR_target,		"target",
	STR_test1,		"test1",
	STR_test2,		"test2",
	STR_test3,		"test3",
	STR_test4,		"test4",
	STR_text,	        "text",
	STR_textWidth,		"textWidth",
	STR_time,	        "time",
	STR_toggle,		"toggle",
	STR_toggleState,	"toggleState",
	STR_toggleStyle,	"toggleStyle",
	STR_tool,		"tool",
	STR_totalLineCount,	"totalLineCount",
	STR_tray,	        "tray",
	STR_trimBeginEdge,	"trimBeginEdge",
	STR_trimBeginEdgeQ,	"trimBeginEdgeQ",
	STR_trimEdge,		"trimEdge",
	STR_trimEdgeQ,		"trimEdgeQ",
	STR_trimEndEdge,	"trimEndEdge",
	STR_trimEndEdgeQ,	"trimEndEdgeQ",
	STR_tweak,		"tweak",
	STR_txt,		"txt",
	STR_txtButton,		"txtButton",
	STR_txtDisp,		"txtDisp",
	STR_txtEdit,		"txtEdit",
	STR_txtEditLine,	"txtEditLine",
	STR_txtLabel,		"txtLabel",
	STR_unhash,	       	"unhash",
	STR_usual,		"usual",
	STR_verbatim,		"verbatim",
	STR_version,	        "version",
	STR_violaArgs,		"violaArgs",
	STR_violaPath,		"violaPath",
	STR_visible,	        "visible",
	STR_vpane,		"vpane",
	STR_watch,	        "watch",
	STR_width,		"width",
	STR_window,	        "window",
	STR_windowName,	        "windowName",
	STR_windowPosition,	"windowPosition",
	STR_word,		"word",
	STR_wrap,	        "wrap",
	STR_write,	        "write",
	STR_writeln,	        "writeln",
	STR_x,			"x",
	STR_y,			"y",
	STR_AC_SGML_txt,	"AC_SGML_txt",
	STR_AC_SGML_header_big, "AC_SGML_header_big",
	STR_cloneID,		"cloneID",
	STR_code_HMML_body,		"code_HMML_body",
	STR_code_HMML_example,		"code_HMML_example",
	STR_code_HMML_fld,		"code_HMML_fld",
	STR_code_HMML_header_large,	"code_HMML_header_large",
	STR_code_HMML_header_medium,	"code_HMML_header_medium",
	STR_code_HMML_header_small,	"code_HMML_header_small",
	STR_code_HMML_hmml,		"code_HMML_hmml",
	STR_code_HMML_list,		"code_HMML_list",
	STR_code_HMML_listing,		"code_HMML_listing",
	STR_code_HMML_txt,		"code_HMML_txt",
	STR_code_HMML_txtAnchor,	"code_HMML_txtAnchor",
	STR_code_HMML_txtCommand,	"code_HMML_txtCommand",
	STR_code_HMML_txtItalic,	"code_HMML_txtItalic",
	STR_code_HTML__doc,		"code_HTML__doc",
	STR_code_HTML_body,		"code_HTML_body",
	STR_code_HTML_example,		"code_HTML_example",
	STR_code_HTML_fld,		"code_HTML_fld",
	STR_code_HTML_header_large,	"code_HTML_header_large",
	STR_code_HTML_header_medium,	"code_HTML_header_medium",
	STR_code_HTML_header_small,	"code_HTML_header_small",
	STR_code_HTML_html,		"code_HTML_html",
	STR_code_HTML_list,		"code_HTML_list",
	STR_code_HTML_listing,		"code_HTML_listing",
	STR_code_HTML_txt,		"code_HTML_txt",
	STR_code_HTML_txtAnchor,	"code_HTML_txtAnchor",
	STR_code_HTML_txtCommand,	"code_HTML_txtCommand",
	STR_code_HTML_txtItalic,	"code_HTML_txtItalic",
	STR__baseImage,		"_baseImage",
	STR__expImage,		"_expImage",
	STR_baseImageWidth,	"baseImageWidth",
	STR_baseImageHeight,	"baseImageHeight",
	STR_sendToInterface, 	"sendToInterface",	/* Scott: for motif */
	NULL,			NULL
};

HashTable *symStr2ID, *symID2Str;

int init_ident()
{
	int i;
	strNIntPair *symp;

	symStr2ID = initHashTable(300, hash_str, cmp_str, NULL, NULL,
				getHashEntry_str, 
				putHashEntry_str, 
				putHashEntry_replace_str,
				removeHashEntry_str);

	symID2Str = initHashTable(300, hash_int, cmp_int, NULL, free,
				getHashEntry_int, 
				putHashEntry_int, 
				putHashEntry_replace_int,
				removeHashEntry_int);

	for (symp = symList; symp->s; symp++) {
		if (!symStr2ID->get(symStr2ID, (int)symp->s)) {
			symStr2ID->put(symStr2ID, (int)symp->s, (int)symp->i);
			symID2Str->put(symID2Str, (int)symp->i, (int)symp->s);
		}
	}

/*	printf("------------------\n");
	dumpHashTable(symStr2ID);
	printf("------------------\n");
	dumpHashTable(symID2Str);
	printf("------------------\n");
*/
	return 1;
}

/*
fff(){
  char str[100];

  for(;;) {
    if (scanf("%s\n", &str) == -1) break;
    printf("\t\"%s\",\t\tSLOT_%s,\n", str, str);
  }
  for(;;) {
    if (scanf("%s\n", &str) == -1) break;
    printf("\tSLOT_%s,\n", str);
  }
}
*/

/*
dumpSymList() {
  int i;
  for (i=0;symList[i].s;i++) {
    printf("\tSTR_%s,\t\t\"%s\",\n", symList[i].s, symList[i].s);
  }
}
*/
