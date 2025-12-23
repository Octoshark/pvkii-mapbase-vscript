# vscript.cmake

set(VSCRIPT_DIR ${CMAKE_CURRENT_LIST_DIR})

set(
	VSCRIPT_SOURCE_FILES

	# VScript
	"${VSCRIPT_DIR}/vscript.cpp"
	"${VSCRIPT_DIR}/vscript_squirrel.cpp"
	"${VSCRIPT_DIR}/vscript_squirrel.nut"
	"${VSCRIPT_DIR}/vscript_bindings_base.cpp"
	"${VSCRIPT_DIR}/vscript_bindings_base.h"
	"${VSCRIPT_DIR}/vscript_bindings_math.cpp"
	"${VSCRIPT_DIR}/vscript_bindings_math.h"

	# Squirrel
	"${VSCRIPT_DIR}/squirrel/sqstdlib/sqstdaux.cpp"
	"${VSCRIPT_DIR}/squirrel/sqstdlib/sqstdblob.cpp"
	"${VSCRIPT_DIR}/squirrel/sqstdlib/sqstdio.cpp"
	"${VSCRIPT_DIR}/squirrel/sqstdlib/sqstdmath.cpp"
	"${VSCRIPT_DIR}/squirrel/sqstdlib/sqstdrex.cpp"
	"${VSCRIPT_DIR}/squirrel/sqstdlib/sqstdstream.cpp"
	"${VSCRIPT_DIR}/squirrel/sqstdlib/sqstdstring.cpp"
	"${VSCRIPT_DIR}/squirrel/sqstdlib/sqstdsystem.cpp"
	"${VSCRIPT_DIR}/squirrel/squirrel/sqapi.cpp"
	"${VSCRIPT_DIR}/squirrel/squirrel/sqbaselib.cpp"
	"${VSCRIPT_DIR}/squirrel/squirrel/sqclass.cpp"
	"${VSCRIPT_DIR}/squirrel/squirrel/sqcompiler.cpp"
	"${VSCRIPT_DIR}/squirrel/squirrel/sqdebug.cpp"
	"${VSCRIPT_DIR}/squirrel/squirrel/sqfuncstate.cpp"
	"${VSCRIPT_DIR}/squirrel/squirrel/sqlexer.cpp"
	"${VSCRIPT_DIR}/squirrel/squirrel/sqmem.cpp"
	"${VSCRIPT_DIR}/squirrel/squirrel/sqobject.cpp"
	"${VSCRIPT_DIR}/squirrel/squirrel/sqstate.cpp"
	"${VSCRIPT_DIR}/squirrel/squirrel/sqtable.cpp"
	"${VSCRIPT_DIR}/squirrel/squirrel/sqvm.cpp"

	# sqdbg
	"${VSCRIPT_DIR}/sqdbg/sqdbg/server.cpp"
)

add_library(
	vscript STATIC
	${VSCRIPT_SOURCE_FILES}
)

target_compile_definitions(
	vscript PRIVATE
	VSCRIPT_STATIC_LIB
	MAPBASE_VSCRIPT
	_CRT_SECURE_NO_WARNINGS
	_WINSOCK_DEPRECATED_NO_WARNINGS
)

target_include_directories(
	vscript PRIVATE
	"${VSCRIPT_DIR}"
	"${VSCRIPT_DIR}/squirrel/include"
	"${VSCRIPT_DIR}/squirrel/squirrel"
	"${VSCRIPT_DIR}/squirrel/sqstdlib"
	"${VSCRIPT_DIR}/sqdbg/include"
)
