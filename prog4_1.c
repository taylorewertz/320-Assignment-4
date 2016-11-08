
#include <stdio.h>
#include <string.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
    
int main (int argc, char **argv) {
      printf("Assignment #4-1,Taylor Ewertz, t_ewertz@yahoo.com\n");

      lua_State *L =  luaL_newstate();  /* opens Lua */
      luaL_openlibs(L);
      luaL_dofile(L, argv[1]);
      lua_close(L);    
    
      return 0;
}
