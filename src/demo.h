/*
 * demo.h
 *
 *  Created on: 2017年9月30日
 *      Author: mashunfeng
 */

#ifndef SRC_DEMO_H_
#define SRC_DEMO_H_


typedef struct GCheader {
	GCObject *next;
	lu_byte tt;
	lu_byte marked;
} GCheader;


union GCObject {
  GCheader gch;
  union TString ts;
  union Udata u;
  union Closure cl;
  struct Table h;
  struct Proto p;
  struct UpVal uv;
  struct lua_State th;  /* thread */
};




#endif /* SRC_DEMO_H_ */



