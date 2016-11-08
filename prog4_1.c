
#include <stdio.h>
#include <string.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
    
int main (int argc, char **argv) {
      printf("Assignment #4-1,Taylor Ewertz, t_ewertz@yahoo.com\n");
      char buff[256];
      int error;
      lua_State *L =  luaL_newstate();  /* opens Lua */
      luaopen_base(L);             /* opens the basic library */
      luaopen_table(L);            /* opens the table library */
      luaopen_io(L);               /* opens the I/O library */
      luaopen_string(L);           /* opens the string lib. */
      luaopen_math(L);             /* opens the math lib. */
      luaL_dofile(L, argv[1]);
      lua_close(L);    
    
      return 0;
}
